#include <iostream>
using namespace std;

int main(void)
{
	float PI = 3.14, R, L, K, V;
	cout << "masukkan harga R:" << endl;
	cin >> R;
	K = 2 * PI * R;
	L = 4 * PI * R * R * R / 4;
	cout << "keliling:" << K << endl;
	cout << "Luas:" << L << endl;
	cout << "Volume:" << V << endl;
}