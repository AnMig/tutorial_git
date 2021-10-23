#include <iostream>
using namespace std;

// Nuevo comentario
int main ()
{
	int divisor, dividend, quotient, remaider;
	
	cout << "Enter dividend: ";
	cin >> dividend;

	cout << "Enter divisor: ";
	cin >> divisor;

	quotient = dividend / divisor;
	remainder = dividend % divisor;

	cout << "Quotient = " << quotient << endl;
	cout << "Remaider = " << remainder;

	return 0;
}

