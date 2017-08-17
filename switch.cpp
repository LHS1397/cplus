#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  char ch;
  float l,b,area,perimeter;
  cout<<"Options are:- ";
  cout<<"\n 1.area";
  cout<<"\n 2.perimeter"<<endl;
  cout<<"Enter your choice:- ";
  cin>>ch;
  if(ch=='1' || ch=='2')
    {
      cout<<"Enter length and breadth of rectangle:- "<<endl;
      cin>>l>>b;
    }
    switch(ch)
      {
        case '1': area=l*b;
    	  cout<<"Area of rectangle is:- "<<area;
    	    break;
        case '2': perimeter=2*(l+b);
    	  cout<<"Perimter of rectangle is:- "<<perimeter;
    	    break;
        default : cout<<"Sorry Wrong Choice";
      }

  return 0;
}