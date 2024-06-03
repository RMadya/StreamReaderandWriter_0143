#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string baris; //membuka file dalam mode menulis
	ofstream outfile; //menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\q' untuk keluar" << endl;

	//Unlimited loop untuk menulis
	while (true) {
		cout << "- "; 
		getline(cin, baris); //loop akan berhenti jika anda memasukkan karakter q
		
}