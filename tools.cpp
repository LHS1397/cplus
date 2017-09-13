#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter your choice:- ";
    cin>>ch;
    int n1, n2,hcf;

    switch(ch)
      {
        case '1': 
        cout << "Enter two numbers: ";
        cin >> n1 >> n2;
    
       while(n1 != n2)
      {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
       }

    cout << "HCF = " << n1;
    break;

    case '2': 
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    // Swapping variables n1 and n2 if n2 is greater than n1.
    if ( n2 > n1) {   
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }
    
    for (int i = 1; i <=  n2; ++i) {
        if (n1 % i == 0 && n2 % i ==0) {
            hcf = i;
        }
    }

    cout << "HCF = " << hcf;
    	    break;
        default : cout<<"Sorry Wrong Choice";
      }

  return 0;
}



#include <iostream>
#include <cstdio>
#include <cstring>
#include <string.h>

using namespace std;

int main()
{
    char num1[3], num2[3], num3[3];
    cout<<"Enter Three Values:- ";
    cin>>num1>>num2>>num3;
    for(int i=0;i<=2;i++)
    {
        if (num1[i]>=num2[i])
        {
            if (num2[i]>=num3[i])
            {
                cout<<num1[i];
            }
            
        }
        if (num1[i]>=num2[i] && num2[i]>=num3[i])
        {
          cout<<"num3"<<num3[i];
        }
        else if (num1[i]>=num2[i] && num2[i]<=num3[i])
        {
          cout<<"num2"<<num2[i];
        }
        else
        {
          cout<<"num1"<<num1[i];
        }
    }
    
    return 0;
}
