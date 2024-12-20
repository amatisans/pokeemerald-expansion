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
# 101 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Dev_2:
# 86 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TROPIUS, 1
# 87 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARILL, 1
# 89 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_KYOGRE, 1
# 90 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GROUDON, 1
# 91 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MEWTWO, 1
# 92 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ZEKROM, 1
# 93 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_BUZZWOLE, 1
# 94 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARSHADOW, 1
# 95 "data//maps/PokeSpawn/scripts.pory"
	giveitem ITEM_MAX_REPEL, 999
# 97 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 99 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Dev_1


PokeSpawn_EventScript_Allan::
# 106 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 107 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Allan_Text_0, MSGBOX_YESNO
# 108 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Allan_2
PokeSpawn_EventScript_Allan_1:
# 148 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Allan_2:
# 109 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MAGNEMITE, 1
# 110 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CUBONE, 1
# 111 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_NIDORAN_M, 1
# 112 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_HERACROSS, 1
# 113 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_NATU, 1
# 114 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MURKROW, 1
# 115 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_BAGON, 1
# 116 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TORKOAL, 1
# 117 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_BALTOY, 1
# 118 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GIBLE, 1
# 119 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ROTOM_FAN, 1
# 120 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SKORUPI, 1
# 121 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FERROSEED, 1
# 122 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TIMBURR, 1
# 123 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FOONGUS, 1
# 124 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_HAWLUCHA, 1
# 125 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TYRUNT, 1
# 126 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_HELIOPTILE, 1
# 127 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_JANGMO_O, 1
# 128 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ORICORIO_SENSU, 1
# 129 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SANDYGAST, 1
# 130 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DRACOVISH, 1
# 131 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_IMPIDIMP, 1
# 132 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ARCTOZOLT, 1
# 133 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DONDOZO, 1
# 134 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FLAMIGO, 1
# 135 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TINKATINK, 1
# 136 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TANGELA, 1
# 137 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DRACOZOLT, 1
# 138 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_PORYGON, 1
# 141 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TROPIUS, 1
# 142 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARILL, 1
# 144 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 146 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Allan_1


PokeSpawn_EventScript_Mercy::
# 153 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 154 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Mercy_Text_0, MSGBOX_YESNO
# 155 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Mercy_2
PokeSpawn_EventScript_Mercy_1:
# 195 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Mercy_2:
# 157 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_VULPIX, 1
# 158 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TAUROS_PALDEA_AQUA, 1
# 159 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_EEVEE, 1
# 160 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MISDREAVUS, 1
# 161 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SKARMORY, 1
# 162 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TEDDIURSA, 1
# 163 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_BELDUM, 1
# 164 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FEEBAS, 1
# 165 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_WAILMER, 1
# 166 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_RIOLU, 1
# 167 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_STUNKY, 1
# 168 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CARNIVINE, 1
# 169 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DRILBUR, 1
# 170 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ZORUA, 1
# 171 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_KARRABLAST, 1
# 172 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FLETCHLING, 1
# 173 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_KLEFKI, 1
# 174 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GOOMY, 1
# 175 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MIMIKYU, 1
# 176 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ROCKRUFF_OWN_TEMPO, 1
# 177 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_COMFEY, 1
# 178 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DURALUDON, 1
# 179 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_YAMPER, 1
# 180 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FALINKS, 1
# 181 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CHARCADET, 1
# 182 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_WATTREL, 1
# 183 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TATSUGIRI, 1
# 184 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SANDSHREW_ALOLAN, 1
# 185 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_LITWICK, 1
# 186 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_PONYTA_GALARIAN, 1
# 188 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TROPIUS, 1
# 189 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARILL, 1
# 191 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 193 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Mercy_1


PokeSpawn_EventScript_Greg::
# 200 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 201 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Greg_Text_0, MSGBOX_YESNO
# 202 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Greg_2
PokeSpawn_EventScript_Greg_1:
# 243 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Greg_2:
# 204 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GASTLY, 1
# 205 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ABRA, 1
# 206 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_POLIWAG, 1
# 207 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_PICHU, 1
# 208 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SNEASEL, 1
# 209 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ELEKID, 1
# 210 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SEVIPER, 1
# 211 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SPHEAL, 1
# 212 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CARVANHA, 1
# 213 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CRANIDOS, 1
# 214 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MUNCHLAX, 1
# 215 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DRIFLOON, 1
# 216 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SANDILE, 1
# 217 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ARCHEN, 1
# 218 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_AXEW, 1
# 219 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_PANCHAM, 1
# 220 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_PHANTUMP, 1
# 221 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_NOIBAT, 1
# 222 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MORELULL, 1
# 223 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_PASSIMIAN, 1
# 224 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ORANGURU, 1
# 225 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CHEWTLE, 1
# 226 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CUFANT, 1
# 227 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ROOKIDEE, 1
# 228 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FRIGIBAX, 1
# 229 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_NYMBLE, 1
# 230 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FIDOUGH, 1
# 231 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GOLETT, 1
# 232 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SCYTHER, 1
# 233 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MEOWTH, 1
# 236 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TROPIUS, 1
# 237 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARILL, 1
# 239 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 241 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Greg_1


