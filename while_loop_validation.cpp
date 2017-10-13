#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;


int main()
{
	// input validation with a while loop
	int x;
	
	cout << "Enter an integer greater than 0: ";
	cin >> x;
	
	while (x <= 0)
	{
		cout << "Invalid Entry!!!!" << "\n";
		cout << "Enter an integer greater than 0: ";
		cin >> x;
		cin.clear();
		cin.ignore(1000, '\n');
	}

}
