#include <iostream>
#include <string>


int nfk = 1, kfk = 1, rkf = 1, comout = 1;

int com(int n, int k)
{
	for (int i = n; i>0; i--)
	{
		nfk = nfk*i;
	}

	for (int i = 1; i <= k; i++)
	{
		if (i % 2 == 0)
		{
			for (i = k; i >= 0; i--)
			{
				kfk = kfk*i;
			}
		}
	}

		for (int l = 1; l <= k; l++)
		{
			if (l % 2 == 0)
			{
				int j = n - l;
				if (j != 0)
				{
					for (l = j; l>0; l--)
					{
						rkf = rkf*l;
					}
				}

			}

		}
	comout = comout + (nfk / (kfk*rkf));
	return comout;
	}
	

int main()
{
	int n,k;
	std::cout << "enter the value";
	std::cin >> n>>k;
	com(n, k);
}