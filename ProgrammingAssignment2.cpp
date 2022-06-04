// Programming Asignment 2
// By Justin Smith

#include <iostream> // Need for use of I/O
#include <iomanip> // Need for format manipulators
#include <string> // Need to be able to using string variables

using namespace std;

// Named constants for this program
const double CONTAINER_QUANTITY = 2.76;
const double CONTAINER_COST = 4.12;
const double CONTAINER_PROFIT = 1.45;

int main()
{
	// Declare variables
	int cheeseProduced;
	double numContainers;
	string s1;
	string s2;

	cout << "**********************************************************************************" << endl;
	cout << "************************* Welcome to my Cheese Calculator ************************" << endl;
	cout << "**********************************************************************************" << endl << endl;

	// Prompt the user to enter an integer amount of kg of cheese produced
	cout << "Please enter the total numbor of kilograms of cheese produced: ";
	cin >> cheeseProduced; // Assignment to the cheeseProduced variable

	// Find the total number of containers for the amount of cheese produced
	// Output to user the amount
	numContainers = cheeseProduced / CONTAINER_QUANTITY;
	cout << "The number of containers to hold the cheese is: " << numContainers << endl;

	// Need to use a string here for the cost of producing cheese amount inputed
	//
	s1 = "The cost of producing " + to_string(numContainers) + " container(s) of cheese is: ";
	cout << setw(25) << left << s1 << setw(25) << right << '$' << numContainers * CONTAINER_COST << endl;

	s2 = "The profit from producing " + to_string(numContainers) + " container(s) do cheese is: ";
	cout << setw(25) << left << s2 << setw(25) << right << '$' << numContainers * CONTAINER_PROFIT << endl;

	system("pause");

	return 0;
}
