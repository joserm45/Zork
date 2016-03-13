#include <stdio.h>
#include <stdlib.h>
#include "Rooms.h"
#include "Exits.h"
#include "Player.h"
#include "World.h"

world::world(){

	rooms = new Room[12];
	player = new player[1];
	exits = new exit[];
}

