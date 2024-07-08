#include <iostream>
using namespace std;

class MasukUniversitas {
private:
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
	
	MasukUniversitas(int pUangPendaftaran) :
		uangPendaftaran(pUangPendaftaran)
	{
		cout << "Masukkan uang pendaftaran" << uangPendaftaran << "\n" << endl;
	}
	MasukUniversitas(int pUangSemesterPertama) :
		uangSemesterPertama(pUangSemesterPertama)
	{
		cout << "Masukkan uang semester pertama" << uangSemesterPertama << "\n" << endl;
	}
	MasukUniversitas(int pUangBangunan) :
		uangBangunan(pUangBangunan)
	{
		cout << "Masukkan uang bangunan" << uangBangunan << "\n" << endl;
	}
	MasukUniversitas(int pTotalBiaya) :
		totalBiaya(pTotalBiaya)
	{
		cout << "Total Biaya" << totalBiaya << "\n" << endl;
	}

public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk() {
		cout << "Pilih Jalur Masuk: ";
		cin >> SNBT;
		cout << "Pilih Jalur Masuk: ";
		cin >> SNBP;
		cout << "Keluar";
		cin >> Keluar;
	}

	void setUangPendaftaran(int pUangPendaftaran) {
		this->uangPendaftaran = 100000;
	}
	void setUangSemesterPertama(int pUangSemesterPertama) {
		this->uangSemesterPertama = 30000000;
	}
	void setUangBangunan(int pUangBangunan) {
		this->uangSemesterPertama = 15000000;
	}
	void setTotalBiaya(int pTotalBiaya) {
		this->uangSemesterPertama = 45100000;
	}

	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};

class SNBT : public MasukUniversitas {
public:
	SNBT(int pUangPendaftaran) :
		MasukUniversitas(pUangPendaftaran)
	{
		cout << "biaya pendaftaran SNBT\n" << endl;
	} 
};

class SNBP : public MasukUniversitas {
	SNBP(int pUangPendaftaran) :
	{
		cout << "biaya pendaftaran SNBP\n" << endl;
	}
};

int main() {
	// isi disini untuk fungsi main
}