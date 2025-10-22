#pragma once

#include "../include/types.h"
#include "../include/species.h"

#define EVOS_PER_MON 16

#define FALSE 0
#define TRUE 1

#define ARRAY_COUNT(array) (sizeof(array) / sizeof((array)[0]))

#define SPECIES_TABLES_TERMIN 0xFEFE

//CHANGE THESE IF YOU WANT
//#define EXPAND_LEARNSETS //If you're using this feature, make sure you insert the Complete Fire Red Upgrade 
//                         afterwards or the game will crash when selecting certain Pokemon. Comment out this
//                         line if you're using the CFRU to expand movesets.

//#define INCLUDE_FOOTPRINTS //If you uncomment this line, make sure to uncomment gMonFootprintTable in "repoints", and remove the footprint remover in "bytereplacement"

#define NUM_TMSHMS 128
#define NUM_MOVE_TUTOR_MOVES 152

struct ListMenu;

struct ListMenuTemplate
{
    /*0x00*/ const struct ListMenuItem *items;
    /*0x04*/ void (* moveCursorFunc)(s32 itemIndex, bool8 onInit, struct ListMenu *list);
    /*0x08*/ void (* itemPrintFunc)(u8 windowId, u32 itemId, u8 y);
    /*0x0C*/ u16 totalItems;
    /*0x0E*/ u16 maxShowed;
    /*0x10*/ u8 windowId;
    /*0x11*/ u8 header_X;
    /*0x12*/ u8 item_X;
    /*0x13*/ u8 cursor_X;
    /*0x14*/ u8 upText_Y:4; // x1, x2, x4, x8 = xF
             u8 cursorPal:4; // x10, x20, x40, x80 = xF0
    /*0x15*/ u8 fillValue:4; // x1, x2, x4, x8 = xF
             u8 cursorShadowPal:4; // x10, x20, x40, x80 = xF0
    /*0x16*/ u8 lettersSpacing:3;
             u8 itemVerticalPadding:3;
             u8 scrollMultiple:2; // x40, x80 = xC0
    /*0x17*/ u8 fontId:6; // x1, x2, x4, x8, x10, x20 = x3F
             u8 cursorKind:2; // x40, x80
}; /* size = 0x18 */

struct ListMenu
{
    struct ListMenuTemplate template;
    u16 cursorPos;
    u16 itemsAbove;
    u8 unk_1C;
    u8 unk_1D;
    u8 taskId;
    u8 unk_1F;
};

struct WindowTemplate
{
    u8 bg;
    u8 tilemapLeft;
    u8 tilemapTop;
    u8 width;
    u8 height;
    u8 paletteNum;
    u16 baseBlock;
};



void __attribute__((long_call)) DexScreen_AddTextPrinterParameterized(u8 windowId, u8 fontId, const u8 *str, u8 x, u8 y, u8 colorIdx);
bool32 __attribute__((long_call)) IsNationalPokedexEnabled(void);
void __attribute__((long_call)) FillBgTilemapBufferRect(u8 bg, u16 tileNum, u8 x, u8 y, u8 width, u8 height, u8 palette);
u16 __attribute__((long_call)) AddWindow(const struct WindowTemplate *template);
u8 __attribute__((long_call)) ListMenuInit(const struct ListMenuTemplate *listMenuTemplate, u16 cursorPos, u16 itemsAbove);
void __attribute__((long_call)) FillWindowPixelBuffer(u8 windowId, u8 fillValue);
void __attribute__((long_call)) DexScreen_PrintStringWithAlignment(const u8 *str, s32 mode);
void __attribute__((long_call)) DexScreen_PrintControlInfo(const u8 *src);
void __attribute__((long_call)) PutWindowTilemap(u8 windowId);
void __attribute__((long_call)) CopyWindowToVram(u8 windowId, u8 mode);
void __attribute__((long_call)) MoveCursorFunc_DexModeSelect(s32 itemIndex, bool8 onInit, struct ListMenu *list);
void __attribute__((long_call)) ItemPrintFunc_DexModeSelect(u8 windowId, u32 itemId, u8 y);

#define PIXEL_FILL(num) ((num) | ((num) << 4))
#define NELEMS(arr) (sizeof(arr)/sizeof(*(arr)))

extern const u8 gText_Seen[];
extern const u8 gText_Region[];
extern const u8 gText_Owned[];
#define gText_National (void*)0x8415DD7
extern const u8 gText_PokedexTableOfContents[];
#define gText_PickOK (void*)0x8415DB8

extern const u8 gText_PokemonList[];
#define gText_NumericalMode (void*)0x8415E95
extern const u8 gText_PokemonHabitats[];
extern const u8 gText_DexCategory_GrasslandPkmn[];
extern const u8 gText_DexCategory_ForestPkmn[];
extern const u8 gText_DexCategory_WatersEdgePkmn[];
extern const u8 gText_DexCategory_SeaPkmn[];
extern const u8 gText_DexCategory_CavePkmn[];
extern const u8 gText_DexCategory_MountainPkmn[];
extern const u8 gText_DexCategory_RoughTerrainPkmn[];
extern const u8 gText_DexCategory_UrbanPkmn[];
extern const u8 gText_DexCategory_RarePkmn[]; 
#define gText_Search (void*)0x8415E88 
#define gText_AToZMode (void*)0x8415EA4 
#define gText_PokedexOther (void*)0x8415EB0 
extern const u8 gText_ClosePokedex[];
#define gText_TypeMode (void*)0x8415ED5 
#define gText_LightestMode (void*)0x8415EDF 
#define gText_SmallestMode (void*)0x8415EED 
#define gText_NumericalModeKanto (void*)0x8415F0E
#define gText_NumericalModeNational (void*)0x8415F24 
