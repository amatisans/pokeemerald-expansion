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
	call cheatStart
# 12 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RARE_CANDY
# 14 "data//maps/PokeSpawn/scripts.pory"
	removeobject 1
# 15 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end


PokeSpawn_EventScript_Dev::
# 20 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 21 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Dev_Text_0, MSGBOX_YESNO
# 22 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Dev_2
PokeSpawn_EventScript_Dev_1:
# 38 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Dev_2:
# 23 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TROPIUS, 1
# 24 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARILL, 1
# 26 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_KYOGRE, 1
# 27 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GROUDON, 1
# 28 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MEWTWO, 1
# 29 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ZEKROM, 1
# 30 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_BUZZWOLE, 1
# 31 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARSHADOW, 1
# 32 "data//maps/PokeSpawn/scripts.pory"
	giveitem ITEM_MAX_REPEL, 999
# 34 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 36 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Dev_1


PokeSpawn_EventScript_Allan::
# 43 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 44 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Allan_Text_0, MSGBOX_YESNO
# 45 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Allan_2
PokeSpawn_EventScript_Allan_1:
# 85 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Allan_2:
# 46 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MAGNEMITE, 1
# 47 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CUBONE, 1
# 48 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_NIDORAN_M, 1
# 49 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_HERACROSS, 1
# 50 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_NATU, 1
# 51 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MURKROW, 1
# 52 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_BAGON, 1
# 53 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TORKOAL, 1
# 54 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_BALTOY, 1
# 55 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GIBLE, 1
# 56 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ROTOM_FAN, 1
# 57 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SKORUPI, 1
# 58 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FERROSEED, 1
# 59 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TIMBURR, 1
# 60 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FOONGUS, 1
# 61 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_HAWLUCHA, 1
# 62 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TYRUNT, 1
# 63 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_HELIOPTILE, 1
# 64 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_JANGMO_O, 1
# 65 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ORICORIO_SENSU, 1
# 66 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SANDYGAST, 1
# 67 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DRACOVISH, 1
# 68 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_IMPIDIMP, 1
# 69 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ARCTOZOLT, 1
# 70 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DONDOZO, 1
# 71 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FLAMIGO, 1
# 72 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TINKATINK, 1
# 73 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TANGELA, 1
# 74 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DRACOZOLT, 1
# 75 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_PORYGON, 1
# 78 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TROPIUS, 1
# 79 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARILL, 1
# 81 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 83 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Allan_1


PokeSpawn_EventScript_Mercy::
# 90 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 91 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Mercy_Text_0, MSGBOX_YESNO
# 92 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Mercy_2
PokeSpawn_EventScript_Mercy_1:
# 132 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Mercy_2:
# 94 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_VULPIX, 1
# 95 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TAUROS_PALDEA_AQUA, 1
# 96 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_EEVEE, 1
# 97 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MISDREAVUS, 1
# 98 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SKARMORY, 1
# 99 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TEDDIURSA, 1
# 100 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_BELDUM, 1
# 101 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FEEBAS, 1
# 102 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_WAILMER, 1
# 103 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_RIOLU, 1
# 104 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_STUNKY, 1
# 105 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CARNIVINE, 1
# 106 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DRILBUR, 1
# 107 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ZORUA, 1
# 108 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_KARRABLAST, 1
# 109 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FLETCHLING, 1
# 110 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_KLEFKI, 1
# 111 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GOOMY, 1
# 112 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MIMIKYU, 1
# 113 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ROCKRUFF_OWN_TEMPO, 1
# 114 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_COMFEY, 1
# 115 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DURALUDON, 1
# 116 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_YAMPER, 1
# 117 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FALINKS, 1
# 118 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CHARCADET, 1
# 119 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_WATTREL, 1
# 120 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TATSUGIRI_DROOPY, 1
# 121 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SANDSHREW_ALOLAN, 1
# 122 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_LITWICK, 1
# 123 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_PONYTA_GALARIAN, 1
# 125 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TROPIUS, 1
# 126 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARILL, 1
# 128 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 130 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Mercy_1


