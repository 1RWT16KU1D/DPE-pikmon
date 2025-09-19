#include "defines.h"

struct Habitat
{
	const struct HabitatPage* page;
	u32 numPages;
};

struct HabitatPage
{
	const u16* mons;
	u32 numMons;
};


const u16 gGrasslandPage1[] =
{
	SPECIES_ROCKPIKMIN,
	SPECIES_ROCKPIKMIN_MEGA,
	SPECIES_SOUL_ROCK,
};

const u16 gGrasslandPage2[] =
{
	SPECIES_FLINTBEETLE,
	SPECIES_DOODLEBUG,
	SPECIES_GLINTBEETLE,
	SPECIES_GLINTBEETLE_MEGA,
};

const u16 gGrasslandPage3[] =
{
	SPECIES_HONEYWISP,
	SPECIES_DANDELFLY,
	SPECIES_DANDELFLY_MEGA,
	SPECIES_SUNSQUISH,
};

const u16 gGrasslandPage4[] =
{
	SPECIES_CREEPINGCHRYSANTHEMUM,
	SPECIES_STARTLESPORE,
	SPECIES_PELLETPOSY,
	SPECIES_MASTERONION,
};

const u16 gGrasslandPage5[] =
{
	SPECIES_BURROWNIT,
	SPECIES_JOUSTMITE,
	SPECIES_FLIGHTYJOUSTMITE,
};

const u16 gGrasslandPage6[] =
{
	SPECIES_WADDLEQUAFF,
	SPECIES_PROQUILLION,
};

const u16 gGrasslandPage7[] =
{
	SPECIES_TANGELA,
	SPECIES_SUNKERN,
	SPECIES_SUNFLORA,
};

const u16 gGrasslandPage8[] =
{
	SPECIES_MOCKIWI,
	SPECIES_CRESDTEDMOCKIWI,
	SPECIES_ELONGATERCRUSHBLAT,
};

const u16 gGrasslandPage9[] =
{
	SPECIES_ARMOREDMAWDAD,
	SPECIES_ARMOREDMAWDAD_MEGA,
};

const u16 gGrasslandPage10[] =
{
	SPECIES_SPECTRALID,
	SPECIES_SPECTRALID_RED,
	SPECIES_SPECTRALID_YELLOW,
};

const u16 gGrasslandPage11[] =
{
	SPECIES_SPECTRALID_UNMARKED,
	SPECIES_SPECTRALID_UNMARKEDRED,
	SPECIES_SPECTRALID_UNMARKEDPURPLE,
};

const u16 gGrasslandPage12[] =
{
	SPECIES_SPECTRALID_ELECTRIC,
	SPECIES_SPECTRALID_HEY0,
	SPECIES_SPECTRALID_HEY1,
};

const u16 gForestPage1[] =
{
	SPECIES_YELLOWPIKMIN,
	SPECIES_YELLOWPIKMIN_MEGA,
	SPECIES_SOUL_YELLOW,
};

const u16 gForestPage2[] =
{
	SPECIES_SWOOPINGSNITCHBUG,
	SPECIES_BUMBLINGSNITCHBUG,
	SPECIES_DIRIGIBUG,
};

const u16 gForestPage3[] =
{
	SPECIES_FEMALESHEARGRUB,
	SPECIES_SWARMINGSHEARGRUB,
	SPECIES_MAMASHEARGRUB,
};

const u16 gForestPage4[] =
{
	SPECIES_MALESHEARGRUB,
	SPECIES_SHEARWIG,
	SPECIES_QUEENSHEARWIG
};

const u16 gForestPage5[] =
{
	SPECIES_SKITTERLEAF,
	SPECIES_DESICCATEDSKITTTERLEAF,
};

const u16 gForestPage6[] =
{
	SPECIES_ARMOREDCANNONLARVA,
	SPECIES_ARMOREDCANNONBEETLE,
	SPECIES_HORNEDCANNONBEETLE,
};

