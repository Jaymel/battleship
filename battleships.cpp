#include "stdafx.h"
#include <iostream>
#include <string> 
using namespace std;

/*
Battleship - 4 Tiles - B
Cruiser - 3 Tiles - C
Destroyer - 2 Tiles - D
Submarine - 1 Tile - S
*/

int main()
{
	string input, divider = "-----------------------------------------";
	string win = "You have won!";
	string lose = "You have lost.";
	//Initialising
	int bxpos, bypos, cxpos, cypos, dxpos, dypos, sxpos, sypos; 
	char bxposc, byposc, cxposc, cyposc, dxposc, dyposc, sxposc, syposc;
	char y0[10]{ ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ',' ' }, y1[10]{ ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ',' ' }, y2[10]{ ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ',' ' }, y3[10]{ ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ',' ' }, y4[10]{ ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ',' ' }, y5[10]{ ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ',' ' }, y6[10]{ ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ',' ' }, y7[10]{ ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ',' ' }, y8[10]{ ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ',' ' }, y9[10]{ ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ',' ' };
	string battleship[4]{ " ", " ", " ", " " }, cruiser[3]{ " "," "," " }, destroyer[2]{ " "," " }, submarine[1]{ " " };
	cout << y0[1] << endl;
	char ship;
	string shipinput;
	int rotate = 0;
	int xinput = 0;
	int yinput = 0;
	//Game Begin
	cout << "Play Game or Read Instructions" << endl << divider << endl;
	//Instructions
	cout << "Welcome to Battleship!" << endl << "There are 4 types of ships: Battleship, Cruiser, Destroyer and Submarine." << endl << divider << endl << "How to play this game?" << endl;
	//GAME

	//Arrange
	cout << "Which ship would you like to arrange first? [B][C][D][S]" << endl;
	cin >> shipinput;
	if (shipinput == "b" || shipinput == "B" || shipinput == "c" || shipinput == "C" || shipinput == "d" || shipinput == "D" || shipinput == "s" || shipinput == "S") {
		if (shipinput == "b" || shipinput == "B") {
			ship = 'B';
		}
		if (shipinput == "c" || shipinput == "C") {
			ship = 'C';
		}
		if (shipinput == "d" || shipinput == "D") {
			ship = 'D';
		}
		if (shipinput == "s" || shipinput == "S") {
			ship = 'S';
		}
	}
	else {
		cout << "Invalid Ship Input!" << endl;
		return 0;
	}
	cout << "Which slot do you pick?" << endl;
	cin >> input;
	//Create finds
		size_t afind = input.find("A");
		size_t bfind = input.find("B");
		size_t cfind = input.find("C");
		size_t dfind = input.find("D");
		size_t efind = input.find("E");
		size_t ffind = input.find("F");
		size_t gfind = input.find("G");
		size_t hfind = input.find("H");
		size_t ifind = input.find("I");
		size_t jfind = input.find("J");
		size_t onefind = input.find("1");
		size_t twofind = input.find("2");
		size_t threefind = input.find("3");
		size_t fourfind = input.find("4");
		size_t fivefind = input.find("5");
		size_t sixfind = input.find("6");
		size_t sevenfind = input.find("7");
		size_t eightfind = input.find("8");
		size_t ninefind = input.find("9");
		size_t tenfind = input.find("10");
	//x
	if (afind != string::npos) {
		xinput = 0;
	}
	if (bfind != string::npos) {
		xinput = 1;
	}
	if (cfind != string::npos) {
		xinput = 2;
	}
	if (dfind != string::npos) {
		xinput = 3;
	}
	if (efind != string::npos) {
		xinput = 4;
	}
	if (ffind != string::npos) {
		xinput = 5;
	}
	if (gfind != string::npos) {
		xinput = 6;
	}
	if (hfind != string::npos) {
		xinput = 7;
	}
	if (ifind != string::npos) {
		xinput = 8;
	}
	if (jfind != string::npos) {
		xinput = 9;
	}
	//y
	if (onefind != string::npos) {
		yinput = 0;
	}
	if (twofind != string::npos) {
		yinput = 1;
	}
	if (threefind != string::npos) {
		yinput = 2;
	}
	if (fourfind != string::npos) {
		yinput = 3;
	}
	if (fivefind != string::npos) {
		yinput = 4;
	}
	if (sixfind != string::npos) {
		yinput = 5;
	}
	if (sevenfind != string::npos) {
		yinput = 6;
	}
	if (eightfind != string::npos) {
		yinput = 7;
	}
	if (ninefind != string::npos) {
		yinput = 8;
	}
	if (tenfind != string::npos) {
		yinput = 9;
	}
	//safety check
	if (xinput < 0) {
		xinput = 0;
	}
	if (xinput > 9) {
		xinput = 9;
	}
	if (yinput < 0) {
		yinput = 0;
	}
	if (yinput > 9) {
		yinput = 9;
	}
	//position 
	//cout << "x" << xinput << "y" << yinput << endl;
	if (ship == 'B') {
		if ((rotate == 0 && yinput > 2) || (rotate == 1 && xinput < 7)) {
			bxpos = xinput;
			bypos = yinput + 1;
			if (bxpos == 0) {
				bxposc = 'A';
			}
			else if (bxpos == 1) {
				bxposc = 'B';
			}
			else if (bxpos == 2) {
				bxposc = 'C';
			}
			else if (bxpos == 3) {
				bxposc = 'D';
			}
			else if (bxpos == 4) {
				bxposc = 'E';
			}
			else if (bxpos == 5) {
				bxposc = 'F';
			}
			else if (bxpos == 6) {
				bxposc = 'G';
			}
			else if (bxpos == 7) {
				bxposc = 'H';
			}
			else if (bxpos == 8) {
				bxposc = 'I';
			}
			else if (bxpos == 9) {
				bxposc = 'J';
			}
			else {
				cout << "Error in rotate 0 xposc assigning." << endl;
				return 0;
			}
			if (rotate == 0) {
				battleship[0] = bxposc + bypos;
				//string test = "a" + " b";
				//cout << test << endl;
				battleship[1] = bxposc + bypos--;
				battleship[2] = bxposc + bypos - 2;
				battleship[3] = bxposc + bypos - 3;
			}
			if (rotate == 1) {
				battleship[0] = bxposc + bypos;
				battleship[1] = (static_cast<char>(bxposc + 1)) + bypos;
				battleship[2] = (static_cast<char>(bxposc + 2)) + bypos;
				battleship[3] = (static_cast<char>(bxposc + 3)) + bypos;
				cout << "All values set." << endl;
			}
		}
		else {
			cout << "Not enough space!" << endl;
			return 0;
		}
	}
	if (ship == 'C') {
		if ((rotate == 0 && yinput > 1) || (rotate == 1 && xinput < 8)) {
			cxpos = xinput;
			cypos = yinput;
		}
		else {
			cout << "Not enough space!" << endl;
			return 0;
		}
	}
	if (ship == 'D') {
		if ((rotate == 0 && yinput > 0) || (rotate == 1 && xinput < 9)) {
			dxpos = xinput;
			dypos = yinput;
		}
		else {
			cout << "Not enough space!" << endl;
			return 0;
		}
	}
	if (ship == 'S') {
		sxpos = xinput;
		sypos = yinput;
	}
	//Placing

	//Shoot
}

