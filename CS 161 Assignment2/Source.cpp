#include <iostream>
#include <cmath>

using namespace std;

int main()

{

	//declare variables
	int Weight;
	int Height;
	long double BMI;

	//prompt user input for variable values
	//
	cout << "Welcome to the BMI calculator." << '\n';
	cout << "Enter your weight in pounds: " << '\n';
	cin >> Weight;


	cout << "Enter your height in inches: ";
	cin >> Height;


	BMI = (Weight * 703.00) / (Height*Height);


	cout.precision(1);
	cout << fixed;

	cout << "Your BMI is " << BMI << '\n';




	system("Pause");
}