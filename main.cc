#include <iostream>

using namespace std;

int main()
{

	//FIRST TEST PROJECT: Just silly output
        int userNumber;
 	cout << "Input your favorite number" << endl;
	cin >> userNumber;

	const int CORRECT_NUMBER = 7; 
	if (userNumber == CORRECT_NUMBER)
	{
		cout << "That's my favorite number too!" << end;
	}
	else
	{
		cout << "Hey, not my favorite number but to each his own";
	}
		
	return 0;
}