PokeSpawn_EventScript_Greg::
# 137 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 138 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Greg_Text_0, MSGBOX_YESNO
# 139 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Greg_2
PokeSpawn_EventScript_Greg_1:
# 180 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Greg_2:
# 141 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GASTLY, 1
# 142 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ABRA, 1
# 143 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_POLIWAG, 1
# 144 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_PICHU, 1
# 145 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SNEASEL, 1
# 146 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ELEKID, 1
# 147 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SEVIPER, 1
# 148 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SPHEAL, 1
# 149 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CARVANHA, 1
# 150 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CRANIDOS, 1
# 151 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MUNCHLAX, 1
# 152 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DRIFLOON, 1
# 153 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SANDILE, 1
# 154 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ARCHEN, 1
# 155 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_AXEW, 1
# 156 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_PANCHAM, 1
# 157 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_PHANTUMP, 1
# 158 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_NOIBAT, 1
# 159 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MORELULL, 1
# 160 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_PASSIMIAN, 1
# 161 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ORANGURU, 1
# 162 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CHEWTLE, 1
# 163 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CUFANT, 1
# 164 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ROOKIDEE, 1
# 165 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FRIGIBAX, 1
# 166 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_NYMBLE, 1
# 167 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FIDOUGH, 1
# 168 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GOLETT, 1
# 169 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SCYTHER, 1
# 170 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MEOWTH, 1
# 173 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TROPIUS, 1
# 174 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARILL, 1
# 176 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 178 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Greg_1


PokeSpawn_EventScript_Dane::
# 185 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 186 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Dane_Text_0, MSGBOX_YESNO
# 187 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Dane_2
PokeSpawn_EventScript_Dane_1:
# 228 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Dane_2:
# 189 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MAGIKARP, 1
# 190 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_AERODACTYL, 1
# 191 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_LAPRAS, 1
# 192 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GLIGAR, 1
# 193 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SWINUB, 1
# 194 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MAGBY, 1
# 195 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_RALTS, 1
# 196 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DUSKULL, 1
# 197 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TRAPINCH, 1
# 198 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CROAGUNK, 1
# 199 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_BRONZOR, 1
# 200 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SPIRITOMB, 1
# 201 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DURANT, 1
# 202 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SAWK, 1
# 203 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SIGILYPH, 1
# 204 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_HONEDGE, 1
# 205 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FLABEBE, 1
# 206 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CARBINK, 1
# 207 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MAREANIE, 1
# 208 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_WISHIWASHI, 1
# 209 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRUBBIN, 1
# 210 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TOXEL, 1
# 211 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_APPLIN, 1
# 212 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ROLYCOLY, 1
# 213 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CYCLIZAR, 1
# 214 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MASCHIFF, 1
# 215 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TOEDSCOOL, 1
# 216 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DRAMPA, 1
# 217 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_HAPPINY, 1
# 218 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GEODUDE, 1
# 221 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TROPIUS, 1
# 222 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARILL, 1
# 224 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 226 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Dane_1


PokeSpawn_EventScript_Savannah::
# 234 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 235 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Savannah_Text_0, MSGBOX_YESNO
# 236 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Savannah_2
PokeSpawn_EventScript_Savannah_1:
# 244 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Savannah_2:
# 237 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TROPIUS, 1
# 238 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARILL, 1
# 240 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 242 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Savannah_1


removeBalls::
# 249 "data//maps/PokeSpawn/scripts.pory"
	removeobject 2
# 250 "data//maps/PokeSpawn/scripts.pory"
	removeobject 3
# 251 "data//maps/PokeSpawn/scripts.pory"
	removeobject 4
# 252 "data//maps/PokeSpawn/scripts.pory"
	removeobject 5
# 253 "data//maps/PokeSpawn/scripts.pory"
	removeobject 6
# 254 "data//maps/PokeSpawn/scripts.pory"
	removeobject 7
# 255 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_GOT_MONS
# 256 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


cheatStart::
# 260 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 261 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 262 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 264 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 265 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 266 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 267 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 270 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 271 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 272 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 273 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 274 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 275 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 276 "data//maps/PokeSpawn/scripts.pory"
	special InitBirchState
# 278 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 279 "data//maps/PokeSpawn/scripts.pory"
	special SetUnlockedPokedexFlags
# 280 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 281 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 2
# 282 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 283 "data//maps/PokeSpawn/scripts.pory"
	special EnableNationalPokedex
