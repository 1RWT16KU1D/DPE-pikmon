#include "defines.h"
#include "../include/evolution.h"
#include "../include/graphics.h"
#include "../include/main.h"
#include "../include/pokedex.h"
#include "../include/text.h"

//Backsprite battle start

extern const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1];
extern const struct PokedexEntry gPokedexEntries[];
extern const u16 gSpeciesIdToCryId[];
extern const u16 gSpeciesToNationalPokedexNum[];

extern const u16 gPokedexOrder_Regional[];
extern const u16 gRegionalDexCount;
extern const u16 gPokedexOrder_Alphabetical[];
extern const u16 gPokedexOrderAlphabeticalCount;
extern const u16 gPokedexOrder_Weight[];
extern const u16 gPokedexOrderWeightCount;
extern const u16 gPokedexOrder_Height[];
extern const u16 gPokedexOrderHeightCount;
extern const u16 gPokedexOrder_Type[];
extern const u16 gPokedexOrderTypeCount;

extern const struct CompressedSpriteSheet gMonBackPicTable[];
extern const struct CompressedSpriteSheet gMonFrontPicTable[];
extern const struct CompressedSpritePalette gMonPaletteTable[];
extern const struct CompressedSpritePalette gMonShinyPaletteTable[];

const u16 gNumSpecies = NUM_SPECIES;
const u16 gNumDexEntries = FINAL_DEX_ENTRY;

u8 __attribute__((long_call)) GetGenderFromSpeciesAndPersonality(u16 species, u32 personality);
u8  __attribute__((long_call)) GetUnownLetterFromPersonality(u32 personality);
bool8 __attribute__((long_call)) GetSetPokedexFlag(u16 nationalNum, u8 caseID);
s8 __attribute__((long_call)) DexFlagCheck(u16 nationalDexNo, u8 caseId, bool8 indexIsSpecies);
u16 __attribute__((long_call)) SpeciesToNationalPokedexNum(u16 species);
void __attribute__((long_call)) break_func();

//This file's functions
static u16 LoadNationalPokedexView(void);

enum TextMode {
    TEXT_LEFT,
    TEXT_CENTER,
    TEXT_RIGHT
};

static const struct WindowTemplate sWindowTemplate_ModeSelect = {
    .bg = 1,
    .tilemapLeft = 1,
    .tilemapTop = 2,
    .width = 20,
    .height = 16,
    .paletteNum = 0,
    .baseBlock = 0x0008
};

static const struct WindowTemplate sWindowTemplate_SelectionIcon = {
    .bg = 1,
    .tilemapLeft = 21,
    .tilemapTop = 11,
    .width = 8,
    .height = 6,
    .paletteNum = 1,
    .baseBlock = 0x0148
};

static const struct WindowTemplate sWindowTemplate_DexCounts = {
    .bg = 1,
    .tilemapLeft = 21,
    .tilemapTop = 2,
    .width = 9,
    .height = 9,
    .paletteNum = 0,
    .baseBlock = 0x0178
};

static const struct ListMenuItem sListMenuItems_KantoDexModeSelect[] = {
    {gText_PokemonList,                  -3},
    {gText_NumericalMode,                9},
    {gText_PokemonHabitats,              -3},
    {gText_DexCategory_GrasslandPkmn,    0},
    {gText_DexCategory_ForestPkmn,       1},
    {gText_DexCategory_WatersEdgePkmn,   2},
    {gText_DexCategory_SeaPkmn,          3},
    {gText_DexCategory_CavePkmn,         4},
    {gText_DexCategory_MountainPkmn,     5},
    {gText_DexCategory_RoughTerrainPkmn, 6},
    {gText_DexCategory_UrbanPkmn,        7},
    {gText_DexCategory_RarePkmn,         8},
    {gText_Search,                       -3},
    {gText_AToZMode,                     10},
    {gText_TypeMode,                     11},
    {gText_LightestMode,                 12},
    {gText_SmallestMode,                 13},
    {gText_PokedexOther,                 -3},
    {gText_ClosePokedex,                 -2},
};

