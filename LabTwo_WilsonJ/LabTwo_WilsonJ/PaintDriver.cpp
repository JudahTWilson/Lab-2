/* Painting Class Algorithm 

File Name: PaintDriver.cpp
This program recieves the dimensions of a room 
and calculates the needed amount of paint to be 
able to paint the rooms.

Created by: Judah T. Wilson
Created Date: 09/08/2024
Modified by: 09/16/2024
*/
#include <iostream>
#include "Room.h"

using namespace std; 

int main()
	{
	Room roomone;
	do {

		if (roomone.setLength() != -1 && roomone.setHeight() != -1 && roomone.setWidth() != -1) { // This will calculate, pause, clear, and print the results

			roomone.calcVolume();
			roomone.calcPaintedArea();
			roomone.printResults();

			system("pause");
		}

	} while (roomone.getLength() != -1 && roomone.getWidth() != -1 && roomone.getHeight() != -1); // The will exit when the user puts in a -1 for the function 

	system("pause");
	return 0;



	}