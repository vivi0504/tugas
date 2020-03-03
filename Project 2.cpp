#include <iostream>

using namespace std;

int main()
{
	string nama = "vivi rizqi";
	
	int usia = 19;
	
	float berat = 45.59;
	
	char jenis = 'P';
	
	bool hasil = true;
	
	cout << "masukkan nama "; 
	cin >> nama;
	
	cout << "masukkan usia "; 
	cin >> usia;
	
	cout << "masukkan berat badan "; 
	cin >> berat;
	
	cout << "masukkan jenis kelamin "; 
	cin >> jenis;
	
	cout << "masukkan pernyataan "; 
	cin >> hasil;
	
	cout << "nama saya " << nama << endl;
	
	cout << "usia saya " << usia << " tahun " << endl;
	
	cout << "berat badan saya  " << berat << endl;
	
	cout << "jenis kelamin saya " << jenis << endl;
	
	cout << "pernyataan diatas merupakan  " << hasil << endl;
	
	system ("pause");
	return 0;
	
}
