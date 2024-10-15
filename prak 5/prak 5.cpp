#include<iostream>
using namespace std;

main(void)
{
	int x, y, maks;
	cout << "Masukkan sebuah Bilangan:";
	cin >> x;
	cout << "Masukkan lagi sebuah bilangan:";
	cin >> y;
	maks = x > y ? x : y;
	cout << "Terbesar adalah:" << maks << endl;
}