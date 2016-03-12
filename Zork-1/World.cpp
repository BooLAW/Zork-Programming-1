#include"Exits.h"
#include"Players.h"
#include"Rooms.h"
#include"World.h"
#include<string.h>

void World::CreateWorld(){
	//CREATEROOMS
	rooms* room = new rooms[13];
	strcpy_s((char*)room[0].room_name, 50, "Hello");
	
		
	//CREATEEXITS


	//CREATEPLAYER
	Players* main_character = new Players[1];

	main_character->current_room = 0;
};

void World::Output(){
	char* current_room = room[];
		
}
