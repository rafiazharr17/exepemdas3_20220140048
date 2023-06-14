#ifndef KARANGAN_H
#define KARANGAN_H
#include "buku.h";

class karangan {
public:
	string nama_karangan;
	vector<buku*> daftar_buku;

	karangan(string pNama) :nama_karangan(pNama) {
		cout << "Karangan \"" << nama_karangan << "\"  \n";
	}


	void tambahBuku(buku*);
	void cetakBuku();
};

void karangan::tambahBuku(buku* pBuku) {
	daftar_buku.push_back(pBuku);
}

void karangan::cetakBuku() {
	cout << "\nDaftar Buku yang dikarang \"" << this->nama_karangan << "\":\n";
	for (auto& a : daftar_buku) {
		cout << a->judul_buku << "\n";
	}
	cout << endl;
}

#endif
