#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

//funtion prototype

//function
void myFunction(int x, int y)
{
	cout << "the first myFunction:  "<< x << " "<< y << endl ;
}

int main()
{
	//function calling;
	int x,y;
	cout <<  "Enter the number :" << " \n";
	cin >> x >> y;
	myFunction(x, y);
	return 0;
}

