#include "defines.h"
#include "../include/graphics.h"

const struct MonCoords gMonFrontPicCoords[NUM_SPECIES] =
{
	[SPECIES_NONE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_BULBORBLARVA] =
	{
		.size = 0x64,
		.y_offset = 0x0,
	},
	[SPECIES_BULBORB] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_JUMBOBULBORB] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_FIERYBLOWLET] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_FIERYBLOWHOG] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_TITANBLOWHOG] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_WOLPOLE] =
	{
		.size = 0x75,
		.y_offset = 0x0,
	},
	[SPECIES_YELLOWWOLLYHOP] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_MASTERHOP] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_FLINTBEETLE] =
	{
		.size = 0x55,
		.y_offset = 0x0,
	},
	[SPECIES_DOODLEBUG] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_GLINTBEETLE] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_SWOOPINGSNITCHBUG] =
	{
		.size = 0x56,
		.y_offset = 0x0,
	},
	[SPECIES_BUMBLINGSNITCHBUG] =
	{
		.size = 0x46,
		.y_offset = 0x0,
	},
	[SPECIES_DIRIGIBUG] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_SNOWBULBORB] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_DWARFFROSTYBULBORB] =
	{
		.size = 0x85,
		.y_offset = 0x0,
	},
	[SPECIES_FROSTYBULBORB] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_CRUMBUG] =
	{
		.size = 0x75,
		.y_offset = 0x0,
	},
	[SPECIES_BREADBUG] =
	{
		.size = 0x75,
		.y_offset = 0x0,
	},
	[SPECIES_GIANTBREADBUG] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_EMPERORBULBLAX] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_SOVREIGNBULBLAX] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_DWARFBULBEAR] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_SPOTTYBULBEAR] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_HONEYWISP] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_DANDELFLY] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_DOWNYSNAGRET] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_BURROWINGSNAGRET] =
	{
		.size = 0x55,
		.y_offset = 0x0,
	},
	[SPECIES_PILEATEDSNAGRET] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_FEMALESHEARGRUB] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_SWARMINGSHEARGRUB] =
	{
		.size = 0x56,
		.y_offset = 0x0,
	},
	[SPECIES_MAMASHEARGRUB] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_MALESHEARGRUB] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SHEARWIG] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_QUEENSHEARWIG] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_ARISTOCRABOFFSPRING] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_ARISTOCRAB] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_GOOLIX] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_FOOLIX] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_ARCTICCANNONLARVA] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_ARCTICCANNONBEETLE] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_SKITTERLEAF] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_DESICCATEDSKITTERLEAF] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_ARMOREDCANNONLARVA] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_ARMOREDCANNONBEETLE] =
	{
		.size = 0x63,
		.y_offset = 0x0,
	},
	[SPECIES_HORNEDCANNONBEETLE] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_CREEPINGCHRYSANTHEMUM] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_STARTLESPORE] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_HERMITCRAWMAD] =
	{
		.size = 0x54,
		.y_offset = 0x0,
	},
	[SPECIES_BUGEYEDCRAWMAD] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_DWARFBULBORB] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_DWARFORANGEBULBORB] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_BEADYLONGLEGS] =
	{
		.size = 0x67,
		.y_offset = 0x0,
	},
	[SPECIES_RAGINGLONGLEGS] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_BALDYLONGLEGS] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_SHAGGYLONGLEGS] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_BULBMIN] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_ADULTBULBMIN] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_SCORNET] =
	{
		.size = 0x74,
		.y_offset = 0x0,
	},
	[SPECIES_SCORNETMAESTRO] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_BURROWNIT] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_JOUSTMITE] =
	{
		.size = 0x55,
		.y_offset = 0x0,
	},
	[SPECIES_FLIGHTYJOUSTMITE] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_VOLATILEDWEEVIL] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_MANATLEGS] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_SKUTTERCHUCK] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_CALCIFIEDCRUSHBLAT] =
	{
		.size = 0x67,
		.y_offset = 0x0,
	},
	[SPECIES_ARACHNODE] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_MOLDYDWARFBULBORB] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_MOLDYSLOOCH] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_TOXSTOOL] =
	{
		.size = 0x56,
		.y_offset = 0x0,
	},
	[SPECIES_PHOSBAT] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_VEHEAMOTHPHOSBAT] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_PUCKERINGBLINNOW] =
	{
		.size = 0x75,
		.y_offset = 0x0,
	},
	[SPECIES_SPUTTLEFISH] =
	{
		.size = 0x84,
		.y_offset = 0x0,
	},
	[SPECIES_PRICKLEPUFF] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_UJADANI] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_MITITE] =
	{
		.size = 0x85,
		.y_offset = 0x0,
	},
	[SPECIES_WITHERINGBLOWHOG] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_PUFFYBLOWHOG] =
	{
		.size = 0x43,
		.y_offset = 0x0,
	},
	[SPECIES_MINIATURESNOOTWHACKER] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_MAMMOTHSNOOTWHACKER] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_PYROCLASTICSLOOCH] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_LESSERSPOTTEDJELLYFLOAT] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_GREATERSPOTTEDJELLYFLOAT] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_TOADYBLOYSTER] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_RANGINGBLOYSTER] =
	{
		.size = 0x75,
		.y_offset = 0x0,
	},
	[SPECIES_SNOWYBLOWHOG] =
	{
		.size = 0x85,
		.y_offset = 0x0,
	},
	[SPECIES_BLIZZARDINGBLOWHOG] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_GILDEMANDWEE] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_GILDEMANDER] =
	{
		.size = 0x85,
		.y_offset = 0x0,
	},
	[SPECIES_WADDLEQUAFF] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_GRUBCHUCKER] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_PEARLYCLAMCLAMP] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_SUNQUISH] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_PROQUILLION] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_TUSKEDBLOWHOG] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_SNOWFLAKEFLUTTERTAIL] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_BOGSWALLOW] =
	{
		.size = 0x55,
		.y_offset = 0x0,
	},
	[SPECIES_PUFFMIN] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_WOLLYHOP] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_CHILLYHOP] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_BLOOMCAPBLOYSTER] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_SCORCHCAKE] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_WATERDUMPLE] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_LONGWATERDUMPLE] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_MOCKIWI] =
	{
		.size = 0x85,
		.y_offset = 0x0,
	},
	[SPECIES_CRESTEDMOCKIWI] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_ELONGATEDCRUSHBLAT] =
	{
		.size = 0x85,
		.y_offset = 0x0,
	},
	[SPECIES_PUFFSTALK] =
	{
		.size = 0x85,
		.y_offset = 0x0,
	},
	[SPECIES_PUFFSTOOL] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ANODEBEETLE] =
	{
		.size = 0x85,
		.y_offset = 0x0,
	},
	[SPECIES_EMPRESSBULBLAX] =
	{
		.size = 0x85,
		.y_offset = 0x0,
	},
	[SPECIES_SKEETERSKATE] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_MUCKERSKATE] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_GROOVYLONGLEGS] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_CRUSTEDRUMPUP] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_BEARDEDAMPRAT] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_FIERYBULBLAX] =
	{
		.size = 0x75,
		.y_offset = 0x0,
	},
	[SPECIES_GATTLINGGROINK] =
	{
		.size = 0x85,
		.y_offset = 0x0,
	},
	[SPECIES_ARMURK] =
	{
		.size = 0x85,
		.y_offset = 0x0,
	},
	[SPECIES_SEGMENTEDCRAWBSTER] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_ARMOREDMAWDAD] =
	{
		.size = 0x85,
		.y_offset = 0x0,
	},
	[SPECIES_SANDBELCHINGMEERSLUG] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_CLICKINGSLURKER] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_LURINGSLURKER] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_MEDUSALSLURKER] =
	{
		.size = 0x85,
		.y_offset = 0x0,
	},
	[SPECIES_PELLETPOSY] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_MASTERONION] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_OATCHI] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_QUAGGLEDMIRECLOPS] =
	{
		.size = 0x54,
		.y_offset = 0x0,
	},
	[SPECIES_ALBINODWARFBULBORB] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_HAIRYBULBORB] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_WHIPTONGUEBULBORB] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_ORANGEBULBORB] =
	{
		.size = 0x67,
		.y_offset = 0x0,
	},
	[SPECIES_WHITEPIKMIN] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_BLUEPIKMIN] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_ROCKPIKMIN] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_YELLOWPIKMIN] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_WINGEDPIKMIN] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_REDPIKMIN] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_PURPLEPIKMIN] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_WATERWRAITH] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_TITANDWEEVIL] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_PLASMWRAITH] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_ICEPIKMIN] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_GLOWSEED] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_GLOWPIKMIN] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_SMOKYPROGG] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_MAMUTA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MOSS] =
	{
		.size = 0x56,
		.y_offset = 0x0,
	},
	[SPECIES_TOYBORB] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_BULBLORD] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_PINCHIPEDE] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_LARGEMOUTHWOLLYHOP] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_TOYBLOWHOG] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_TELESCOPINGPUMPHOG] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_BEEB] =
	{
		.size = 0x67,
		.y_offset = 0x0,
	},
	[SPECIES_BLADEDBEEB] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_STUDDEDBEEB] =
	{
		.size = 0x67,
		.y_offset = 0x0,
	},
	[SPECIES_FIREFLAPBULBORB] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_ICEBLOWNDWEEVIL] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_SPECTRALID] =
	{
		.size = 0x68,
		.y_offset = 0x0,
	},
	[SPECIES_BLUBBUG] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_PUFFYBLUBBUG] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_STUFFEDBELLBLOOM] =
	{
		.size = 0x73,
		.y_offset = 0x0,
	},
	[SPECIES_CENTIPARE] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_ADULTCENTIPARE] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_WATERYBLOWHOG] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_GRABBIT] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_COPPELLER] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_MUGGONFLY] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_ELECTRICCOTTONADE] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_WADDLEPUS] =
	{
		.size = 0x54,
		.y_offset = 0x0,
	},
	[SPECIES_CRAMMEDWRAITH] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_BERSERKLEECHHYDROE] =
	{
		.size = 0x54,
		.y_offset = 0x0,
	},
	[SPECIES_PEBBLEPITCHER] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_ANCIENTSIREHOUND] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_COURAGEREACTOR] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_ASSEMBLEDCOURAGE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_REMEMBEREDOLDBUDDY] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_BULBORBWITHAGUN] =
	{
		.size = 0x75,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_SOUL] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},

	[SPECIES_PLACEHOLDERLARVA] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},

	[SPECIES_DEMO77] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_USUBA] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_KAKUREIMO] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_PIKUTABE] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_NAMAPONGASHI] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_CHAPPYPROTO] =
	{
		.size = 0x56,
		.y_offset = 0x0,
	},

	[SPECIES_EGG] =
	{
		.size = 0x36,
		.y_offset = 0x0,
	},
	[SPECIES_GILDEMANDWEE_NOGOLD] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_GILDEMANDER_NOGOLD] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_BEARDEDAMPRAT_STATIC] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_REDPIKMIN_VETERAN] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SMOKYPROGG_MASTER] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SPECTRALID_RED] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SPECTRALID_YELLOW] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SPECTRALID_UNMARKED] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SPECTRALID_UNMARKEDRED] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SPECTRALID_UNMARKEDPURPLE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SPECTRALID_ELECTRIC] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SPECTRALID_HEY0] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SPECTRALID_HEY1] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ANCIENTSIREHOUND_ICE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ANCIENTSIREHOUND_ELECTRIC] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ANCIENTSIREHOUND_FIRE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ANCIENTSIREHOUND_GLOOM] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_FLYING] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_GRASS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_BUG] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_POISON] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_WATER] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_ICE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_FIRE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_ELECTRIC] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_FIGHTING] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_ROCK] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_GROUND] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_PSYCHIC] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_GHOST] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_DRAGON] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_DARK] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_STEEL] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_KIRBY_FAIRY] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SOUL_RED] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_SOUL_YELLOW] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_SOUL_BLUE] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_SOUL_PURPLE] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_SOUL_WHITE] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_SOUL_ROCK] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_SOUL_WINGED] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_SOUL_ICE] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_JUMBOBULBORB_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_TITANBLOWHOG_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MASTERHOP_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_GLINTBEETLE_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_GIANTBREADBUG_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SOVREIGNBULBLAX_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_DANDELFLY_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_PILEATEDSNAGRET_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ADULTBULBMIN_MEGAB] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ADULTBULBMIN_MEGAS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MANATLEGS_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_PUFFMIN_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_EMPRESSBULBLAX_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ARMOREDMAWDAD_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_OATCHI_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_QUAGGLEDMIRECLOPS_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_WHITEPIKMIN_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_BLUEPIKMIN_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ROCKPIKMIN_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_YELLOWPIKMIN_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_WINGEDPIKMIN_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_REDPIKMIN_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_PURPLEPIKMIN_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ICEPIKMIN_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_GLOWPIKMIN_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MOSS_MEGA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
};