const u16 gForestPage7[] =
{
	SPECIES_DOWNYSNAGRET,
	SPECIES_BURROWINGSNAGRET,
	SPECIES_PILEATEDSNAGRET,
	SPECIES_PILEATEDSNAGRET_MEGA,
};

const u16 gForestPage8[] =
{
	SPECIES_BALDYLONGLEGS,
	SPECIES_SHAGGYLONGLEGS,
};

const u16 gForestPage9[] =
{
	SPECIES_DWARFBULBORB,
	SPECIES_DWARFORANGEBULBORB,
};

const u16 gForestPage10[] =
{
	SPECIES_BULBORBLARVA,
	SPECIES_BULBORB,
	SPECIES_JUMBOBULBORB,
	SPECIES_JUMBOBULBORB_MEGA,
};

const u16 gForestPage11[] =
{
	SPECIES_EMPERORBULBLAX,
	SPECIES_SOVREIGNBULBLAX,
	SPECIES_SOVREIGNBULBLAX_MEGA,
};

const u16 gWatersEdgePage1[] =
{
	SPECIES_BLUEPIKMIN,
	SPECIES_BLUEPIKMIN_MEGA,
	SPECIES_SOUL_BLUE,
};

const u16 gWatersEdgePage2[] =
{
	SPECIES_SKUTTERCHUCK,
	SPECIES_CALCIFIEDCRUSHBLAT,
	SPECIES_SKEETERSKATE,
	SPECIES_MUCKERSKATE,
};

const u16 gWatersEdgePage3[] =
{
	SPECIES_PUCKERINGBLINNOW,
	SPECIES_SPUTTLEFISH,
	SPECIES_PRICKLEPUFF,
	SPECIES_WADDLEPUS,
};

const u16 gWatersEdgePage4[] =
{
	SPECIES_ARISTOCRABOFFSPRING,
	SPECIES_ARISTOCRAB,
};

const u16 gWatersEdgePage5[] =
{
	SPECIES_WITHERINGBLOWHOG,
	SPECIES_PUFFYBLOWHOG,
};

const u16 gWatersEdgePage6[] =
{
	SPECIES_GOOLIX,
	SPECIES_FOOLIX,
	SPECIES_PEARLYCLAMCLAMP,
};

const u16 gWatersEdgePage7[] =
{
	SPECIES_WOLPOLE,
	SPECIES_YELLOWWOLLYHOP,
	SPECIES_MASTERHOP,
	SPECIES_MASTERHOP_MEGA,
};

const u16 gWatersEdgePage8[] =
{
	SPECIES_CRUSTEDRUMPUP,
};

const u16 gWatersEdgePage9[] =
{
	SPECIES_SANDBELCHINGMEERSLUG,
};

const u16 gWatersEdgePage10[] =
{
	SPECIES_QUAGGLEDMIRECLOPS,
	SPECIES_QUAGGLEDMIRECLOPS_MEGA,
};

const u16 gSeaPage1[] =
{
	SPECIES_PURPLEPIKMIN,
	SPECIES_PURPLEPIKMIN_MEGA,
	SPECIES_SOUL_PURPLE,
};

const u16 gSeaPage2[] =
{
	SPECIES_BULBMIN,
	SPECIES_ADULTBULBMIN,
	SPECIES_ADULTBULBMIN_MEGAS,
	SPECIES_ADULTBULBMIN_MEGAB,
};

const u16 gSeaPage3[] =
{
	SPECIES_HERMITCRAWMAD,
	SPECIES_BUGEYEDCRAWMAD,
	SPECIES_SEGMENTEDCRAWBSTER,
};

const u16 gSeaPage4[] =
{
	SPECIES_LESSERSPOTTEDJELLYFLOAT,
	SPECIES_GREATERSPOTTEDJELLYFLOAT,
	SPECIES_TOADYBLOYSTER,
	SPECIES_RANGINGBLOYSTER,
};

