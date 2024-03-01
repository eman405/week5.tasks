/* Homework 1: Max of 6 numbers
● Write a function that reads 6 numbers and compute their maximum. Create 
the following functions
○ max(int a, int b, int c)  ..
○ max(int a, int b, int c, int d)  ..
○ max(int a, int b, int c, int d, int e)  ..
○ max(int a, int b, int c, int d, int e, int f)  ..
● How can 
○ max(int a, int b, int c, int d) utilize max(int a, int b, int c) ? and so on
*/
#include <iostream>
using namespace std;
/*int max(int n1, int n2, int n3);
int max(int n1, int n2, int n3, int n4);
int max(int n1, int n2, int n3, int n4, int n5);
int max(int n1, int n2, int n3, int n4, int n5, int n6);*/
int max(int n1, int n2, int n3) {
	int maxi_1;
	if (n1 > n2) {
		if (n1 > n3) {
			maxi_1 = n1;
			return maxi_1;
		}
		else {
			maxi_1 = n3;
			return maxi_1;
		}
	}
	else { //n2>n1
		if (n2 > n3) {
			maxi_1 = n2;
			return maxi_1;
		}
		else { //n3>n2
			maxi_1 = n3;
			return maxi_1;
		}
	}
}
int max(int n1, int n2, int n3, int n4) {
	int maxi_1 = max(n1, n2, n3);
	int maxi_2;
	if (maxi_1 > n4) {
		maxi_2 = maxi_1;
		return maxi_2;
	}
	else { // n4 > maxi_1
		maxi_2 = n4;
		return maxi_2;
	}
}
int max(int n1, int n2, int n3, int n4, int n5) {
	int maxi_2 = max(n1, n2, n3, n4);
	int maxi_3;
	if (maxi_2 > n5) {
		maxi_3 = maxi_2;
		return maxi_3;
	}
	else { // n5 > maxi_2
		maxi_3 = n5;
		return maxi_3;
	}
}
int max(int n1, int n2, int n3, int n4, int n5, int n6) {
	int maxi_3 = max(n1, n2, n3, n4, n5);
	int maxi_4;
	if (maxi_3 > n6) {
		maxi_4 = maxi_3;
		return maxi_4;
	}
	else { // n6 > maxi_3
		maxi_4 = n6;
		return maxi_4;
	}
}
int main()
{
	int n1, n2, n3, n4, n5, n6;
	cout << "Enter 6 numbers : ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
	int maximum_number = max(n1, n2, n3, n4, n5, n6);
	cout << "The maximum number is : " << maximum_number << "\n\n\n";
}







