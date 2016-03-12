#include "Rooms.h"
class exits{
	void define_exits(const char* description_of_exits[26], const char* name_of_exits[26], rooms* room[13]);
	
public:
	char exit_name[20];
	bool open;
	char exit_description[200];
	enum directions{
		North, South, West, East, Up, Down
	};
	rooms* exit_source;
	rooms* exit_destination;


};