const u16 gSeaPage5[] =
{
	SPECIES_WATERDUMPLE,
	SPECIES_LONGWATERDUMPLE,
};

const u16 gSeaPage6[] =
{
	SPECIES_WOLLYHOP,
	SPECIES_CHILLYHOP,
	SPECIES_WATERYBLOWHOG,
};

const u16 gSeaPage7[] =
{
	SPECIES_MOLDYDWARFBULBORB,
	SPECIES_MOLDYSLOOCH,
	SPECIES_TOXSTOOL,
};

const u16 gSeaPage8[] =
{
	SPECIES_ANODEBEETLE,
	SPECIES_ELECTRICCOTTONADE,
};

const u16 gSeaPage9[] =
{
	SPECIES_WATERWRAITH,
};

const u16 gSeaPage10[] =
{
	SPECIES_TITANDWEEVIL,
};

const u16 gSeaPage11[] =
{
	SPECIES_REMEMBEREDOLDBUDDY,
};

const u16 gCavePage1[] =
{
	SPECIES_WHITEPIKMIN,
	SPECIES_WHITEPIKMIN_MEGA,
	SPECIES_SOUL_WHITE,
};

const u16 gCavePage2[] =
{
	SPECIES_DWARFBULBEAR,
	SPECIES_SPOTTYBULBEAR,
	SPECIES_EMPRESSBULBLAX,
	SPECIES_EMPRESSBULBLAX_MEGA,
};

const u16 gCavePage3[] =
{
	SPECIES_PHOSBAT,
	SPECIES_VEHEAMOTHPHOSBAT,
};

const u16 gCavePage4[] =
{
	SPECIES_TUSKEDBLOWHOG,
	SPECIES_BLOOMCAPBLOYSTER,
};

const u16 gCavePage5[] =
{
	SPECIES_BEADYLONGLEGS,
	SPECIES_RAGINGLONGLEGS,
	SPECIES_GROOVYLONGLEGS,
};

const u16 gCavePage6[] =
{
	SPECIES_VOLATILEDWEEVIL,
	SPECIES_MANATLEGS,
	SPECIES_MANATLEGS_MEGA,
	SPECIES_GATTLINGGROINK,
};

const u16 gCavePage7[] =
{
	SPECIES_PYROCLASTICSLOOCH,
	SPECIES_SCORCHCAKE,
	SPECIES_FIERYBULBLAX,
};

const u16 gCavePage8[] =
{
	SPECIES_CRAMMEDWRAITH,
	SPECIES_ARMURK,
};

const u16 gCavePage9[] =
{
	SPECIES_ALBINODWARFBULBORB,
	SPECIES_HAIRYBULBORB,
	SPECIES_WHIPTONGUEBULBORB,
	SPECIES_ORANGEBULBORB,
};

const u16 gCavePage10[] =
{
	SPECIES_FIERYBLOWLET,
	SPECIES_FIERYBLOWHOG,
	SPECIES_TITANBLOWHOG,
	SPECIES_TITANBLOWHOG_MEGA,
};

const u16 gCavePage11[] =
{
	SPECIES_PLASMWRAITH,
};

const u16 gMountainPage1[] =
{
	SPECIES_REDPIKMIN,
	SPECIES_REDPIKMIN_VETERAN,
	SPECIES_REDPIKMIN_MEGA,
	SPECIES_SOUL_RED,
};

const u16 gMountainPage2[] =
{
	SPECIES_SNOWBULBORB,
	SPECIES_FROSTYDWARFBULBORB,
	SPECIES_FROSTYBULBORB,
};

const u16 gMountainPage3[] =
{
	SPECIES_SNOWYBLOWHOG,
	SPECIES_BLIZZARDINGBLOWHOG,
};

const u16 gMountainPage4[] =
{
	SPECIES_ARCTICCANNONLARVA,
	SPECIES_ARCTICCANNONBEETLE,
};

