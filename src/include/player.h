#if ndef PLAYER_H
#define PLAYER_H
#include "gameMaster.h"
class Player{
	public:
	int id;
	char * name;
	int mark;
	Player(id,name,mark){
		this.id = id;
		this.name = name;
		this.mark = mark;
	}
	
};
	
#endif
