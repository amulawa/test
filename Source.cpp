#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

double baseArea(double pole, vector<double> &x,vector<double> &y)
{
	for (unsigned int i = 0; i + 1 < x.size(); i ++)
	{
		pole += x[i] * y[i+1] - x[i + 1] * y[i];
	}
	pole = abs(pole);
	return pole;
}
void wpisywanie(vector<double>&tabX,vector<double>&tabY)
{
	double x, y;
	cin >> x >> y;
	tabX.push_back(x);
	tabY.push_back(y);
	do
	{
		cin >> x >> y;
		tabX.push_back(x);
		tabY.push_back(y);
	} while (x != tabX[0] || y != tabY[0]);
}

int main()
{
	unsigned int liczba;
	cin >> liczba;
	for (unsigned int i = 0; i < liczba; i++)
	{
		vector<double> tabX1, tabY1, tabX2, tabY2;
		wpisywanie(tabX1, tabY1);
		wpisywanie(tabX2, tabY2);
		
		double pole1 = 0, pole2 = 0;

		pole1 = baseArea(pole1, tabX1, tabY1);
		pole2 = baseArea(pole2, tabX2, tabY2);
		double odp;
		if (pole2 > pole1)
		{
			pole2 = pole2 - pole1;
			odp = pole1 * 5 + pole2 * 3;
		}
		else
		{
			pole1 = pole1 - pole2;
			odp = pole2 * 5 + pole1 * 3;
		}
		cout.setf(ios::fixed);
		cout.precision(0);
		cout << odp << endl;
	}
	return 0;
}