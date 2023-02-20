#include <iostream>
using namespace std;

int main (){
	double celcius;
	float reamur,fahrenheit,kelvin;
	
	cout << "Celcius : ";
	cout <<endl;
	cin >> celcius;
	
	reamur = 0.8 * celcius;
	fahrenheit = (9.0/5.0 * celcius) + 32;
	kelvin = celcius + 273;
	
	cout << "Reamur : "<< reamur << endl;
	cout << "Fahrenheit : "<< fahrenheit << endl;
	cout << "Kelvin : "<< kelvin << endl;
	
	return 0;
	
}
