#include <iostream>
using namespace std;

float luaspersegipanjang(float p, float l) {
	return p * l;
}

float luaslingkaran(float r) {
	return 3.14 * r * r;
}

float luassegitiga(float a, float t) {
	return 0, 5 * a * t;
}

int main() {
	float panjang, lebar, tinggi, jejari, alas;
	int pilihan;

 do
 {

        cout << "\n\n=================" << endl;
        cout << "=====M E N U======" << endl;
        cout << "=================" << endl;

        cout << "1. luas persegi panjang" << endl;
        cout << "2. luas segitiga" << endl;
        cout << "3. luas lingkaran" << endl;
        cout << "4 exit" << endl;

        cout << "masukan pilihan" << endl;
        cout << "\npilihan (1/2/3/4) : ";
        cin >> pilihan;