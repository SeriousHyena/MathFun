#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//declare local variables here
	double logResult = log2(512);
	double powResult = pow(2, 3);
	double sqrtResult = sqrt(25);
	double ceilResult = ceil(4.2);
	double floorResult = floor(4.2);

	cout << "The log2 of 512 is: " << logResult << endl;
	cout << "2^3 is: " << powResult << endl;
	cout << "sqrt of 25 is: " << sqrtResult << endl;
	cout << "The ceiling of 4.2 is: " << ceilResult << endl;
	cout << "The floor of 4.2 is: " << floorResult << endl;

	return 0;

}