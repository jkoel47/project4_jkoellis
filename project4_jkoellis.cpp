// project4_jkoellis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int a;
	int sum;
	// I recommend writing your factorial code here
	cout << "Please enter a positive number: ";
	cin >> a;
	if (a < 0) {
		do {
			cout << "Please enter a POSITIVE number this time: ";
			cin >> a;
		} while (a < 0);
	}
	sum = a;
	cout << a << "!= " << a;
	while (a > 0) {
		a = a - 1;
		if (a > 0) {
			sum = a * sum;
			std::cout << " * " << a;
		}
	}
	cout << "= " << sum << endl;
}
	

void arithmetic() {
	// I recommend writing your arithmetic series code here 
	int d;
	int s;
	int n;
	int total;
	cout << "Enter the diffrence amount: ";
	cin >> d;
	cout << "Enter starting number: ";
	cin >> s;
	cout << "Enter the number of elements in series: ";
	cin >> n;
	cout << s;
	total = s;
	do {
		s = s + d;
		cout << " + " << s;
		total = total + s;
		n = n - 1;
	} while (n > 1);
	cout << " = " << total << endl;
}
void geometric() {
	// I recommend writing your geometric series code here
	int r;
	int m;
	int e;
	int total;
	cout << "Enter a number to start at: ";
	cin >> r;
	cout << "Enter a number to multiply by each time: ";
	cin >> m;
	cout << "Enter the number of elements in the series: ";
	cin >> e;
	cout << r;
	total = r;
	do {
		r = r * m;
		cout << " + " << r;
		total = total + r;
		e = e - 1;
	} while (e > 1);
	cout << " = " << total << endl;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}