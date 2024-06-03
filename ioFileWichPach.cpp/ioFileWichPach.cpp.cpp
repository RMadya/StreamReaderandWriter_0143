#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan nama file : ";
	cin >> NamaFile;

	//mambuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	// selesai dalam menulis sekarang tutup filenbya
	outfile.close();

	//Membuka file dalam mode membaca
	ifstream infile;

	//memunjuk ke sebuah file
	infile.open(NamaFile + ".txt", ios::in);

	cout << endl << ">= membuka dan membaca file" << endl;

	//jika file ada maka 
	if (infile.is_open()) {
		//melakukan perulangan setiap baris
		while (getline(infile, baris)) {
			//dan tampilkan disini
			cout << baris << '\n';
		}
		//tutup file tsb setelah selesai
		infile.close();
	}
	//jika tidak ditemukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;
}