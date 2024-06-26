#include <iostream>
#include <exception>
//untuk objek exception yang akan digunakan
#include <array>
//untuk objek array yang akan digunakan
using namespace std;

int main() {
	cout << "Awal Program" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 1,2,3 };
		//pesan array integer 3 element
		cout << data.at(5) << endl;
		//memanggil array element ke 5 {menyesuaikan jumlah array yang ada tdk bsa lebih dari jumlah yg ada}
	}
	catch (exception& e) {
		//penangkap menggunakan objek exception
		cout << e.what() << endl;
		/*akan dieksekusi karna array data hanya memiliki 3 elemen*/
	}
	cout << "Baris Program Yang terakhir" << endl;
	/*penannda 2: bahwa program berjalan tanpa berhenti*/
}