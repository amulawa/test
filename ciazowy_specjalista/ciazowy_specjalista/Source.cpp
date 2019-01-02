#include <iostream>
#include<cmath>
using namespace std;

dupa

int main()
{
	float n, x, wiek, czas, ile;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> wiek >> czas >> ile;
		x = (czas * 12 * ile - wiek * 12 - czas * 12) / (ile - 1);
		cout << round(abs(x))<<endl;
	}
}