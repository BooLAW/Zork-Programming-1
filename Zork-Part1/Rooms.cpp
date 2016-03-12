#include"Rooms.h"
//Void information will hold the information of every room 
void information(int number_room){
	switch (number_room){
	case 0:
		printf("You are in the beach, there is nothing around except a road inside a ");
		break;
	case 1:
		printf("You are in the Cross Road 1");
		break;
	case 2:
		
		break;
	case 3:
		
		break;
	case 4:
		
		break;
	case 5:
		
		break;
	case 6:
		
		break;
	case 7:
		
		break;
	case 8:
		
		break;
	case 9:
		
		break;
	case 10:
		
		break;
	case 11:
		
		break;
	case 12:
		
		break;
	}
}
//This functions returns the name of the room where we are giving them the number in the flatten array
 char* room_from_number(const int number_room,char* name_of_rooms[25]){
	 char* name;
	 name = name_of_rooms[number_room];
	 return name;
			 
		 
	 }
 
	
