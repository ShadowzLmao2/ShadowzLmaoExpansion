//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 9
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 10
        .trainerName = _("STEVEN"),
#line 11
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 14
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 16
        .aiFlags = AI_FLAG_OMNISCIENT | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_MON_CHOICES | AI_FLAG_HP_AWARE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING,
#line 15
        .trainerBackPic = TRAINER_BACK_PIC_STEVEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 18
            .species = SPECIES_HEATRAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 18
            .heldItem = ITEM_LEFTOVERS,
#line 20
            .ev = TRAINER_PARTY_EVS(252, 0, 8, 248, 0, 0),
#line 23
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 21
            .ability = ABILITY_FLASH_FIRE,
#line 19
            .lvl = 87,
#line 22
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 23
                MOVE_ANCIENT_POWER,
                MOVE_HEAT_WAVE,
                MOVE_FLASH_CANNON,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 28
            .species = SPECIES_TINKATON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 28
            .heldItem = ITEM_OCCA_BERRY,
#line 30
            .ev = TRAINER_PARTY_EVS(244, 0, 8, 164, 0, 92),
#line 33
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 31
            .ability = ABILITY_PICKPOCKET,
#line 29
            .lvl = 87,
#line 32
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 33
                MOVE_GIGATON_HAMMER,
                MOVE_KNOCK_OFF,
                MOVE_FAKE_OUT,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 38
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 38
            .heldItem = ITEM_FOCUS_SASH,
#line 40
            .ev = TRAINER_PARTY_EVS(252, 0, 24, 24, 152, 56),
#line 43
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 41
            .ability = ABILITY_CHLOROPHYLL,
#line 39
            .lvl = 87,
#line 42
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 43
                MOVE_TAILWIND,
                MOVE_HELPING_HAND,
                MOVE_MOONBLAST,
                MOVE_TICKLE,
            },
            },
            {
#line 48
            .species = SPECIES_GOODRA_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 48
            .heldItem = ITEM_ASSAULT_VEST,
#line 50
            .ev = TRAINER_PARTY_EVS(248, 0, 112, 8, 140, 0),
#line 53
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 51
            .ability = ABILITY_SAP_SIPPER,
#line 49
            .lvl = 87,
#line 52
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 53
                MOVE_DRAGON_PULSE,
                MOVE_FLASH_CANNON,
                MOVE_SURF,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 58
            .species = SPECIES_BAXCALIBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 58
            .heldItem = ITEM_LIFE_ORB,
#line 60
            .ev = TRAINER_PARTY_EVS(24, 252, 8, 216, 0, 4),
#line 62
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 59
            .lvl = 87,
#line 61
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 62
                MOVE_ICE_SPINNER,
                MOVE_DRAGON_CLAW,
                MOVE_EARTHQUAKE,
                MOVE_PROTECT,
            },
            },
            {
#line 67
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 67
            .heldItem = ITEM_LIFE_ORB,
#line 69
            .ev = TRAINER_PARTY_EVS(56, 252, 4, 196, 0, 0),
#line 71
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 68
            .lvl = 87,
#line 70
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 71
                MOVE_DRAGON_ASCENT,
                MOVE_DRAGON_DANCE,
                MOVE_DRAGON_CLAW,
                MOVE_AQUA_TAIL,
            },
            },
        },
    },
