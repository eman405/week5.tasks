/*  Homework 3: Calculator
● Develop a function that allows user to do the following (menu options): ....
○ Add 2 numbers
○ Subtract 2 numbers
○ Multiply 2 numbers
○ Divide 2 numbers
○ End the program
● Consider the following functions:
○ Function to read 2 double numbers - by reference ....
○ 4 functions, one for each operation. Don’t divide by zero! ....
○ Function to display the menu of the 5 options - read number and return it. ....
■ User should enter number from 1 to 5. If not, display error message ....
■ If exit, end the program by printing how many operations were done */
#include <iostream>
using namespace std;
int display() {
	int option;
	static int loop = 0;
	if (loop == 0) {
		cout << "Enter number of operation you want to perform : \n";
		cout << "1- Summation \n";
		cout << "2- Subtraction \n";
		cout << "3- Multiplication \n";
		cout << "4- Division \n";
		cout << "5- End the program \n";
	} 
	else if (loop != 0) {
		cout << "\nEnter another operation : ";
	}
	cin >> option;
	loop++;
	if (option < 1 || option > 5) {
		cout << "ERROR...";
		return 0;
	}
	else {
		return option;
	}
}
double add(double &n1, double &n2) {
	double add = n1 + n2;
	return add;
}
double sub(double &n1, double &n2) {
	double sub = n1 - n2;
	return sub;
}
double mul(double &n1, double &n2) {
	double mul = n1 * n2;
	return mul;
}
double div(double &n1, double &n2) {
	double div = n1 / n2;
	return div;
}
int main()
{
	double n1, n2;
	cout << "Enter 2 numbers : ";
	cin >> n1 >> n2;
	int op = 0;
	for (int i = 0; i < 10000; i++) {
		int a1 = display();
		if (a1 == 1) {
			cout << "The summation : " << add(n1, n2);
		}
		else if (a1 == 2) {
			cout << "The subtraction : " << sub(n1, n2);
		}
		else if (a1 == 3) {
			cout << "The multiplication : " << mul(n1, n2);
		}
		else if (a1 == 4) {
			if (n2 == 0) {
				cout << "The division can't be done !\n";
			}
			else {
				cout << "The division : " << div(n1, n2);
			}
		}
		else if (a1 == 5) {
			cout << "The program is END \nThe number of operations performed : " << op;
			break;
		}
		op++;
	}
	cout << "\n\n\n";
}
