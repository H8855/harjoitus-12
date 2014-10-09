#include <iostream>
using namespace std;

int main()
{
	int luku, rivinro = 1, i;
	cout << "Anna kokonaisluku 1-9: ";
	cin >> luku;
	//do
	while (rivinro < luku + 1)
	{
		for (i = 0; i < rivinro; i++)
			cout << rivinro;
		cout << "\n";
		rivinro++;
	} 

	return 0;
}