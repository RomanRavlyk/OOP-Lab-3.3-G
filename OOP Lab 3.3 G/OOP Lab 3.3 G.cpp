#include "Calculator.h"
#include <iostream>

using namespace std;

int main() {

	Fraction fraction;

	Calculator calculator;
	cin >> calculator;
	cout << calculator;

	Calculator calculator1;
	cin >> calculator1;
	cout << calculator1;


	Calculator fraction2 = calculator + calculator1;

	cout << fraction2;

	fraction2 = calculator - calculator1;
	cout << fraction2;

	fraction2 = calculator * calculator1;
	cout << fraction2;


	cout << "> ";
	if (calculator > calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "< ";
	if (calculator < calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "== ";
	if (calculator == calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << ">= ";
	if (calculator != calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "<= ";
	if (calculator >= calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "!= ";
	if (calculator <= calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "ObjectCount: " << Object::Count() << endl;
	cout << "LiquidCount: " << Fraction::Count() << endl;
	cout << "SolutionCount: " << Calculator::Count() << endl;


	return 0;
}