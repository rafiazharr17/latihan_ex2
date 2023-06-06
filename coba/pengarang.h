#ifndef PENGARANG_H
#define PENGARANG_H



class pengarang {
public:
	string nama;
	vector<buku*> daftar_buku;

	pengarang(string pNama) :nama(pNama) {
		cout << "Anak \"" << nama << "\" \n";
	}
	~pengarang() {
		cout << "Anak \"" << nama << "\" \n";
	}
};
#endif // !Pengarang_H#pragma once
