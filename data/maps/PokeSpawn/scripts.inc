PokeSpawn_MapScripts::
	.byte 0


PokeSpawn_EventScript_Items::
# 5 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 6 "data//maps/PokeSpawn/scripts.pory"
	giveitem ITEM_RARE_CANDY, 999
# 8 "data//maps/PokeSpawn/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 9 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Items_Text_0
# 11 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 12 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 13 "data//maps/PokeSpawn/scripts.pory"
	special SetUnlockedPokedexFlags
# 14 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 15 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 17 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 18 "data//maps/PokeSpawn/scripts.pory"
	special EnableNationalPokedex
# 20 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 21 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 23 "data//maps/PokeSpawn/scripts.pory"
	removeobject 1
# 24 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RARE_CANDY
# 26 "data//maps/PokeSpawn/scripts.pory"
	call Walley1
# 28 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end


Walley1::
# 33 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 34 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 35 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 36 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 37 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 38 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 39 "data//maps/PokeSpawn/scripts.pory"
	special InitBirchState
	return


PokeSpawn_EventScript_PC::
	end


NicknamePartyMon::
# 51 "data//maps/PokeSpawn/scripts.pory"
	hidemonpic
	return


NicknameBoxMon::
# 63 "data//maps/PokeSpawn/scripts.pory"
	hidemonpic
	return


PokeSpawn_EventScript_Allan::
# 76 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 77 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Allan_Text_0, MSGBOX_YESNO
# 78 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Allan_2
PokeSpawn_EventScript_Allan_1:
# 92 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Allan_2:
# 79 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TOXTRICITY, 1
# 80 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_COALOSSAL, 1
# 81 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ANNIHILAPE, 1
# 82 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GARCHOMP, 1
# 83 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_LOPUNNY, 1
# 84 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FLYGON, 1
# 86 "data//maps/PokeSpawn/scripts.pory"
	removeobject 2
# 87 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_ALLAN_MONS
# 88 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto PokeSpawn_EventScript_Allan_1


PokeSpawn_EventScript_Items_Text_0:
# 9 "data//maps/PokeSpawn/scripts.pory"
	.string "Recieved Rare Candies$"

PokeSpawn_EventScript_Allan_Text_0:
# 77 "data//maps/PokeSpawn/scripts.pory"
	.string "Allans Mons?$"

PokeSpawn_NotChosen::
# 71 "data//maps/PokeSpawn/scripts.pory"
	.string "You did not choose the Pokemon$"
