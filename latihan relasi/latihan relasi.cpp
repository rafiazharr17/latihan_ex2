#include <iostream>
#include <vector>
using namespace std;

class pengarang;
class penerbit {
public:
	string nama_penerbit;

	vector<pengarang*> daftar_pengarang;
	penerbit(string pNama) :nama_penerbit(pNama) {
		cout << "Penerbit \"" << nama_penerbit << "\" ada\n";
	}

	~penerbit() {
		cout << "Penerbit \"" << nama_penerbit << "\" tidak ada\n";
	}

	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

class pengarang {
public:
	string nama_pengarang;
	vector<penerbit*> daftar_penerbit;
	pengarang(string Nama) :nama_pengarang(Nama) {
		cout << "pengarang \"" << nama_pengarang << "\" ada\n";
	}

	~pengarang() {
		cout << "Penerbit \"" << nama_pengarang << "\" tidak ada\n";
	}

	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
};

void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}