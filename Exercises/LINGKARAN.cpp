#include <iostream>
using namespace std;

int main (){
	float r, luas;
	float phi = 3.14;
	
	cout <<"Masukkan jari - jari lingkaran : ";
	cin >> r;
	
	luas = phi*r*r;
	
	cout <<"Luas lingkaran : "<<luas;
	cout << endl;
	
	return 0;
}
