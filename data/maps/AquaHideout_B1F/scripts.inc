AquaHideout_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, AquaHideout_B1F_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B1F_OnTransition
	.byte 0

AquaHideout_B1F_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AquaHideout_B1F_EventScript_TryRemoveElectrode
	end

AquaHideout_B1F_EventScript_TryRemoveElectrode::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

AquaHideout_B1F_OnTransition:
	call_if_unset FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT, AquaHideout_B1F_EventScript_ShowElectrode1
	call_if_unset FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT, AquaHideout_B1F_EventScript_ShowElectrode2
	end

AquaHideout_B1F_EventScript_ShowElectrode1::
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1
	return

AquaHideout_B1F_EventScript_ShowElectrode2::
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2
	return

AquaHideout_B1F_EventScript_Electrode1::
	lock
	faceplayer
	givemon SPECIES_TYPE_NULL, 75, ITEM_NONE, ITEM_POKE_BALL, NATURE_SERIOUS
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
	release
	end

AquaHideout_B1F_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B1F_EventScript_DefeatedElectrode1::
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
	goto Common_EventScript_RemoveStaticPokemon
	end

AquaHideout_B1F_EventScript_Electrode2::
	lock
	faceplayer
	givemon SPECIES_ROTOM_WASH, 75, ITEM_NONE, ITEM_POKE_BALL, NATURE_SERIOUS
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
	release
	end

AquaHideout_B1F_EventScript_DefeatedElectrode2::
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
	goto Common_EventScript_RemoveStaticPokemon
	end

AquaHideout_B1F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, AquaHideout_B1F_Text_Grunt2Intro, AquaHideout_B1F_Text_Grunt2Defeat, AquaHideout_B1F_EventScript_Grunt2Defeated
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B1F_EventScript_Grunt2Defeated::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B1F_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, AquaHideout_B1F_Text_Grunt3Intro, AquaHideout_B1F_Text_Grunt3Defeat, AquaHideout_B1F_EventScript_Grunt3Defeated
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B1F_EventScript_Grunt3Defeated::
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B1F_EventScript_Grunt7::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, AquaHideout_B1F_Text_Grunt7Intro, AquaHideout_B1F_Text_Grunt7Defeat
	msgbox AquaHideout_B1F_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B1F_Text_Grunt2Intro:
	.string "If you want to know the secret about\n"
	.string "our HIDEOUT, you have me to beat!$"

AquaHideout_B1F_Text_Grunt2Defeat:
	.string "I can't win at all…$"

AquaHideout_B1F_Text_Grunt2PostBattle:
	.string "Our HIDEOUT's secret?\p"
	.string "Well, let's just say…\n"
	.string "There's a submarine at the far end!\p"
	.string "But, by now…\n"
	.string "Kekekeke…$"

AquaHideout_B1F_Text_Grunt3Intro:
	.string "Fuel supply loaded A-OK!\n"
	.string "In-cruise snacks loaded A-OK!\p"
	.string "Nothing left to do but KO a pesky\n"
	.string "meddler!$"

AquaHideout_B1F_Text_Grunt3Defeat:
	.string "I took a serious licking!$"

AquaHideout_B1F_Text_Grunt3PostBattle:
	.string "Humph!\n"
	.string "This was supposed to happen!\p"
	.string "My mission was to just hold you up!$"

AquaHideout_B1F_Text_Grunt5Intro:
	.string "Yawn… Keeping watch over the\n"
	.string "HIDEOUT bores me. I'll take you on.$"

AquaHideout_B1F_Text_Grunt5Defeat:
	.string "Yawn…\n"
	.string "Oh, I lost…$"

AquaHideout_B1F_Text_Grunt5PostBattle:
	.string "If you scurry too much, other TEAM\n"
	.string "AQUA members might get you.$"

AquaHideout_B1F_Text_Grunt7Intro:
	.string "Hey!\n"
	.string "You there!\p"
	.string "Which do you think is cooler?\n"
	.string "TEAM AQUA's uniform or TEAM MAGMA's?$"

AquaHideout_B1F_Text_Grunt7Defeat:
	.string "I lost in a cool way…$"

AquaHideout_B1F_Text_Grunt7PostBattle:
	.string "If you have a cool uniform, you look\n"
	.string "good even in a loss, don't you think?$"
