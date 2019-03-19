#ifndef ITEM_H
#define ITEM_H

#include <stdint.h>
#include <stdbool.h>


typedef enum {
    BOMBS_5,
    DEKU_NUTS_5,
    BOMBCHUS_10,
    BOOMERANG,
    DEKU_STICK_1,
    LENS_OF_TRUTH,
    HAMMER,
    COJIRO,
    BOTTLE,
    BOTTLE_WITH_MILK,
    BOTTLE_WITH_LETTER,
    MAGIC_BEAN,
    SKULL_MASK,
    SPOOKY_MASK,
    KEATON_MASK,
    BUNNY_HOOD,
    MASK_OF_TRUTH,
    POCKET_EGG,
    POCKET_CUCCO,
    ODD_MUSHROOM,
    ODD_POTION,
    POACHERS_SAW,
    BROKEN_SWORD,
    PRESCRIPTION,
    EYEBALL_FROG,
    EYEDROPS,
    CLAIM_CHECK,
    KOKIRI_SWORD,
    DEKU_SHIELD,
    HYLIAN_SHIELD,
    MIRROR_SHIELD,
    GORON_TUNIC,
    ZORA_TUNIC,
    IRON_BOOTS,
    HOVER_BOOTS,
    STONE_OF_AGONY,
    GERUDO_MEMBERSHIP_CARD,
    HEART_CONTAINER,
    PIECE_OF_HEART,
    BOSS_KEY,
    COMPASS,
    MAP,
    SMALL_KEY,
    WEIRD_EGG,
    RECOVERY_HEART,
    ARROWS_5,
    ARROWS_10,
    ARROWS_30,
    RUPEE_1,
    RUPEES_5,
    RUPEES_20,
    HEART_CONTAINER_BOSS,
    GORON_MASK,
    ZORA_MASK,
    GERUDO_MASK,
    RUPEES_50,
    RUPEES_200,
    BIGGORON_SWORD,
    FIRE_ARROWS,
    ICE_ARROWS,
    LIGHT_ARROWS,
    GOLD_SKULLTULA_TOKEN,
    DINS_FIRE,
    NAYRUS_LOVE,
    FARORES_WIND,
    DEKU_NUTS_10,
    BOMBS_10,
    BOMBS_20,
    DEKU_SEEDS_30,
    BOMBCHUS_5,
    BOMBCHUS_20,
    RUPEE_TREASURE_CHEST_GAME,
    PIECE_OF_HEART_TREASURE_CHEST_GAME,
    ICE_TRAP,
    PROGRESSIVE_HOOKSHOT,
    PROGRESSIVE_STRENGTH_UPGRADE,
    BOMB_BAG,
    BOW,
    SLINGSHOT,
    PROGRESSIVE_WALLET,
    PROGRESSIVE_SCALE,
    DEKU_NUT_CAPACITY,
    DEKU_STICK_CAPACITY,
    BOMBCHUS,
    MAGIC_METER,
    OCARINA,
    BOTTLE_WITH_RED_POTION,
    BOTTLE_WITH_GREEN_POTION,
    BOTTLE_WITH_BLUE_POTION,
    BOTTLE_WITH_FAIRY,
    BOTTLE_WITH_FISH,
    BOTTLE_WITH_BLUE_FIRE,
    BOTTLE_WITH_BUGS,
    BOTTLE_WITH_BIG_POE,
    BOTTLE_WITH_POE,
    BOSS_KEY_FOREST_TEMPLE,
    BOSS_KEY_FIRE_TEMPLE,
    BOSS_KEY_WATER_TEMPLE,
    BOSS_KEY_SPIRIT_TEMPLE,
    BOSS_KEY_SHADOW_TEMPLE,
    BOSS_KEY_GANONS_CASTLE,
    COMPASS_DEKU_TREE,
    COMPASS_DODONGOS_CAVERN,
    COMPASS_JABU_JABUS_BELLY,
    COMPASS_FOREST_TEMPLE,
    COMPASS_FIRE_TEMPLE,
    COMPASS_WATER_TEMPLE,
    COMPASS_SPIRIT_TEMPLE,
    COMPASS_SHADOW_TEMPLE,
    COMPASS_BOTTOM_OF_THE_WELL,
    COMPASS_ICE_CAVERN,
    MAP_DEKU_TREE,
    MAP_DODONGOS_CAVERN,
    MAP_JABU_JABUS_BELLY,
    MAP_FOREST_TEMPLE,
    MAP_FIRE_TEMPLE,
    MAP_WATER_TEMPLE,
    MAP_SPIRIT_TEMPLE,
    MAP_SHADOW_TEMPLE,
    MAP_BOTTOM_OF_THE_WELL,
    MAP_ICE_CAVERN,
    SMALL_KEY_FOREST_TEMPLE,
    SMALL_KEY_FIRE_TEMPLE,
    SMALL_KEY_WATER_TEMPLE,
    SMALL_KEY_SPIRIT_TEMPLE,
    SMALL_KEY_SHADOW_TEMPLE,
    SMALL_KEY_BOTTOM_OF_THE_WELL,
    SMALL_KEY_GERUDO_TRAINING_GROUNDS,
    SMALL_KEY_GERUDO_FORTRESS,
    SMALL_KEY_GANONS_CASTLE,
    DOUBLE_DEFENSE,
    ZELDAS_LETTER,
    MASTER_SWORD,
    EPONA,
    DEKU_STICK_DROP,
    DEKU_NUT_DROP,
    CARPENTER_RESCUE,
    FOREST_TRIAL_CLEAR,
    FIRE_TRIAL_CLEAR,
    WATER_TRIAL_CLEAR,
    SHADOW_TRIAL_CLEAR,
    SPIRIT_TRIAL_CLEAR,
    LIGHT_TRIAL_CLEAR,
    TRIFORCE,
    MINUET_OF_FOREST,
    BOLERO_OF_FIRE,
    SERENADE_OF_WATER,
    REQUIEM_OF_SPIRIT,
    NOCTURNE_OF_SHADOW,
    PRELUDE_OF_LIGHT,
    ZELDAS_LULLABY,
    EPONAS_SONG,
    SARIAS_SONG,
    SUNS_SONG,
    SONG_OF_TIME,
    SONG_OF_STORMS,
    BUY_DEKU_NUT_5,
    BUY_ARROWS_30,
    BUY_ARROWS_50,
    BUY_BOMBS_5_25,
    BUY_DEKU_NUT_10,
    BUY_DEKU_STICK_1,
    BUY_BOMBS_10,
    BUY_FISH,
    BUY_RED_POTION_30,
    BUY_GREEN_POTION,
    BUY_BLUE_POTION,
    BUY_HYLIAN_SHIELD,
    BUY_DEKU_SHIELD,
    BUY_GORON_TUNIC,
    BUY_ZORA_TUNIC,
    BUY_HEART,
    BUY_BOMBCHU_10,
    BUY_BOMBCHU_20,
    BUY_BOMBCHU_5,
    BUY_DEKU_SEEDS_30,
    SOLD_OUT,
    BUY_BLUE_FIRE,
    BUY_BOTTLE_BUG,
    BUY_POE,
    BUY_FAIRYS_SPIRIT,
    BUY_ARROWS_10,
    BUY_BOMBS_20,
    BUY_BOMBS_30,
    BUY_BOMBS_5_35,
    BUY_RED_POTION_40,
    BUY_RED_POTION_50,
    KOKIRI_EMERALD,
    GORON_RUBY,
    ZORA_SAPPHIRE,
    FOREST_MEDALLION,
    FIRE_MEDALLION,
    WATER_MEDALLION,
    SPIRIT_MEDALLION,
    SHADOW_MEDALLION,
    LIGHT_MEDALLION,

    //Elements past this point aren't collectible
    ITEM_E_ANCHOR,
    //Items tracked by other means, or are special
    HOOKSHOT,
    LONGSHOT,
    FAIRY_OCARINA,
    OCARINA_OF_TIME,
    SILVER_GAUNTLETS,
    GOLDEN_GAUNTLETS,
    SCARECROW,
    DISTANT_SCARECROW,
    GANON,
    ITEM_E_NONE
} item_e;