const u16 gMountainPage5[] =
{
	SPECIES_BEARDEDAMPRAT,
	SPECIES_BEARDEDAMPRAT_STATIC,
};

const u16 gMountainPage6[] =
{
	SPECIES_SNOWFLAKEFLUTTERTAIL,
};

const u16 gMountainPage7[] =
{
	SPECIES_CLICKINGSLURKER,
	SPECIES_LURINGSLURKER,
	SPECIES_MEDUSALSLURKER,
};

const u16 gMountainPage8[] =
{
	SPECIES_BLUBBUG,
	SPECIES_PUFFYBLUBBUG,
};

const u16 gMountainPage9[] =
{
	SPECIES_STUFFEDBELLBLOOM,
};

const u16 gMountainPage10[] =
{
	SPECIES_COURAGEREACTOR,
};
const u16 gRoughTerrainPage1[] =
{
	SPECIES_WINGEDPIKMIN,
	SPECIES_WINGEDPIKMIN_MEGA,
	SPECIES_SOUL_WINGED,
};

const u16 gRoughTerrainPage2[] =
{
	SPECIES_PUFFMIN,
	SPECIES_PUFFMIN_MEGA,
	SPECIES_PUFFSTALK,
	SPECIES_PUFFSTOOL,
};

const u16 gRoughTerrainPage3[] =
{
	SPECIES_UJADANI,
	SPECIES_MITITE,
};

const u16 gRoughTerrainPage4[] =
{
	SPECIES_SCORNET,
	SPECIES_SCORNETMAESTRO,
};

const u16 gRoughTerrainPage5[] =
{
	SPECIES_ARACHNODE,
};

const u16 gRoughTerrainPage6[] =
{
	SPECIES_BOGSWALLOW,
};

const u16 gRoughTerrainPage7[] =
{
	SPECIES_GRUBCHUCKER,
};

const u16 gRoughTerrainPage8[] =
{
	SPECIES_CENTIPARE,
	SPECIES_ADULTCENTIPARE,
};

const u16 gRoughTerrainPage9[] =
{
	SPECIES_GRABBIT,
	SPECIES_COPPELLER,
	SPECIES_MUGGONFLY,
};

const u16 gUrbanPage1[] =
{
	SPECIES_ICEPIKMIN,
	SPECIES_ICEPIKMIN_MEGA,
	SPECIES_SOUL_ICE,
};

const u16 gUrbanPage2[] =
{
	SPECIES_CRUMBUG,
	SPECIES_BREADBUG,
	SPECIES_GIANTBREADBUG,
	SPECIES_GIANTBREADBUG_MEGA,
};

const u16 gUrbanPage3[] =
{
	SPECIES_MINIATURESNOOTWHACKER,
	SPECIES_MAMMOTHSNOOTWHACKER,
};

const u16 gUrbanPage4[] =
{
	SPECIES_GILDEMANDWEE,
	SPECIES_GILDEMANDWEE_NOGOLD,
	SPECIES_GILDEMANDER,
	SPECIES_GILDEMANDER_NOGOLD,
};

const u16 gUrbanPage5[] =
{
	SPECIES_ICEBLOWNDWEEVIL,
};

const u16 gUrbanPage6[] =
{
	SPECIES_TOYBORB,
	SPECIES_BULBLORD,
};

const u16 gUrbanPage7[] =
{
	SPECIES_TOYBLOWHOG,
	SPECIES_TELESCOPINGPUMPHOG,
};

const u16 gUrbanPage8[] =
{
	SPECIES_PINCHIPEDE,
	SPECIES_LARGEMOUTHWOLLYHOP,
};

const u16 gUrbanPage9[] =
{
	SPECIES_BEEB,
	SPECIES_BLADEDBEEB,
	SPECIES_STUDDEDBEEB,
};

const u16 gUrbanPage10[] =
{
	SPECIES_ASSEMBLEDCOURAGE,
};