# 284 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 285 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 286 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 287 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 288 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 289 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 290 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 291 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 292 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 296 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
# 298 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 299 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 300 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 301 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 304 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 305 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_BIRCH
# 306 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 307 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 308 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 309 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 311 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 312 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 313 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 317 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 318 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 319 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 346 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 347 "data//maps/PokeSpawn/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	return


Woods1::
# 352 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
	return


# 356 "data//maps/PokeSpawn/scripts.pory"

# 357 "data//maps/PokeSpawn/scripts.pory"
SpawnRoom_MoveRelearner_MoveRelearner::
# 358 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 359 "data//maps/PokeSpawn/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
# 360 "data//maps/PokeSpawn/scripts.pory"
	goto SpawnRoom_MoveRelearner_AskTeachMove
# 361 "data//maps/PokeSpawn/scripts.pory"
	end
# 362 "data//maps/PokeSpawn/scripts.pory"

# 363 "data//maps/PokeSpawn/scripts.pory"
SpawnRoom_MoveRelearner_AskTeachMove::
# 364 "data//maps/PokeSpawn/scripts.pory"
	msgbox SpawnRoom_MoveRelearner_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 365 "data//maps/PokeSpawn/scripts.pory"
	switch VAR_RESULT
# 366 "data//maps/PokeSpawn/scripts.pory"
	case NO, SpawnRoom_MoveRelearner_ComeBackWithHeartScale
# 367 "data//maps/PokeSpawn/scripts.pory"
	goto SpawnRoom_MoveRelearner_ChooseMon
# 368 "data//maps/PokeSpawn/scripts.pory"
	end
# 369 "data//maps/PokeSpawn/scripts.pory"

# 370 "data//maps/PokeSpawn/scripts.pory"
SpawnRoom_MoveRelearner_ChooseMon::
# 371 "data//maps/PokeSpawn/scripts.pory"
	msgbox SpawnRoom_MoveRelearner_Text_TutorWhichMon, MSGBOX_DEFAULT
# 372 "data//maps/PokeSpawn/scripts.pory"
	special ChooseMonForMoveRelearner
# 373 "data//maps/PokeSpawn/scripts.pory"
	waitstate
# 374 "data//maps/PokeSpawn/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SpawnRoom_MoveRelearner_ComeBackWithHeartScale
# 375 "data//maps/PokeSpawn/scripts.pory"
	special IsSelectedMonEgg
# 376 "data//maps/PokeSpawn/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SpawnRoom_MoveRelearner_CantTeachEgg
# 377 "data//maps/PokeSpawn/scripts.pory"
	goto_if_eq VAR_0x8005, 0, SpawnRoom_MoveRelearner_NoMoveToTeachMon
# 378 "data//maps/PokeSpawn/scripts.pory"
	goto SpawnRoom_MoveRelearner_ChooseMove
# 379 "data//maps/PokeSpawn/scripts.pory"
	end
# 380 "data//maps/PokeSpawn/scripts.pory"

# 381 "data//maps/PokeSpawn/scripts.pory"
SpawnRoom_MoveRelearner_ChooseMove::
# 382 "data//maps/PokeSpawn/scripts.pory"
	msgbox SpawnRoom_MoveRelearner_Text_TeachWhichMove, MSGBOX_DEFAULT
# 383 "data//maps/PokeSpawn/scripts.pory"
	special TeachMoveRelearnerMove
# 384 "data//maps/PokeSpawn/scripts.pory"
	waitstate
# 385 "data//maps/PokeSpawn/scripts.pory"
	goto_if_eq VAR_0x8004, 0, SpawnRoom_MoveRelearner_ChooseMon
# 386 "data//maps/PokeSpawn/scripts.pory"
	goto SpawnRoom_MoveRelearner_ComeBackWithHeartScale
# 387 "data//maps/PokeSpawn/scripts.pory"
	end
# 388 "data//maps/PokeSpawn/scripts.pory"

# 389 "data//maps/PokeSpawn/scripts.pory"
SpawnRoom_MoveRelearner_NoMoveToTeachMon::
# 390 "data//maps/PokeSpawn/scripts.pory"
	msgbox SpawnRoom_MoveRelearner_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 391 "data//maps/PokeSpawn/scripts.pory"
	goto SpawnRoom_MoveRelearner_ChooseMon
# 392 "data//maps/PokeSpawn/scripts.pory"
	end
# 393 "data//maps/PokeSpawn/scripts.pory"

