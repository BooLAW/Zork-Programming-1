#include"Rooms.h"
#include<string.h>
void rooms::rooms_creator(const char* name_of_rooms[13], const char* description_of_rooms[13]){
	rooms* room[13];
	//Now we are going to create every room single room
	strcpy_s(room[0]->room_name, 20,name_of_rooms[0]);
	strcpy_s(room[0]->room_description, 200, description_of_rooms[0]);

	strcpy_s(room[1]->room_name, 20, name_of_rooms[1]);
	strcpy_s(room[1]->room_description, 200, description_of_rooms[1]);

	strcpy_s(room[2]->room_name, 20, name_of_rooms[2]);
	strcpy_s(room[2]->room_description, 200, description_of_rooms[2]);

	strcpy_s(room[3]->room_name, 20, name_of_rooms[3]);
	strcpy_s(room[3]->room_description, 200, description_of_rooms[3]);

	strcpy_s(room[4]->room_name, 20, name_of_rooms[4]);
	strcpy_s(room[4]->room_description, 200, description_of_rooms[4]);

	strcpy_s(room[5]->room_name, 20, name_of_rooms[5]);
	strcpy_s(room[5]->room_description, 200, description_of_rooms[5]);

	strcpy_s(room[6]->room_name, 20, name_of_rooms[6]);
	strcpy_s(room[6]->room_description, 200, description_of_rooms[6]);

	strcpy_s(room[7]->room_name, 20, name_of_rooms[7]);
	strcpy_s(room[7]->room_description, 200, description_of_rooms[7]);

	strcpy_s(room[8]->room_name, 20, name_of_rooms[8]);
	strcpy_s(room[8]->room_description, 200, description_of_rooms[8]);

	strcpy_s(room[9]->room_name, 20, name_of_rooms[9]);
	strcpy_s(room[9]->room_description, 200, description_of_rooms[9]);

	strcpy_s(room[10]->room_name, 20, name_of_rooms[10]);
	strcpy_s(room[10]->room_description, 200, description_of_rooms[10]);

	strcpy_s(room[11]->room_name, 20, name_of_rooms[11]);
	strcpy_s(room[11]->room_description, 200, description_of_rooms[11]);

	strcpy_s(room[12]->room_name, 20, name_of_rooms[12]);
	strcpy_s(room[12]->room_description, 200, description_of_rooms[12]);


}

			 
		 
	 
 
	
