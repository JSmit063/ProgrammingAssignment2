// Programming Asignment 2
// By Justin Smith

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const double CONTAINER_QUANTITY = 2.76;
const double CONTAINER_COST = 4.12;
const double CONTAINER_PROFIT = 1.45;

int main()
{
	int cheeseProduced;
	double numContainers;
	string s1;

	cout << "*************************************************************" << endl;
	cout << "***************Welcome to my Cheese Calculator***************" << endl;
	cout << "*************************************************************" << endl;

	cout << "Please enter the total numbor of kilograms of cheese produced: ";
	cin >> cheeseProduced;

	numContainers = cheeseProduced / CONTAINER_QUANTITY;

	cout << "The number of containers to hold the cheese is: " << numContainers << endl;

	string s1 = "The cost of producing " + to_string(numContainers) + " container(s) of cheese is: ";
	cout << setw(5) << left << s1 << setw(5) << right << '$' << numContainers * CONTAINER_COST << endl;


	return 0;
}
