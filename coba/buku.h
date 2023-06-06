#ifndef BUKU_H
#define BUKU_H


#include "pengarang.h";

class buku {
public:
	string nama;
	vector <pengarang*> daftar_pengarang;

	buku(string pPengarang) :nama(pPengarang) {
		cout << "buku \"" << nama << "\" \n";
	}
	~buku() {
		cout << "buku \"" << nama << "\" \n";
	}
	void tambahPengarang(pengarang*);
	void cetakPengarang();
};
void buku::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}
void buku::cetakPengarang() {
	cout << "Daftar Anak dari Ibu \"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
};

#endif // !BUKU_H#pragma once