static const struct ListMenuTemplate sListMenuTemplate_KantoDexModeSelect = {
    .items = sListMenuItems_KantoDexModeSelect,
    .moveCursorFunc = MoveCursorFunc_DexModeSelect,
    .itemPrintFunc = ItemPrintFunc_DexModeSelect,
    .totalItems = NELEMS(sListMenuItems_KantoDexModeSelect),
    .maxShowed = 9,
    .windowId = 0,
    .header_X = 0,
    .item_X = 12,
    .cursor_X = 4,
    .upText_Y = 2,
    .cursorPal = 1,
    .fillValue = 0,
    .cursorShadowPal = 3,
    .lettersSpacing = 1,
    .itemVerticalPadding = 0,
    .scrollMultiple = 0,
    .fontId = 2,
    .cursorKind = 0,
};

static const struct ListMenuItem sListMenuItems_NatDexModeSelect[] = {
    {gText_PokemonList,                  -3},
    {gText_NumericalModeKanto,           9},
    {gText_NumericalModeNational,        14},
    {gText_PokemonHabitats,              -3},
    {gText_DexCategory_GrasslandPkmn,    0},
    {gText_DexCategory_ForestPkmn,       1},
    {gText_DexCategory_WatersEdgePkmn,   2},
    {gText_DexCategory_SeaPkmn,          3},
    {gText_DexCategory_CavePkmn,         4},
    {gText_DexCategory_MountainPkmn,     5},
    {gText_DexCategory_RoughTerrainPkmn, 6},
    {gText_DexCategory_UrbanPkmn,        7},
    {gText_DexCategory_RarePkmn,         8},
    {gText_Search,                       -3},
    {gText_AToZMode,                     10},
    {gText_TypeMode,                     11},
    {gText_LightestMode,                 12},
    {gText_SmallestMode,                 13},
    {gText_PokedexOther,                 -3},
    {gText_ClosePokedex,                 -2},
};

static const struct ListMenuTemplate sListMenuTemplate_NatDexModeSelect = {
    .items = sListMenuItems_NatDexModeSelect,
    .moveCursorFunc = MoveCursorFunc_DexModeSelect,
    .itemPrintFunc = ItemPrintFunc_DexModeSelect,
    .totalItems = NELEMS(sListMenuItems_NatDexModeSelect),
    .maxShowed = 9,
    .windowId = 0,
    .header_X = 0,
    .item_X = 12,
    .cursor_X = 4,
    .upText_Y = 2,
    .cursorPal = 1,
    .fillValue = 0,
    .cursorShadowPal = 3,
    .lettersSpacing = 1,
    .itemVerticalPadding = 0,
    .scrollMultiple = 0,
    .fontId = 2,
    .cursorKind = 0,
};

u16 SpeciesToCryId(u16 species)
{
	return species + 1;
}

struct PivotalDexSpecies
{
	u16 species;
	u16 dexNum;
};

u16 NationalPokedexNumToSpecies(u16 nationalNum)
{
	u16 species;

	if (nationalNum == 0)
		return 0;

	species = 0;

	while (species < (NUM_SPECIES - 1) && gSpeciesToNationalPokedexNum[species] != nationalNum)
		species++;

	if (species == NUM_SPECIES - 1)
		return 0;

	return species + 1;
}

void LoadSpecialPokePic(const struct CompressedSpriteSheet* src, void* dest, u16 species, u32 personality, bool8 isFrontPic)
{
	u16 oldSpecies = species;
	const struct CompressedSpriteSheet* table = isFrontPic ? gMonFrontPicTable : gMonBackPicTable;

	if (species != oldSpecies) //Updated sprite
		src = &table[species];
	
	if (species > NUM_SPECIES) // is species unknown? draw the ? icon
		LZ77UnCompWram((void*) gMonFrontPicTable[0].data, dest);
	else
		LZ77UnCompWram((void*) src->data, dest);

	DrawSpindaSpots(species, personality, dest, isFrontPic);
}

const u32* GetFrontSpritePalFromSpeciesAndPersonality(u16 species, u32 otId, u32 personality)
{
	u32 shinyValue;
	
	return (u32*) gMonShinyPaletteTable[species].data;

	if (species > NUM_SPECIES)
		return (u32*) gMonPaletteTable[0].data;

	shinyValue = HIHALF(otId) ^ LOHALF(otId) ^ HIHALF(personality) ^ LOHALF(personality);
	if (shinyValue < 8)
		return (u32*) gMonShinyPaletteTable[species].data;
	else
		return (u32*) gMonPaletteTable[species].data;
}

