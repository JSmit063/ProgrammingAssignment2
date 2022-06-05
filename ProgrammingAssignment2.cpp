// Programming Asignment 2
// By Justin Smith
// 6/5/22

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

	cout << "***********************************************************************************" << endl;
	cout << "*************************** Welcome to my Cheesy Program **************************" << endl;
	cout << "***********************************************************************************" << endl << endl;

	// Prompt the user to enter an integer amount of kg of cheese produced
	cout << "Please enter the total numbor of kilograms of cheese produced: ";
	cin >> cheeseProduced;

	// Find the total number of containers for the amount of cheese produced
	// Output to user the amount
	numContainers = cheeseProduced / CONTAINER_QUANTITY;
	cout << "The number of containers to hold the cheese is: " << fixed << setprecision(0) << numContainers << endl;

	// Need to use a string here for the cost of producing cheese amount inputed
	// Line 38 is casting numContainer to an int, adding the .5 to compensate for truncation
	// and then casting the variable to a string
	s1 = "The cost of producing " + to_string(static_cast<int>(numContainers + .5)) + " container(s) of cheese is: ";
	cout << setw(25) << left << s1 << setw(24) << right << '$' << setprecision(2) << static_cast<int>(numContainers + .5) * CONTAINER_COST << endl;

	// Line 44 is casting numContainer to an int, adding the .5 to compensate for truncation
	// and then casting the variable to a string
	s2 = "The profit from producing " + to_string(static_cast<int>(numContainers + .5)) + " container(s) do cheese is: ";
	cout << setw(25) << left << s2 << setw(20) << right << '$' << setprecision(2) << static_cast<int>(numContainers + .5) * CONTAINER_PROFIT << endl;

	system("pause"); // system pause to see results

	return 0;
}
