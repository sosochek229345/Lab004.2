#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(3) << "x" << " |"
		<< setw(4) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	A = abs(4 * x - 1);

	while (x <= xk)
	{ 
		if (x < 0)
			B = pow(x, 7) - 2 * x;
		else
			if (x >= 3)
				B = pow(x, 4) + exp(pow(x, 2) + 3);
			else
				B = atan((exp(x) + 1) / 8);
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
