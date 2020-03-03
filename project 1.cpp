#include <iostream>

using namespace std;

int main()
{
	string nama = "vivi rizqi";
	
	int usia = 19;
	
	float berat = 45.59;
	
	char jenis = 'P';
	
	bool status = true;
	
	cout << "nama saya " << nama << endl;
	
	cout << "usia saya " << usia << " tahun " << endl;
	
	cout << "berat badan saya  " << berat << endl;
	
	cout << "jenis kelamin saya " << jenis << endl;
	
	cout << "status pernikahan " << status << endl;
	
	if (status==true){
		cout<<"belum menikah";
	}
	else {
		cout<<"sudah menikah";
	}
	cout<<endl;	
	
	system ("pause");
	return 0;
	
}
