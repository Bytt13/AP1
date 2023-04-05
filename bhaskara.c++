#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double A, B, C;
	double R1, R2;
	double d;
	
	cin >> A >> B >> C;

	d = (B*B) - (4*A*C);
	R1 = ((B * -1) + sqrt(d)) / (2 * A);
	R2 = ((B * -1) - sqrt(d)) / (2 * A);

	if(d <= 0 || A == 0)
	{
		cout << "Impossível calcular";
	}

	else
	{
		cout.precision(5);
		cout << fixed << "R1 = " << R1 << endl;
		cout << fixed << "R2 = " << R2 << endl;
	}

}