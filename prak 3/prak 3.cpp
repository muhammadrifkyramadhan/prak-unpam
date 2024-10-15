#include<iostream>
using namespace std;

int main(void)
{
	int NilaiUjian;
	cout << "Masukkan Nilai:";
	cin >> NilaiUjian;
	if (NilaiUjian >= 60)
		cout << "Lulus" << endl;
	else
		cout << "Tidak Lulus" << endl;
}