PokeSpawn_EventScript_Dane::
# 248 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 249 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Dane_Text_0, MSGBOX_YESNO
# 250 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Dane_2
PokeSpawn_EventScript_Dane_1:
# 291 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Dane_2:
# 252 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MAGIKARP, 1
# 253 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_AERODACTYL, 1
# 254 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_LAPRAS, 1
# 255 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GLIGAR, 1
# 256 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SWINUB, 1
# 257 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MAGBY, 1
# 258 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_RALTS, 1
# 259 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DUSKULL, 1
# 260 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TRAPINCH, 1
# 261 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CROAGUNK, 1
# 262 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_BRONZOR, 1
# 263 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SPIRITOMB, 1
# 264 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DURANT, 1
# 265 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SAWK, 1
# 266 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_SIGILYPH, 1
# 267 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_HONEDGE, 1
# 268 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_FLABEBE, 1
# 269 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CARBINK, 1
# 270 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MAREANIE, 1
# 271 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_WISHIWASHI_SCHOOL, 1
# 272 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GRUBBIN, 1
# 273 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TOXEL, 1
# 274 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_APPLIN, 1
# 275 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_ROLYCOLY, 1
# 276 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_CYCLIZAR, 1
# 277 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MASCHIFF, 1
# 278 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TOEDSCOOL, 1
# 279 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_DRAMPA, 1
# 280 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_HAPPINY, 1
# 281 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_GEODUDE, 1
# 284 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TROPIUS, 1
# 285 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARILL, 1
# 287 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 289 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Dane_1


PokeSpawn_EventScript_Savannah::
# 297 "data//maps/PokeSpawn/scripts.pory"
	lockall
# 298 "data//maps/PokeSpawn/scripts.pory"
	msgbox PokeSpawn_EventScript_Savannah_Text_0, MSGBOX_YESNO
# 299 "data//maps/PokeSpawn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeSpawn_EventScript_Savannah_2
PokeSpawn_EventScript_Savannah_1:
# 307 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end

PokeSpawn_EventScript_Savannah_2:
# 300 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_TROPIUS, 1
# 301 "data//maps/PokeSpawn/scripts.pory"
	givemon SPECIES_MARILL, 1
# 303 "data//maps/PokeSpawn/scripts.pory"
	call removeBalls
# 305 "data//maps/PokeSpawn/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PokeSpawn_EventScript_Savannah_1


removeBalls::
# 312 "data//maps/PokeSpawn/scripts.pory"
	removeobject 2
# 313 "data//maps/PokeSpawn/scripts.pory"
	removeobject 3
# 314 "data//maps/PokeSpawn/scripts.pory"
	removeobject 4
# 315 "data//maps/PokeSpawn/scripts.pory"
	removeobject 5
# 316 "data//maps/PokeSpawn/scripts.pory"
	removeobject 6
# 317 "data//maps/PokeSpawn/scripts.pory"
	removeobject 7
# 318 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_GOT_MONS
# 319 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


PokeSpawn_EventScript_Dev_Text_0:
# 84 "data//maps/PokeSpawn/scripts.pory"
	.string "Dev Mons?$"

PokeSpawn_EventScript_Allan_Text_0:
# 107 "data//maps/PokeSpawn/scripts.pory"
	.string "Allan's Mons?$"

PokeSpawn_EventScript_Mercy_Text_0:
# 154 "data//maps/PokeSpawn/scripts.pory"
	.string "Mercy's Mons?$"

PokeSpawn_EventScript_Greg_Text_0:
# 201 "data//maps/PokeSpawn/scripts.pory"
	.string "Greg's Mons?$"

PokeSpawn_EventScript_Dane_Text_0:
# 249 "data//maps/PokeSpawn/scripts.pory"
	.string "Dane's Mons?$"

PokeSpawn_EventScript_Savannah_Text_0:
# 298 "data//maps/PokeSpawn/scripts.pory"
	.string "Savannah's Mons?$"
