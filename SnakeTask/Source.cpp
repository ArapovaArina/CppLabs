﻿#include<iostream>
#include<conio.h> // to track keyboard input without closing
#include <windows.h>
#include <fstream>

using namespace std;

bool gameOver;
const int height = 20;
const int width = 20;// ширина !!
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail = 0;
enum motion {STOP = 0, LEFT, RIGHT, UP, DOWN};
motion whereINeedToGo;




void Setup() {
	gameOver = false;
	whereINeedToGo = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % height;
	fruitY = rand() % width;
	score = 0;
	char key = 'y';

}

void Draw() {
	system("cls"); //terminal cleaning, but for LINUX : system("clear");
	cout << "SCORE : " << score << endl;

	for (int i = 0; i < width + 2; i++)
		cout << "*";
	cout << endl;


	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0)
				cout << "*";
			if (i == y && j == x) // create our snake
				cout << "$";
			else if 
				(i == fruitY && j == fruitX) // create our fruit
				cout << "o";
			else
		       {
					bool print = false;
					 for (int k = 0; k < nTail; k++)
				{
					if (tailX[k] == j && tailY[k] == i)
				{
					cout << "o";
					print = true;
				}
				}
				if (!print)
				 cout << " ";
				}
				if (j == width - 1)
					cout << "*";
						}
						cout << endl;
					}
				
					for (int i = 0; i < width + 2; i++)
						cout << "*";
					cout << endl;
	Sleep(150);


}

void Input() {
	if (_kbhit()) //it works if something was pressed :)
			{
				switch (_getch()) // read what was pressed
				{
				case 'a':
					whereINeedToGo = LEFT;
					break;
				case 'd':
					whereINeedToGo = RIGHT;
					break;
				case 'w':
					whereINeedToGo = UP;
					break;
				case 's':
					whereINeedToGo = DOWN;
					break;
				case 'x':
					gameOver = true;
					break;
				}
			}

}

void Logic() {

		int prevX = tailX[0];
		int prevY = tailY[0];
		int prev2X, prev2Y;
		tailX[0] = x;
		tailY[0] = y;
		for (int i = 1; i < nTail; i++)
		{
			prev2X = tailX[i];
			prev2Y = tailY[i];
			tailX[i] = prevX;
			tailY[i] = prevY;
			prevX = prev2X;
			prevY = prev2Y;
		}


	switch (whereINeedToGo)
			{
			case LEFT:
				x--;
				break;
			case RIGHT:
				x++;
				break;
			case UP:
				y--;
				break;
			case DOWN:
				y++;
				break;
			default:
				break;
			}
	if (x > width || x < 0 || y > height || y < 0)
		gameOver = true;
	if (x == fruitX && y == fruitY) {
		score += 100;
		fruitY = rand() % height;
		fruitX = rand() % width; 
		nTail++;

	}

}

void Results() {
	char *name = new char[255];
	cout << " enter your name ";
	cin >> name;

	ofstream writer;
	writer.open("Results.txt", ios::out | ios::app);
	writer << name << "    -   " << score << endl;
	writer.close();
}

int main() {

	fstream writer;
	writer.open("Results.txt", ios::out | ios::trunc);
	writer.close();
	 
	cout << "                    Shhhh! Hello, my name is Snake! " << endl << "                      Let`s play with me!" << endl << endl;
	cout << "If you press : " << endl << " W - I`ll go UP" << endl << " S - I`ll go DOWN" << endl << " A - I`ll go LEFT" << endl << " D - I`ll go RIGHT" << endl << endl << endl;
	cout << "So if you are ready to start press something ... " << endl << endl << "Good luck ! SHHHH!!!!!" << endl;
	char buf ;
	_getch();
	
    Setup();


	char key = 'y';
	
	while (key != 'n')
	{

       while (!gameOver) {

			Draw();
			Input();
			Logic();

		}

	   Results();
	 
	   cout << "Again ? Press 'n' if uou don`t want to play ";
	   key = _getch();

	   Setup();
	
		 

	}

	





	return 0;
}