const u16 gRarePage1[] =
{
	SPECIES_GLOWSEED,
	SPECIES_GLOWPIKMIN,
	SPECIES_GLOWPIKMIN_MEGA,
	SPECIES_SOUL,
};

const u16 gRarePage2[] =
{
	SPECIES_BERSERKLEECHHYDROE,
};

const u16 gRarePage3[] =
{
	SPECIES_MAMUTA,
	SPECIES_SMOKYPROGG,
	SPECIES_SMOKYPROGG_MASTER,
};

const u16 gRarePage5[] =
{
	SPECIES_OATCHI,
	SPECIES_MOSS,
	SPECIES_ANCIENTSIREHOUND,
};

const u16 gRarePage6[] =
{
	SPECIES_ANCIENTSIREHOUND_ICE,
	SPECIES_ANCIENTSIREHOUND_ELECTRIC,
	SPECIES_ANCIENTSIREHOUND_FIRE,
	SPECIES_ANCIENTSIREHOUND_GLOOM,
};

const u16 gRarePage7[] =
{
	SPECIES_PEBBLEPITCHER,
	SPECIES_BULBORBWITHAGUN,
};

const u16 gRarePage8[] =
{
	SPECIES_KIRBY,
	SPECIES_KIRBY_GRASS,
	SPECIES_KIRBY_FIRE,
	SPECIES_KIRBY_WATER,
};

const u16 gRarePage9[] =
{
	SPECIES_KIRBY_ELECTRIC,
	SPECIES_KIRBY_ICE,
	SPECIES_KIRBY_ROCK,
	SPECIES_KIRBY_GROUND,
};

const u16 gRarePage10[] =
{
	SPECIES_KIRBY_FIGHTING,
	SPECIES_KIRBY_PSYCHIC,
	SPECIES_KIRBY_GHOST,
	SPECIES_KIRBY_POISON,
};

const u16 gRarePage11[] =
{
	SPECIES_KIRBY_BUG,
	SPECIES_KIRBY_FLYING,
	SPECIES_KIRBY_DRAGON,
};

const u16 gRarePage12[] =
{
	SPECIES_KIRBY_DARK,
	SPECIES_KIRBY_STEEL,
	SPECIES_KIRBY_FAIRY,
};

const u16 gRarePage12[] =
{
	SPECIES_PLACEHOLDERLARVA,
};

const u16 gRarePage12[] =
{
	SPECIES_KIRBY_DEMO77,
	SPECIES_KIRBY_USUBA,
	SPECIES_KIRBY_KAKUREIMO,
};

const u16 gRarePage12[] =
{
	SPECIES_KIRBY_PIKUTABE,
	SPECIES_KIRBY_NAMAPONGASHI,
	SPECIES_KIRBY_CHAPPYPROTO,
};

const struct HabitatPage gGrasslandPages[] =
{
	{gGrasslandPage1, ARRAY_COUNT(gGrasslandPage1)},
	{gGrasslandPage2, ARRAY_COUNT(gGrasslandPage2)},
	{gGrasslandPage4, ARRAY_COUNT(gGrasslandPage4)},
	{gGrasslandPage5, ARRAY_COUNT(gGrasslandPage5)},
	{gGrasslandPage6, ARRAY_COUNT(gGrasslandPage6)},
	{gGrasslandPage7, ARRAY_COUNT(gGrasslandPage7)},
	{gGrasslandPage8, ARRAY_COUNT(gGrasslandPage8)},
	{gGrasslandPage9, ARRAY_COUNT(gGrasslandPage9)},
	{gGrasslandPage10, ARRAY_COUNT(gGrasslandPage10)},
	{gGrasslandPage11, ARRAY_COUNT(gGrasslandPage11)},
	{gGrasslandPage12, ARRAY_COUNT(gGrasslandPage12)},
};

