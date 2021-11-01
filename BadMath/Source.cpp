#include <iostream>
#include <iomanip>
using namespace std;

float Average(int int1, int int2, int int3)
{
	return (int1 + int2 + int3) / 3.0f; // The ints need to be summed insided parentheses or else only int 3 is divided
}

int main()
{
	int num1 =0 , num2 = 0, num3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> num1;
	cout << "Second number: "; cin >> num2;
	cout << "Third number: "; cin >> num3; // Cin was used on num2 twice instead of on num3

	float avg = Average(num1, num2, num3);

	cout << setprecision(1) << fixed << "The average is " << avg << endl;

	return 0;
}