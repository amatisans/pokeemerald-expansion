PokeSpawn_MapScripts::
	.byte 0


PokeSpawn_EventScript_Items::
# 5 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 6 "data//maps/PokeSpawn/scripts.pory"
	giveitem ITEM_RARE_CANDY, 999
# 7 "data//maps/PokeSpawn/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 999
# 8 "data//maps/PokeSpawn/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 10 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 12 "data//maps/PokeSpawn/scripts.pory"
	special SetUnlockedPokedexFlags
# 13 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 14 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 15 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 16 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 18 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 19 "data//maps/PokeSpawn/scripts.pory"
	special EnableNationalPokedex
# 21 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 22 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 24 "data//maps/PokeSpawn/scripts.pory"
	removeobject 1
# 25 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RARE_CANDY
# 27 "data//maps/PokeSpawn/scripts.pory"
	call Walley1
# 28 "data//maps/PokeSpawn/scripts.pory"
	call Woods1
# 29 "data//maps/PokeSpawn/scripts.pory"
	call RustBoro
# 30 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
# 31 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 32 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 33 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_BIRCH
# 35 "data//maps/PokeSpawn/scripts.pory"
	call BoatGuy
# 37 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 38 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 39 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 40 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 41 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 42 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 43 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 45 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 0
# 46 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 49 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end


BoatGuy::
# 54 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 55 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 56 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 57 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 58 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 59 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 60 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 61 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	return


RustBoro::
# 65 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 66 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
	return


Walley1::
# 72 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 73 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 74 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 75 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 76 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 77 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 78 "data//maps/PokeSpawn/scripts.pory"
	special InitBirchState
	return


Woods1::
# 82 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
	return


PokeSpawn_EventScript_Dev::
# 86 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 87 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Dev_Text_0, MSGBOX_YESNO
# 88 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Dev_2
PokeSpawn_EventScript_Dev_1:
# 102 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Dev_2:
# 89 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRENINJA, 1
# 90 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ZEKROM, 1
# 91 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_BUZZWOLE, 1
# 92 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GARCHOMP, 1
# 93 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARSHADOW, 1
# 94 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GROUDON, 1
# 96 "data//maps/PokeSpawn/scripts.pory"
	giveitem ITEM_MAX_REPEL, 999
# 98 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 100 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Dev_1


PokeSpawn_EventScript_Allan::
# 107 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 108 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Allan_Text_0, MSGBOX_YESNO
# 109 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Allan_2
PokeSpawn_EventScript_Allan_1:
# 116 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Allan_2:
# 110 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRENINJA, 1
# 112 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 114 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Allan_1


PokeSpawn_EventScript_Mercy::
# 121 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 122 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Mercy_Text_0, MSGBOX_YESNO
# 123 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Mercy_2
PokeSpawn_EventScript_Mercy_1:
# 130 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Mercy_2:
# 124 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRENINJA, 1
# 126 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 128 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Mercy_1


PokeSpawn_EventScript_Greg::
# 135 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 136 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Greg_Text_0, MSGBOX_YESNO
# 137 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Greg_2
PokeSpawn_EventScript_Greg_1:
# 144 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Greg_2:
# 138 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRENINJA, 1
# 140 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 142 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Greg_1


PokeSpawn_EventScript_Dane::
# 149 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 150 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Dane_Text_0, MSGBOX_YESNO
# 151 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Dane_2
PokeSpawn_EventScript_Dane_1:
# 158 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Dane_2:
# 152 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRENINJA, 1
# 154 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 156 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Dane_1


PokeSpawn_EventScript_Savannah::
# 164 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 165 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Savannah_Text_0, MSGBOX_YESNO
# 166 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Savannah_2
PokeSpawn_EventScript_Savannah_1:
# 173 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Savannah_2:
# 167 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRENINJA, 1
# 169 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 171 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Savannah_1


removeBalls::
# 178 "data//maps/PokeSpawn/scripts.pory"
	removeobject 2
# 179 "data//maps/PokeSpawn/scripts.pory"
	removeobject 3
# 180 "data//maps/PokeSpawn/scripts.pory"
	removeobject 4
# 181 "data//maps/PokeSpawn/scripts.pory"
	removeobject 5
# 182 "data//maps/PokeSpawn/scripts.pory"
	removeobject 6
# 183 "data//maps/PokeSpawn/scripts.pory"
	removeobject 7
# 184 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_GOT_MONS
# 185 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


PokeSpawn_EventScript_Dev_Text_0:
# 87 "data//maps/PokeSpawn/scripts.pory"
	.string "Dev Mons?$"

PokeSpawn_EventScript_Allan_Text_0:
# 108 "data//maps/PokeSpawn/scripts.pory"
	.string "Allan's Mons?$"

PokeSpawn_EventScript_Mercy_Text_0:
# 122 "data//maps/PokeSpawn/scripts.pory"
	.string "Mercy's Mons?$"

PokeSpawn_EventScript_Greg_Text_0:
# 136 "data//maps/PokeSpawn/scripts.pory"
	.string "Greg's Mons?$"

PokeSpawn_EventScript_Dane_Text_0:
# 150 "data//maps/PokeSpawn/scripts.pory"
	.string "Dane's Mons?$"

PokeSpawn_EventScript_Savannah_Text_0:
# 165 "data//maps/PokeSpawn/scripts.pory"
	.string "Savannah's Mons?$"
