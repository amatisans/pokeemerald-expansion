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
# 11 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
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
# 37 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 38 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 39 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 40 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 41 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 42 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 43 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 44 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 46 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 47 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 48 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 49 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 50 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 51 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 52 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 57 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end


RustBoro::
# 62 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 63 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 64 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
	return


Walley1::
# 69 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 70 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 71 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 72 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 73 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 74 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 75 "data//maps/PokeSpawn/scripts.pory"
	special InitBirchState
	return


Woods1::
# 79 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
	return


PokeSpawn_EventScript_Dev::
# 83 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 84 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Dev_Text_0, MSGBOX_YESNO
# 85 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Dev_2
PokeSpawn_EventScript_Dev_1:
# 97 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Dev_2:
# 86 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRENINJA, 1
# 87 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ZEKROM, 1
# 88 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_BUZZWOLE, 1
# 89 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GARCHOMP, 1
# 90 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARSHADOW, 1
# 91 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GROUDON, 1
# 93 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 95 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Dev_1


PokeSpawn_EventScript_Allan::
# 102 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 103 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Allan_Text_0, MSGBOX_YESNO
# 104 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Allan_2
PokeSpawn_EventScript_Allan_1:
# 111 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Allan_2:
# 105 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRENINJA, 1
# 107 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 109 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Allan_1


PokeSpawn_EventScript_Mercy::
# 116 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 117 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Mercy_Text_0, MSGBOX_YESNO
# 118 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Mercy_2
PokeSpawn_EventScript_Mercy_1:
# 125 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Mercy_2:
# 119 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRENINJA, 1
# 121 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 123 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Mercy_1


PokeSpawn_EventScript_Greg::
# 130 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 131 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Greg_Text_0, MSGBOX_YESNO
# 132 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Greg_2
PokeSpawn_EventScript_Greg_1:
# 139 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Greg_2:
# 133 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRENINJA, 1
# 135 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 137 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Greg_1


PokeSpawn_EventScript_Dane::
# 144 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 145 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Dane_Text_0, MSGBOX_YESNO
# 146 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Dane_2
PokeSpawn_EventScript_Dane_1:
# 153 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Dane_2:
# 147 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRENINJA, 1
# 149 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 151 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Dane_1


PokeSpawn_EventScript_Savannah::
# 159 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 160 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Savannah_Text_0, MSGBOX_YESNO
# 161 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Savannah_2
PokeSpawn_EventScript_Savannah_1:
# 168 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Savannah_2:
# 162 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRENINJA, 1
# 164 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 166 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Savannah_1


removeBalls::
# 173 "data//maps/PokeSpawn/scripts.pory"
	removeobject 2
# 174 "data//maps/PokeSpawn/scripts.pory"
	removeobject 3
# 175 "data//maps/PokeSpawn/scripts.pory"
	removeobject 4
# 176 "data//maps/PokeSpawn/scripts.pory"
	removeobject 5
# 177 "data//maps/PokeSpawn/scripts.pory"
	removeobject 6
# 178 "data//maps/PokeSpawn/scripts.pory"
	removeobject 7
# 179 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_GOT_MONS
# 180 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


PokeSpawn_EventScript_Dev_Text_0:
# 84 "data//maps/PokeSpawn/scripts.pory"
	.string "Dev Mons?$"

PokeSpawn_EventScript_Allan_Text_0:
# 103 "data//maps/PokeSpawn/scripts.pory"
	.string "Allan's Mons?$"

PokeSpawn_EventScript_Mercy_Text_0:
# 117 "data//maps/PokeSpawn/scripts.pory"
	.string "Mercy's Mons?$"

PokeSpawn_EventScript_Greg_Text_0:
# 131 "data//maps/PokeSpawn/scripts.pory"
	.string "Greg's Mons?$"

PokeSpawn_EventScript_Dane_Text_0:
# 145 "data//maps/PokeSpawn/scripts.pory"
	.string "Dane's Mons?$"

PokeSpawn_EventScript_Savannah_Text_0:
# 160 "data//maps/PokeSpawn/scripts.pory"
	.string "Savannah's Mons?$"
