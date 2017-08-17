#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

class classs
{

public:

	//function inside class
	void setName(string x)
	{
		her = x;
	}
	string getName()
	{
		return her;
	}
	void fun()
	{
		cout << "creating an object"<< endl;
	}

//access specifier -- Privtae
private:
  string her;

};

int main()
{
	//object for calling a function
	classs objecttocreate;
	objecttocreate.fun();
	
    classs objecther;
    objecther.setName("Harleen");
    cout << objecther.getName();
	return 0;

}