const struct HabitatPage gForestPages[] =
{
	{gForestPage1, ARRAY_COUNT(gForestPage1)},
	{gForestPage2, ARRAY_COUNT(gForestPage2)},
	{gForestPage3, ARRAY_COUNT(gForestPage3)},
	{gForestPage4, ARRAY_COUNT(gForestPage4)},
	{gForestPage5, ARRAY_COUNT(gForestPage5)},
	{gForestPage6, ARRAY_COUNT(gForestPage6)},
	{gForestPage7, ARRAY_COUNT(gForestPage7)},
	{gForestPage8, ARRAY_COUNT(gForestPage8)},
	{gForestPage9, ARRAY_COUNT(gForestPage9)},
	{gForestPage10, ARRAY_COUNT(gForestPage10)},
	{gForestPage11, ARRAY_COUNT(gForestPage11)},
};

const struct HabitatPage gWatersEdgePages[] =
{
	{gWatersEdgePage1, ARRAY_COUNT(gWatersEdgePage1)},
	{gWatersEdgePage2, ARRAY_COUNT(gWatersEdgePage2)},
	{gWatersEdgePage3, ARRAY_COUNT(gWatersEdgePage3)},
	{gWatersEdgePage4, ARRAY_COUNT(gWatersEdgePage4)},
	{gWatersEdgePage5, ARRAY_COUNT(gWatersEdgePage5)},
	{gWatersEdgePage6, ARRAY_COUNT(gWatersEdgePage6)},
	{gWatersEdgePage7, ARRAY_COUNT(gWatersEdgePage7)},
	{gWatersEdgePage8, ARRAY_COUNT(gWatersEdgePage8)},
	{gWatersEdgePage9, ARRAY_COUNT(gWatersEdgePage9)},
	{gWatersEdgePage10, ARRAY_COUNT(gWatersEdgePage10)},
};

const struct HabitatPage gSeaPages[] =
{
	{gSeaPage1, ARRAY_COUNT(gSeaPage1)},
	{gSeaPage2, ARRAY_COUNT(gSeaPage2)},
	{gSeaPage3, ARRAY_COUNT(gSeaPage3)},
	{gSeaPage4, ARRAY_COUNT(gSeaPage4)},
	{gSeaPage5, ARRAY_COUNT(gSeaPage5)},
	{gSeaPage6, ARRAY_COUNT(gSeaPage6)},
	{gSeaPage7, ARRAY_COUNT(gSeaPage7)},
	{gSeaPage8, ARRAY_COUNT(gSeaPage8)},
	{gSeaPage9, ARRAY_COUNT(gSeaPage9)},
	{gSeaPage10, ARRAY_COUNT(gSeaPage10)},
	{gSeaPage11, ARRAY_COUNT(gSeaPage11)},
};

const struct HabitatPage gCavePages[] =
{
	{gCavePage1, ARRAY_COUNT(gCavePage1)},
	{gCavePage2, ARRAY_COUNT(gCavePage2)},
	{gCavePage3, ARRAY_COUNT(gCavePage3)},
	{gCavePage4, ARRAY_COUNT(gCavePage4)},
	{gCavePage5, ARRAY_COUNT(gCavePage5)},
	{gCavePage6, ARRAY_COUNT(gCavePage6)},
	{gCavePage7, ARRAY_COUNT(gCavePage7)},
	{gCavePage8, ARRAY_COUNT(gCavePage8)},
	{gCavePage9, ARRAY_COUNT(gCavePage9)},
	{gCavePage10, ARRAY_COUNT(gCavePage10)},
	{gCavePage11, ARRAY_COUNT(gCavePage11)},
};

