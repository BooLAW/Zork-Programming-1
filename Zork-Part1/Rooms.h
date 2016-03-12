#include<stdlib.h>
#include<stdio.h>

class rooms{
	//function declaration
	char* room_from_number(const int a,  char* name_of_rooms[25]);
	
public:
	const char* name_of_rooms[25] = {"Solar Panels","Nest","SawMill","Light House Entrance", "Top of the Light House","House","Locked Room","Road","0","0","Cross Road 3","Cliff","Fog","0","0","Road","0","Cross Road 2","Waterfall","0","Appletrees Field","Forest","Cross Road 1","Beach","Sea" };
	char room_name[20];	
	(char*)strcpy(&room_name[0], room_from_number(const int a));
	//here we get the actual room_name with a function
	int position;
	


};