#include"Exits.h"
#include"Rooms.h"
#include"World.h"
#include<string.h>

void exits::define_exits(const char* description_of_exits[26], const char* name_of_exits[26], rooms* room[13]){
	exits* exit[26];

	//1st exit(Energy plant to Nest)
	strcpy_s(exit[0]->exit_name,26,name_of_exits[0] );
	exit[0]->open=1;
	strcpy_s(exit[0]->exit_description, 200,description_of_exits[0]);
	exit[0]->exit_source = room[0];
	exit[0]->exit_destination = room[1];
	//2nd exit(Nest to Energy Plant)
	strcpy_s(exit[1]->exit_name, 26, name_of_exits[1]);
	exit[1]->open = 1;
	strcpy_s(exit[0]->exit_description, 200, description_of_exits[1]);
	exit[1]->exit_source = room[1];
	exit[1]->exit_destination = room[0];
	//3rd exit(Nest to Sawmill)
	strcpy_s(exit[2]->exit_name, 26, name_of_exits[2]);
	exit[2]->open = 1;
	strcpy_s(exit[2]->exit_description, 200, description_of_exits[2]);
	exit[2]->exit_source = room[1];
	exit[2]->exit_destination = room[2];
	//4th exit(Sawmill to Nest)
	strcpy_s(exit[3]->exit_name, 26, name_of_exits[3]);
	exit[3]->open = 1;
	strcpy_s(exit[3]->exit_description, 200, description_of_exits[3]);
	exit[3]->exit_source = room[2];
	exit[3]->exit_destination = room[1];
	//5th exit(Sawmill to LH1)
	strcpy_s(exit[4]->exit_name, 26, name_of_exits[4]);
	exit[4]->open = 1;
	strcpy_s(exit[4]->exit_description, 200, description_of_exits[4]);
	exit[4]->exit_source = room[2];
	exit[4]->exit_destination = room[3];
	//6th exit(LH1 to Sawmill)
	strcpy_s(exit[5]->exit_name, 26, name_of_exits[5]);
	exit[5]->open = 1;
	strcpy_s(exit[5]->exit_description, 200, description_of_exits[5]);
	exit[5]->exit_source = room[3];
	exit[5]->exit_destination = room[2];
	//7th exit(LH1 to LH2)
	strcpy_s(exit[6]->exit_name, 26, name_of_exits[6]);
	exit[6]->open = 0;
	strcpy_s(exit[6]->exit_description, 200, description_of_exits[6]);
	exit[6]->exit_source = room[3];
	exit[6]->exit_destination = room[4];
	//8th exit(LH2 to LH1)
	strcpy_s(exit[7]->exit_name, 26, name_of_exits[7]);
	exit[7]->open = 1;
	strcpy_s(exit[7]->exit_description, 200, description_of_exits[7]);
	exit[7]->exit_source = room[4];
	exit[7]->exit_destination = room[3];
	//9th exit(Nest to Locked room)
	strcpy_s(exit[8]->exit_name, 26, name_of_exits[8]);
	exit[8]->open = 0;
	strcpy_s(exit[8]->exit_description, 200, description_of_exits[8]);
	exit[8]->exit_source = room[1];
	exit[8]->exit_destination = room[6];
	//10th exit(Locked room to Nest)
	strcpy_s(exit[9]->exit_name, 26, name_of_exits[9]);
	exit[9]->open = 1;
	strcpy_s(exit[9]->exit_description, 200, description_of_exits[9]);
	exit[9]->exit_source = room[6];
	exit[9]->exit_destination = room[1];
	//11th exit(Sawmill to Foggy Valley)
	strcpy_s(exit[10]->exit_name, 26, name_of_exits[10]);
	exit[10]->open = 1;
	strcpy_s(exit[10]->exit_description, 200, description_of_exits[10]);
	exit[10]->exit_source = room[2];
	exit[10]->exit_destination = room[8];
	//12th exit(Foggy valley to Sawmill)
	strcpy_s(exit[11]->exit_name, 26, name_of_exits[11]);
	exit[11]->open = 1;
	strcpy_s(exit[11]->exit_description, 200, description_of_exits[11]);
	exit[11]->exit_source = room[8];
	exit[11]->exit_destination = room[2];
	//13th exit(Locked Room to House)
	strcpy_s(exit[12]->exit_name, 26, name_of_exits[12]);
	exit[12]->open = 1;
	strcpy_s(exit[12]->exit_description, 200, description_of_exits[12]);
	exit[12]->exit_source = room[6];
	exit[12]->exit_destination = room[5];
	//14th exit(House to Locked Room)
	strcpy_s(exit[13]->exit_name, 26, name_of_exits[13]);
	exit[13]->open = 0;
	strcpy_s(exit[13]->exit_description, 200, description_of_exits[13]);
	exit[13]->exit_source = room[5];
	exit[13]->exit_destination = room[6];
	//15th exit(House to cliff)
	strcpy_s(exit[14]->exit_name, 26, name_of_exits[14]);
	exit[14]->open = 1;
	strcpy_s(exit[14]->exit_description, 200, description_of_exits[14]);
	exit[14]->exit_source = room[5];
	exit[14]->exit_destination = room[7];
	//16th exit(Cliff to House)
	strcpy_s(exit[15]->exit_name, 26, name_of_exits[15]);
	exit[15]->open = 1;
	strcpy_s(exit[15]->exit_description, 200, description_of_exits[15]);
	exit[15]->exit_source = room[7];
	exit[15]->exit_destination = room[5];
	//17th exit(Cliff to Forest)
	strcpy_s(exit[16]->exit_name, 26, name_of_exits[16]);
	exit[16]->open = 1;
	strcpy_s(exit[16]->exit_description, 200, description_of_exits[16]);
	exit[16]->exit_source = room[7];
	exit[16]->exit_destination = room[11];
	//18th exit(Forest to Cliff)
	strcpy_s(exit[17]->exit_name, 26, name_of_exits[17]);
	exit[17]->open = 1;
	strcpy_s(exit[17]->exit_description, 200, description_of_exits[17]);
	exit[17]->exit_source = room[11];
	exit[17]->exit_destination = room[7];
	//19th exit(Forest to Apple Trees)
	strcpy_s(exit[18]->exit_name, 26, name_of_exits[18]);
	exit[18]->open = 1;
	strcpy_s(exit[18]->exit_description, 200, description_of_exits[18]);
	exit[18]->exit_source = room[7];
	exit[18]->exit_destination = room[10];
	//20th exit(Appletrees to Forest)
	strcpy_s(exit[19]->exit_name, 26, name_of_exits[19]);
	exit[19]->open = 1;
	strcpy_s(exit[19]->exit_description, 200, description_of_exits[19]);
	exit[19]->exit_source = room[10];
	exit[19]->exit_destination = room[7];
	//21th exit(Forest to Waterfall)
	strcpy_s(exit[20]->exit_name, 26, name_of_exits[20]);
	exit[20]->open = 1;
	strcpy_s(exit[20]->exit_description, 200, description_of_exits[20]);
	exit[20]->exit_source = room[11];
	exit[20]->exit_destination = room[9];
	//22th exit(Waterfall to Forest)
	strcpy_s(exit[21]->exit_name, 26, name_of_exits[21]);
	exit[21]->open = 1;
	strcpy_s(exit[21]->exit_description, 200, description_of_exits[21]);
	exit[21]->exit_source = room[9];
	exit[21]->exit_destination = room[11];
	//23th exit(Forest to Beach)
	strcpy_s(exit[22]->exit_name, 26, name_of_exits[22]);
	exit[22]->open = 1;
	strcpy_s(exit[22]->exit_description, 200, description_of_exits[22]);
	exit[22]->exit_source = room[11];
	exit[22]->exit_destination = room[12];
	//24th exit(Cliff to Forest)
	strcpy_s(exit[23]->exit_name, 26, name_of_exits[23]);
	exit[23]->open = 1;
	strcpy_s(exit[23]->exit_description, 200, description_of_exits[23]);
	exit[23]->exit_source = room[12];
	exit[23]->exit_destination = room[11];
	//25th exit(Waterfall to Foggy Valley)
	strcpy_s(exit[24]->exit_name, 26, name_of_exits[24]);
	exit[24]->open = 0;
	strcpy_s(exit[24]->exit_description, 200, description_of_exits[24]);
	exit[24]->exit_source = room[9];
	exit[24]->exit_destination = room[8];
	//17th exit(Foggy Valley to Waterfall)
	strcpy_s(exit[25]->exit_name, 26, name_of_exits[25]);
	exit[25]->open = 1;
	strcpy_s(exit[25]->exit_description, 200, description_of_exits[25]);
	exit[25]->exit_source = room[8];
	exit[25]->exit_destination = room[9];





}

