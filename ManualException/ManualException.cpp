#include <iostream>
#include <exception>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar di Prodi IT UMY" << endl;
		cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		cout << "pengecualian akan dieksekusi" << endl;
	}
	
}