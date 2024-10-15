#include<iostream>
using namespace std;

main(void) {


	int total_belanja;
	cout << "Masukkan Total Belanja=";
	cin >> total_belanja;
	if (total_belanja >= 50000)


		cout << "Selamat Anda mendapatkan diskon Rp.5000" << endl;
	total_belanja = total_belanja - 5000;

	cout << "total belanja anda adalah=" << total_belanja << endl;
	cout << "Terimahkasih telah berbelanja di toko kami" << endl;
	return 0;
}