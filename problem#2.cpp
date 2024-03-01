/* Homework 2: Reverse a string
● Develop a function that do reverse for the string. Function is:
● string reverse_str(const string & str);
○ Don’t try to change str content or you will get compilation error */
#include <iostream>
using namespace std;
string reverse_str(const string &str) {
	string str_ = str;
	for (int i = 0; i <= (int)str.size(); i++) {
		str_[i] = str[(int)str.size() - i];
		cout << str_[i];
	}
	return str_;
}
int main()
{
	string str;
	cout << "Enter any string value : ";
	cin >> str;
	reverse_str(str);
	cout << "\n\n\n";
}


