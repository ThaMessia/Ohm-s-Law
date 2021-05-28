#include <iostream>

using namespace std;

int main() {
	double I;
	double V;
	double R;
	cout << "Ohm's Law" << endl;
	cout << "Insert Volt: " << endl;
	cin >> V;
	cout << "Insert Resistence: " << endl;
	cin >> R;
	
	I = V/R;
	cout << "Intensity = " << I << " Ampere" << endl;
	
	return 0;
}