const struct CompressedSpritePalette* GetMonSpritePalStructFromOtIdPersonality(u16 species, u32 otId , u32 personality)
{
	u32 shinyValue;

	shinyValue = HIHALF(otId) ^ LOHALF(otId) ^ HIHALF(personality) ^ LOHALF(personality);
	if (shinyValue < 8)
		return &gMonShinyPaletteTable[species];
	else
		return &gMonPaletteTable[species];
}

u16 GetIconSpecies(u16 species, __attribute__((unused)) u32 personality)
{
	u16 result;

	if (species > NUM_SPECIES)
		result = 0;
	else
		result = species;

	return result;
}

bool8 IsInBattle(void)
{
	return gMain.inBattle;
}


u16 CountSpeciesInDex(u8 caseId, bool8 whichDex)
{
	u16 count = 0;
	u16 i;

	switch (whichDex) {
		case 0: //Regional
			for (i = 0; i < gRegionalDexCount; ++i)
			{
				if (DexFlagCheck(SpeciesToNationalPokedexNum(gPokedexOrder_Regional[i]), caseId, FALSE))
					count++;
			}
			break;
		case 1: //National
			for (i = 1; i <= FINAL_DEX_ENTRY; ++i)
			{
				if (DexFlagCheck(i, caseId, FALSE))
					count++;
			}
			break;
	}

	return count;
}

u16 GetRegionalPokedexCount(u8 caseId)
{
	u16 i, count;

	for (i = 0, count = 0; i < gRegionalDexCount; ++i)
	{
		if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(gPokedexOrder_Regional[i]), caseId))
			count++;
	}

	return count;
}

bool16 HasAllRegionalMons(void)
{
	u16 i;

	for (i = 0; i < gRegionalDexCount; ++i)
	{
		if (!GetSetPokedexFlag(SpeciesToNationalPokedexNum(gPokedexOrder_Regional[i]), FLAG_GET_CAUGHT))
			return FALSE;
	}

	return TRUE;
}

bool16 sp1B9_SeenAllRegionalMons(void)
{
	u16 i;

	for (i = 0; i < gRegionalDexCount; ++i)
	{
		if (!GetSetPokedexFlag(SpeciesToNationalPokedexNum(gPokedexOrder_Regional[i]), FLAG_GET_SEEN))
			return FALSE;
	}

	return TRUE;
}

bool16 HasAllMons(void)
{
	u16 i;

	for (i = 1; i <= FINAL_DEX_ENTRY; ++i)
	{
		if (!GetSetPokedexFlag(i, FLAG_GET_CAUGHT))
			return FALSE;
	}

	return TRUE;
}

u16 SpeciesToRegionalDexNum(u16 species)
{
	u16 i;

	for (i = 0; i < gRegionalDexCount; ++i)
	{
		if (gPokedexOrder_Regional[i] == species)
			return i + 1;
	}
	
	return 0;
}

extern const u16 gPokedexOrder_Regional[];
extern const u16 gRegionalDexCount;
extern const u16 gPokedexOrder_Alphabetical[];
extern const u16 gPokedexOrderAlphabeticalCount;
extern const u16 gPokedexOrder_Weight[];
extern const u16 gPokedexOrderWeightCount;
extern const u16 gPokedexOrder_Height[];
extern const u16 gPokedexOrderHeightCount;
extern const u16 gPokedexOrder_Type[];
extern const u16 gPokedexOrderTypeCount;