# 394 "data//maps/PokeSpawn/scripts.pory"
SpawnRoom_MoveRelearner_CantTeachEgg::
# 395 "data//maps/PokeSpawn/scripts.pory"
	msgbox SpawnRoom_MoveRelearner_Text_CantTeachEgg, MSGBOX_DEFAULT
# 396 "data//maps/PokeSpawn/scripts.pory"
	goto SpawnRoom_MoveRelearner_ChooseMon
# 397 "data//maps/PokeSpawn/scripts.pory"
	end
# 398 "data//maps/PokeSpawn/scripts.pory"

# 399 "data//maps/PokeSpawn/scripts.pory"
SpawnRoom_MoveRelearner_ComeBackWithHeartScale::
# 400 "data//maps/PokeSpawn/scripts.pory"
	msgbox SpawnRoom_MoveRelearner_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 401 "data//maps/PokeSpawn/scripts.pory"
	releaseall
# 402 "data//maps/PokeSpawn/scripts.pory"
	end
# 403 "data//maps/PokeSpawn/scripts.pory"

# 404 "data//maps/PokeSpawn/scripts.pory"
SpawnRoom_MoveRelearner_Text_ThatsAHeartScaleWantMeToTeachMove:
# 405 "data//maps/PokeSpawn/scripts.pory"
	.string "Vet me guess, you vant to try hard.\n"
# 406 "data//maps/PokeSpawn/scripts.pory"
	.string "So, you vant me to teach\n"
# 407 "data//maps/PokeSpawn/scripts.pory"
	.string "a vew move?$"
# 408 "data//maps/PokeSpawn/scripts.pory"

# 409 "data//maps/PokeSpawn/scripts.pory"
SpawnRoom_MoveRelearner_Text_TutorWhichMon:
# 410 "data//maps/PokeSpawn/scripts.pory"
	.string "Vich POKéMON veeds tutoring?$"
# 411 "data//maps/PokeSpawn/scripts.pory"

# 412 "data//maps/PokeSpawn/scripts.pory"
SpawnRoom_MoveRelearner_Text_TeachWhichMove:
# 413 "data//maps/PokeSpawn/scripts.pory"
	.string "Vich move should I teach?$"
# 414 "data//maps/PokeSpawn/scripts.pory"

# 415 "data//maps/PokeSpawn/scripts.pory"
SpawnRoom_MoveRelearner_Text_DontHaveMoveToTeachPokemon:
# 416 "data//maps/PokeSpawn/scripts.pory"
	.string "Vhat POKéMON has nein moves to\n"
# 417 "data//maps/PokeSpawn/scripts.pory"
    .string "to teach.$"
# 418 "data//maps/PokeSpawn/scripts.pory"

# 419 "data//maps/PokeSpawn/scripts.pory"
SpawnRoom_MoveRelearner_Text_ComeBackWithHeartScale:
# 420 "data//maps/PokeSpawn/scripts.pory"
	.string "Come vack later.$"
# 421 "data//maps/PokeSpawn/scripts.pory"

# 422 "data//maps/PokeSpawn/scripts.pory"
SpawnRoom_MoveRelearner_Text_CantTeachEgg:
# 423 "data//maps/PokeSpawn/scripts.pory"
	.string "VAT? Vere isn't a single move vat\n"
# 424 "data//maps/PokeSpawn/scripts.pory"
	.string "I can teach an EGG.$"

PokeSpawn_EventScript_Dev_Text_0:
# 21 "data//maps/PokeSpawn/scripts.pory"
	.string "Dev Mons?$"

PokeSpawn_EventScript_Allan_Text_0:
# 44 "data//maps/PokeSpawn/scripts.pory"
	.string "Allan's Mons?$"

PokeSpawn_EventScript_Mercy_Text_0:
# 91 "data//maps/PokeSpawn/scripts.pory"
	.string "Mercy's Mons?$"

PokeSpawn_EventScript_Greg_Text_0:
# 138 "data//maps/PokeSpawn/scripts.pory"
	.string "Greg's Mons?$"

PokeSpawn_EventScript_Dane_Text_0:
# 186 "data//maps/PokeSpawn/scripts.pory"
	.string "Dane's Mons?$"

PokeSpawn_EventScript_Savannah_Text_0:
# 235 "data//maps/PokeSpawn/scripts.pory"
	.string "Savannah's Mons?$"
