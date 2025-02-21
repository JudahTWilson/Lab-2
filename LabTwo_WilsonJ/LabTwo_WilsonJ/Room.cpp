#include <iostream>
#include "Room.h"

// Notes - Make sure to put Room:: before each function


Room::Room() // Room variables
{
	float length = 0;
	float width = 0;
	float height = 0;
	float area = 0;
	float volume = 0;
	float gallons = 0;

}

void Room::calcVolume() 
{
	volume = length * height * width; // This is the given formula to calculate volume of room
}

void Room::calcPaintedArea() // This function will calculate the total surface that needs to be painted
{
	// Variables
	float wallone;
	float walltwo;
	float totalArea;
	float tempgallon;

	wallone = length * height * 2;
	walltwo = width * height * 2;

	totalArea = wallone + walltwo;
	area = totalArea;

	tempgallon = ceil(area / 400);
	gallons = tempgallon;


}

void Room::printResults() const // This will print the results
{
	std::cout << std::endl << "*********************************************************************************" << std::endl;
	std::cout << std::endl << "Length: " << length << " sq. feet" << std::endl << "Height: " << height << " sq. feet" << std::endl;
	std::cout << "Width:  " << width << " sq. feet" << std::endl << "Volume: " << volume << " cu. feet" << std::endl << std::endl;
	std::cout << "*********************************************************************************" << std::endl << std::endl; 
	std::cout << "Gallons of paint necessary: " << gallons << std::endl << std::endl
		;
	std::cout << "*********************************************************************************" << std::endl; 
	std::cout << "Please enter in -1 when you are finished calculating the room" << std::endl << std::endl;
}

float Room::setLength() // This will ask the user to input the length of the room 
	{
	// x will be the temporary variable 
	float x;

	std::cout << "Please enter the room's length in feet:  ";
	std::cin >> x;

	while (!(x >= -1) || x == 0 || x < -1) { // Checks for errors

		std::cout << "You must enter a positive number. Please try again. (-1 to exit)" << std::endl;  // This will ask the user to input the right information for length
		std::cin.clear();    

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // This will clear the leftover characters

		std::cin >> x;

	}

	length = x;
	return length;

}

float Room::setHeight() // This will ask the user to input the height of the room 
	{
	// x will again be the temporary variable 
	float x;

	std::cout << "Please enter the room's height in feet:  ";
	std::cin >> x;

	while (!(x >= -1) || x == 0 || x < -1) { // Checks for errors

		std::cout << "You must enter a positive number. Please try again. (-1 to exit)" << std::endl;  // This will ask the user to input the right information for height 
		std::cin.clear();

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // This will clear the eftover information 

		std::cin >> x;

	}

	height = x;
	return height;
}

float Room::setWidth() // This will ask the user to input the width of the room 
{
	// x will represent the temporary variable for the last time 
	float x;

	std::cout << "Please enter the room's width in feet:  ";
	std::cin >> x;

	while (!(x >= -1) || x == 0 || x < -1)  // Checks for errors 
	{
		std::cout << "You must enter a positive number. Please try again. (-1 to exit)" << std::endl;  // This will ask the user to input the right information for width  
		std::cin.clear();  

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clears any and all leftover characters

		std::cin >> x;

	}

	width = x;
	return width;
}

// These will return the length, height, and width of the inputs 
float Room::getLength() const 
{ 
	return length;
}

float Room::getHeight() const 
{ 
	return height;
}

float Room::getWidth() const 
{
	return width;
}