u16 LoadPokedexViews(u8 type)
{
	u16 i, counter, count, lastMeaningfulIndex;
	const u16* dexList;
	bool8 showUnseenSpecies = FALSE;
	bool8 showUncaughtSpecies = FALSE;

	switch (type) {
		case 0:
			dexList = gPokedexOrder_Regional;
			count = gRegionalDexCount;
			showUnseenSpecies = TRUE;
			showUncaughtSpecies = TRUE;
			break;
		case 1:
			dexList = gPokedexOrder_Alphabetical;
			count = gPokedexOrderAlphabeticalCount;
			showUncaughtSpecies = TRUE;
			break;
		case 2:
			dexList = gPokedexOrder_Type;
			count = gPokedexOrderTypeCount;
			break;
		case 3:
			dexList = gPokedexOrder_Weight;
			count = gPokedexOrderWeightCount;
			break;
		case 4:
			dexList = gPokedexOrder_Height;
			count = gPokedexOrderHeightCount;
			break;
		case 5:
		default:
			return LoadNationalPokedexView();
	}

	for (i = 0, counter = 0, lastMeaningfulIndex = 0; i < count; ++i)
	{
		u16 species = dexList[i];
		bool8 seen = DexFlagCheck(species, FLAG_GET_SEEN, TRUE);
		bool8 caught = DexFlagCheck(species, FLAG_GET_CAUGHT, TRUE);
		
		if (!seen)
		{
			if (showUnseenSpecies)
			{
				sPokedexScreenData->listItems[counter].name = (void*) 0x8415F66; //-----
				sPokedexScreenData->listItems[counter++].id = species | (0 << 16); //Unseen
			}
		}
		else if (caught || showUncaughtSpecies)
		{
			lastMeaningfulIndex = counter + 1;
			sPokedexScreenData->listItems[counter].name = gSpeciesNames[species];
			
			if (caught)
				sPokedexScreenData->listItems[counter++].id = species | (3 << 16); //Caught
			else
				sPokedexScreenData->listItems[counter++].id = species | (1 << 16); //Seen
		}
	}

	if (lastMeaningfulIndex == 0)
	{
		//Fix empty list
		lastMeaningfulIndex = 1;
		sPokedexScreenData->listItems[0].name = (void*) 0x8415F66; //-----
		sPokedexScreenData->listItems[0].id = gPokedexOrder_Regional[0] | (0 << 16); //Unseen
	}

	return lastMeaningfulIndex;
}

static u16 LoadNationalPokedexView(void)
{
	u16 i, lastMeaningfulIndex;

	for (i = 1, lastMeaningfulIndex = 0; i < NATIONAL_DEX_COUNT; ++i)
	{
		bool8 seen = DexFlagCheck(i, FLAG_GET_SEEN, FALSE);
		bool8 caught = DexFlagCheck(i, FLAG_GET_CAUGHT, FALSE);
		u16 species = NationalPokedexNumToSpecies(i);
		u16 listIndex = i - 1;

		if (!seen)
		{
			sPokedexScreenData->listItems[listIndex].name = (void*) 0x8415F66; //-----
			sPokedexScreenData->listItems[listIndex].id = species | (0 << 16); //Unseen
		}
		else
		{
			lastMeaningfulIndex = i;
			sPokedexScreenData->listItems[listIndex].name = gSpeciesNames[species];
			
			if (caught)
				sPokedexScreenData->listItems[listIndex].id = species | (3 << 16); //Caught
			else
				sPokedexScreenData->listItems[listIndex].id = species | (1 << 16); //Seen
		}
	}

	return lastMeaningfulIndex;
}
void DexScreen_PrintNum3LeadingZeroes(u8 windowId, u8 fontId, u16 num, u8 x, u8 y, u8 colorIdx)
{
    u8 buff[5];
    buff[0] = (num / 1000) + _0;
    buff[1] = ((num %= 1000) / 100) + _0;
    buff[2] = ((num %= 100) / 10) + _0;
    buff[3] = (num % 10) + _0;
    buff[4] = _END;
    DexScreen_AddTextPrinterParameterized(windowId, fontId, buff, x, y, colorIdx);
}

void DexScreen_PrintNum3RightAlign(u8 windowId, u8 fontId, u16 num, u8 x, u8 y, u8 colorIdx)
{
    u8 buff[5];
    int i;
    buff[0] = (num / 1000) + _0;
    buff[1] = ((num %= 1000) / 100) + _0;
    buff[2] = ((num %= 100) / 10) + _0;
    buff[3] = (num % 10) + _0;
    buff[4] = _END;
    for (i = 0; i < 3; i++)
    {
        if (buff[i] != _0)
            break;
        buff[i] = _SPACE;
    }
    DexScreen_AddTextPrinterParameterized(windowId, fontId, buff, x, y, colorIdx);
}

