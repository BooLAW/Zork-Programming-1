#include<stdio.h>
#define SIZE_DES_ROOM 13
#define SIZE_NAME_ROOM 13
#define SIZE_DES_EXITS 26
#define SIZE_NAME_EXITS 26



//create world(all the exits rooms and all this kind of stuff)
//
class World{
	void CreateWorld();
	void Output();
	void command_check();
public:
	int i;
	char* cp;//pointer to store the arrays in the dynamic memory
	const char* description_of_rooms[13] = { "This seems to be what once provided energy to the lighthouse of the island, there are solar panels and eolic towers\n", "There is a Nest in the middle of the road full of bones and skulls that belong to humans and animals\n", "There are some cutted trees and an axe and a pair of gloves in the bottom of one of them\n ", "In front of you there is the door of a huge lighthouse, and it seems to be open\n", "In the middle of the room there is an unactive bulb and some wires around\n", "You are in a house full of scratches in the walls and a closed room in the west of it\n", "You are inside the rocket room and a huge animal stands in front of you, the only escape is to go back or to jump behind the animal to what it seems to be a hole\n", "You are in front of a cliff with a very old wood bridge crossing it, the only way to cross it is through the bridge or by getting back and looking for any other route\n", "You are in the foggy valley, you hear some sounds, but the only way to cross it is by keep walking to the north or to the south\n", "You are in a waterfall, the only place of the isle with drinkable water, there is no exit except from getting back\n", "You are surrounded of AppleTrees with sweet apples that seem to be tasty, there is no more path than the one that you came from\n", "You are surrounded by big oaks and a two dogs are sleeping in the bottom of one of the trees, you just can walk through the road that crosses the forest from east to west\n", "You are in the beggining of your adventure, there is nothing else but sand and water except from a hidden path with a road inside of it at the west\n" };
	const char* name_of_rooms[13] = { "Solar Panels", "Nest", "SawMill", "Light House Entrance", "Top of the Light House", "Abandoned House", "Locked Room", "Cliff", "Fog", "Waterfall", "Appletrees Field", "Forest", "Beach" };
	const char* description_of_exits[26] = { "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "..." };
	const char* name_of_exits[26] = {"Route 1", "Route 2", "Route 3", "Route 4", "Route 5", "Route 6", "Route 7", "Route 8", "Route 9", "Route 10", "Route 11", "Route 12", "Route 13", "Route 14", "Route 15", "Route 16", "Route 17", "Route 18", "Route 19", "Route 20", "Route 21", "Route 22", "Route 23", "Route 24", "Route 25", "Route 26"};
	
	for(i = 0; i < SIZE_DES_ROOM; i++){
			char* description_of_rooms = new[i];
		}
	for (i = 0; i < SIZE_NAME_ROOM; i++){
			char* name_of_rooms = new[i];
		}
	for (i = 0; i < SIZE_DES_EXITS; i++){
			char* description_of_exits = new[i];
		}
	for ( i = 0; i < SIZE_NAME_EXITS; i++){
			char* name_of_exits = new[i];
		}
	
	~description_of_rooms(){
		delete[]description_of_rooms;
		}
	~name_of_rooms(){
		delete[]name_of_rooms;
	}
	~description_of_exits(){
		delete[]description_of_exits;
	}
	~name_of_exits(){
		delete[]name_of_exits;
	}
};