const struct HabitatPage gMountainPages[] =
{
	{gMountainPage1, ARRAY_COUNT(gMountainPage1)},
	{gMountainPage2, ARRAY_COUNT(gMountainPage2)},
	{gMountainPage3, ARRAY_COUNT(gMountainPage3)},
	{gMountainPage4, ARRAY_COUNT(gMountainPage4)},
	{gMountainPage5, ARRAY_COUNT(gMountainPage5)},
	{gMountainPage6, ARRAY_COUNT(gMountainPage6)},
	{gMountainPage7, ARRAY_COUNT(gMountainPage7)},
	{gMountainPage8, ARRAY_COUNT(gMountainPage8)},
	{gMountainPage9, ARRAY_COUNT(gMountainPage9)},
	{gMountainPage10, ARRAY_COUNT(gMountainPage10)},
};

const struct HabitatPage gRoughTerrainPages[] =
{
	{gRoughTerrainPage1, ARRAY_COUNT(gRoughTerrainPage1)},
	{gRoughTerrainPage2, ARRAY_COUNT(gRoughTerrainPage2)},
	{gRoughTerrainPage3, ARRAY_COUNT(gRoughTerrainPage3)},
	{gRoughTerrainPage4, ARRAY_COUNT(gRoughTerrainPage4)},
	{gRoughTerrainPage5, ARRAY_COUNT(gRoughTerrainPage5)},
	{gRoughTerrainPage6, ARRAY_COUNT(gRoughTerrainPage6)},
	{gRoughTerrainPage7, ARRAY_COUNT(gRoughTerrainPage7)},
	{gRoughTerrainPage8, ARRAY_COUNT(gRoughTerrainPage8)},
	{gRoughTerrainPage9, ARRAY_COUNT(gRoughTerrainPage9)},
};

const struct HabitatPage gUrbanPages[] =
{
	{gUrbanPage1, ARRAY_COUNT(gUrbanPage1)},
	{gUrbanPage2, ARRAY_COUNT(gUrbanPage2)},
	{gUrbanPage3, ARRAY_COUNT(gUrbanPage3)},
	{gUrbanPage4, ARRAY_COUNT(gUrbanPage4)},
	{gUrbanPage5, ARRAY_COUNT(gUrbanPage5)},
	{gUrbanPage6, ARRAY_COUNT(gUrbanPage6)},
	{gUrbanPage7, ARRAY_COUNT(gUrbanPage7)},
	{gUrbanPage8, ARRAY_COUNT(gUrbanPage8)},
	{gUrbanPage9, ARRAY_COUNT(gUrbanPage9)},
	{gUrbanPage10, ARRAY_COUNT(gUrbanPage10)},
};

const struct HabitatPage gRarePages[] =
{
	{gRarePage1, ARRAY_COUNT(gRarePage1)},
	{gRarePage2, ARRAY_COUNT(gRarePage2)},
	{gRarePage3, ARRAY_COUNT(gRarePage3)},
	{gRarePage4, ARRAY_COUNT(gRarePage4)},
	{gRarePage5, ARRAY_COUNT(gRarePage5)},
	{gRarePage6, ARRAY_COUNT(gRarePage6)},
	{gRarePage7, ARRAY_COUNT(gRarePage7)},
	{gRarePage8, ARRAY_COUNT(gRarePage8)},
	{gRarePage9, ARRAY_COUNT(gRarePage9)},
	{gRarePage10, ARRAY_COUNT(gRarePage10)},
	{gRarePage11, ARRAY_COUNT(gRarePage11)},
	{gRarePage12, ARRAY_COUNT(gRarePage12)},
};

const struct Habitat gHabitatPtrsTable[9] =
{
	{gGrasslandPages, ARRAY_COUNT(gGrasslandPages)},
	{gForestPages, ARRAY_COUNT(gForestPages)},
	{gWatersEdgePages, ARRAY_COUNT(gWatersEdgePages)},
	{gSeaPages, ARRAY_COUNT(gSeaPages)},
	{gCavePages, ARRAY_COUNT(gCavePages)},
	{gMountainPages, ARRAY_COUNT(gMountainPages)},
	{gRoughTerrainPages, ARRAY_COUNT(gRoughTerrainPages)},
	{gUrbanPages, ARRAY_COUNT(gUrbanPages)},
};
