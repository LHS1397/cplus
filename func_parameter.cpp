#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

//funtion prototype

//function
void myFunction(int y)
{
	cout << "the first myFunction:  "<< y << endl ;
}

int main()
{
	//function calling;
	int x;
	cout <<  "Enter the number :" << " \n";
	cin >> x;
	myFunction(x);
	return 0;
}

