#ifndef BUKU_H
#define BUKU_H

class buku {
public:
	string judul_buku;
	buku(string pNama) : judul_buku(pNama) {
		cout << "Buku \"" << judul_buku << "\" \n";
	}
};


#endif