typedef enum
{
    ITEM_FILL_NORMAL,
    ITEM_FILL_ADVANCEMENT,
    ITEM_FILL_PRIORITY
} item_fill_e;

typedef enum
{
    ITEM_TYPE_ITEM,
    ITEM_TYPE_BOSSKEY,
    ITEM_TYPE_COMPASS,
    ITEM_TYPE_MAP,
    ITEM_TYPE_SMALLKEY,
    ITEM_TYPE_FORTRESS_SMALLKEY,
    ITEM_TYPE_TOKEN,
    ITEM_TYPE_EVENT,
    ITEM_TYPE_SONG,
    ITEM_TYPE_SHOP,
} item_type_e;

typedef struct
{
    item_e k;
    char* name;
    item_type_e type;
    item_fill_e fill;
    uint8_t gi;

} item_info_t;

typedef struct 
{
    item_e k;
    uint8_t text_id;
    uint8_t song_id;
    uint8_t item_id;
} item_song_t;

typedef struct 
{
    item_e k;
    uint8_t save_byte;
    uint8_t save_bit;
    uint8_t addr2_data;
    uint8_t item_id;
    uint32_t bit_mask;
} item_event_t;

typedef struct
{
    item_e k;
    uint16_t object;
    int16_t price;
} item_shop_t;

extern item_info_t item_table[];

bool item_is_progressive_item(item_e item);
bool display_as_bottle_item(item_e item);
bool item_is_bombchu(item_e item);
bool item_is_bottle(item_e item);
bool item_is_key(item_e item);
bool item_is_smallkey(item_e item);
bool item_is_bosskey(item_e item);
bool item_is_map(item_e item);
bool item_is_compass(item_e item);
bool item_is_dungeonitem(item_e item);
bool item_is_majoritem(item_e item);

#endif // !ITEM_H