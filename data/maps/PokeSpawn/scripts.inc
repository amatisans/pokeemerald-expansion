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
	removeobject 1
# 12 "data//maps/PokeSpawn/scripts.pory"
	setflag FLAG_RARE_CANDY
# 14 "data//maps/PokeSpawn/scripts.pory"
	releaseall
	end


PokeSpawn_EventScript_PC::
	end


NicknamePartyMon::
# 27 "data//maps/PokeSpawn/scripts.pory"
	hidemonpic
	return


NicknameBoxMon::
# 39 "data//maps/PokeSpawn/scripts.pory"
	hidemonpic
	return


PokeSpawn_EventScript_Items_Text_0:
# 9 "data//maps/PokeSpawn/scripts.pory"
	.string "Recieved Rare Candies$"

PokeSpawn_NotChosen::
# 47 "data//maps/PokeSpawn/scripts.pory"
	.string "You did not choose the Pokemon$"
