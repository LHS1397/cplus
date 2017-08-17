#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

class classs
{
public:
	//function inside class
	void fun()
	{
		cout << "creating an object"<< endl;
	}
};

int main()
{
	classs objecttocreate;
	objecttocreate.fun();
	return 0;
}