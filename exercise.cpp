#include <iostream>
using namespace std;



int main()
{
	int x,formula = 0;
	bool positive = false;

	cout << "What would the value be in the expression\n (x * x - ( x - 2))?\n x : ";
	cin >> x;

	formula = (x * x) - x - 2;

	if (formula < 0) {
		positive = false;
		cout << "\nPlease note for the value of x : " << x << "\nThis formula equals a neagtive value";
	}
	else {

		positive = true;
		cout << "\nPlease note for the value of x : " << x << "\nThis formula equals a postive value";

	}
	

}
