/* Homework 4: Is Palindrome Array
● Read N, then N integers for an Array. Call a function with the array to check if 
the array is palindrome or note
○ We already coded it before
○ Just copy code and rearrange to call function with array */
#include <iostream>
using namespace std;
bool palindrome(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		if (arr[i] != arr[N - 1 - i]) {
			return false;
		}
	}
	return true;
}
int main()
{
	int N;
	cout << "Enter any number : ";
	cin >> N;
	cout << "Enter " << N << " numbers : ";
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	bool res = palindrome(arr,N);
	res ? cout << "The array is Palindrome\n\n\n" : cout << "The array isn't Palindrome\n\n\n";
}
