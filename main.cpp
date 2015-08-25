#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>

#define filler '\220';
#define border '\333';
#define cover '\376';

using namespace std;

int random(int i, int b);
void reveal(int x);
void replay();

int main(void)
{
	int b;
	int board[b][b];             //0 - 8 = # of mines, 9 is mine
	int revealed[b][b];  //1 is revealed
	int i = 0;                   
	int j = 0;
	int x = 0;                   
	int y = 0;
	int z;                               //number of mines
	int q;
	int t = 0;                           //game over input
	int dead = 0;

	do
	{
		cout << "Enter number of squares per side (2 - 10)" << endl;
		cin >> b;
	}while(b < 1 && b >= 10);

	do
	{
		cout << "How many mines? (1 - " << ((b*b)-1) << ")" << endl;
		cin >> z;
	}while(z <= 0 && z >= ((b*b)-1));
