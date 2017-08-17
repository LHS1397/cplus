#include <iostream>
#include <cstdio>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    double y = 0.00;
    int x = 0;

    cout << "Enter the nubers";
    cin >> x >> y;

    if (x % 5 == 0 && x < y)
    {
      y = y - (x + 0.50);
      cout<<fixed<<setprecision(2)<<y<<"\n";
    }
    else
    {
      cout<<fixed<<setprecision(2)<<y<<"\n";
    }
    return 0;
}