void DexScreen_InitGfxForTopMenu(void)
{
    struct ListMenuTemplate listMenuTemplate;
    FillBgTilemapBufferRect(3, 0x00E, 0, 0, 30, 20, 0x00);
    FillBgTilemapBufferRect(2, 0x000, 0, 0, 30, 20, 0x11);
    FillBgTilemapBufferRect(1, 0x000, 0, 0, 30, 20, 0x11);
    sPokedexScreenData->modeSelectWindowId = AddWindow(&sWindowTemplate_ModeSelect);
    sPokedexScreenData->selectionIconWindowId = AddWindow(&sWindowTemplate_SelectionIcon);
    sPokedexScreenData->dexCountsWindowId = AddWindow(&sWindowTemplate_DexCounts);
    if (IsNationalPokedexEnabled())
    {
        listMenuTemplate = sListMenuTemplate_NatDexModeSelect;
        listMenuTemplate.windowId = sPokedexScreenData->modeSelectWindowId;
        sPokedexScreenData->modeSelectListMenuId = ListMenuInit(&listMenuTemplate, sPokedexScreenData->modeSelectCursorPos, sPokedexScreenData->modeSelectItemsAbove);
        FillWindowPixelBuffer(sPokedexScreenData->dexCountsWindowId, PIXEL_FILL(0));
        DexScreen_AddTextPrinterParameterized(sPokedexScreenData->dexCountsWindowId, 0, gText_Seen, 0, 2, 0);
        DexScreen_AddTextPrinterParameterized(sPokedexScreenData->dexCountsWindowId, 0, gText_Region, 8, 13, 0);
        DexScreen_PrintNum3RightAlign(sPokedexScreenData->dexCountsWindowId, 0, sPokedexScreenData->numSeenKanto, 48, 13, 2);
        DexScreen_AddTextPrinterParameterized(sPokedexScreenData->dexCountsWindowId, 0, gText_National, 8, 24, 0);
        DexScreen_PrintNum3RightAlign(sPokedexScreenData->dexCountsWindowId, 0, sPokedexScreenData->numSeenNational, 48, 24, 2);
        DexScreen_AddTextPrinterParameterized(sPokedexScreenData->dexCountsWindowId, 0, gText_Owned, 0, 37, 0);
        DexScreen_AddTextPrinterParameterized(sPokedexScreenData->dexCountsWindowId, 0, gText_Region, 8, 48, 0);
        DexScreen_PrintNum3RightAlign(sPokedexScreenData->dexCountsWindowId, 0, sPokedexScreenData->numOwnedKanto, 48, 48, 2);
        DexScreen_AddTextPrinterParameterized(sPokedexScreenData->dexCountsWindowId, 0, gText_National, 8, 59, 0);
        DexScreen_PrintNum3RightAlign(sPokedexScreenData->dexCountsWindowId, 0, sPokedexScreenData->numOwnedNational, 48, 59, 2);
    }
    else
    {
        listMenuTemplate = sListMenuTemplate_KantoDexModeSelect;
        listMenuTemplate.windowId = sPokedexScreenData->modeSelectWindowId;
        sPokedexScreenData->modeSelectListMenuId = ListMenuInit(&listMenuTemplate, sPokedexScreenData->modeSelectCursorPos, sPokedexScreenData->modeSelectItemsAbove);
        FillWindowPixelBuffer(sPokedexScreenData->dexCountsWindowId, PIXEL_FILL(0));
        DexScreen_AddTextPrinterParameterized(sPokedexScreenData->dexCountsWindowId, 1, gText_Seen, 0, 9, 0);
        DexScreen_PrintNum3RightAlign(sPokedexScreenData->dexCountsWindowId, 1, sPokedexScreenData->numSeenKanto, 32, 21, 2);
        DexScreen_AddTextPrinterParameterized(sPokedexScreenData->dexCountsWindowId, 1, gText_Owned, 0, 37, 0);
        DexScreen_PrintNum3RightAlign(sPokedexScreenData->dexCountsWindowId, 1, sPokedexScreenData->numOwnedKanto, 32, 49, 2);
    }
    FillWindowPixelBuffer(0, PIXEL_FILL(15));
    DexScreen_PrintStringWithAlignment(gText_PokedexTableOfContents, TEXT_CENTER);
    FillWindowPixelBuffer(1, PIXEL_FILL(15));
    DexScreen_PrintControlInfo(gText_PickOK);
    PutWindowTilemap(0);
    CopyWindowToVram(0, 2);
    PutWindowTilemap(1);
    CopyWindowToVram(1, 2);
    PutWindowTilemap(sPokedexScreenData->dexCountsWindowId);
    CopyWindowToVram(sPokedexScreenData->dexCountsWindowId, 2);
}
