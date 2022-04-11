#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;
	int idMhs = 0;
	int idDosen = 0;
	int idTendik = 0;

	while(1) {
		cout << "Selamat datang di Universitas Tadika Mesra" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
				{
					idMhs++;
					string id, nama, nrp, departemen;
					int dd, mm, yy, tahunmasuk;
					id = idMhs;
					cout << "Masukkan nama : ";
					cin.ignore();
					getline(cin, nama);
					cout << "Masukkan tanggal Lahir : ";
					cin >> dd;
					cout << "Masukkan bulan lahir : ";
					cin >> mm;
					cout << "Masukkan tahun lahir : ";
					cin >> yy;
					cout << "Masukkan NRP :";
					cin >> nrp;
					cout << "Masukan departemen : ";
					cin.ignore();
					getline(cin, departemen);
					cout << "Masukan tahun masuk : ";
					cin >> tahunmasuk;
					mahasiswa inputMhs = mahasiswa(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
					recMhs.push_back(inputMhs);
				}
				break;
			case 2:
				{
					idDosen++;
					string id, nama, npp, departemen, pendidikan;
					int dd, mm, yy;
					id = idDosen;
					cout << "Masukkan nama : ";
					cin.ignore();
					getline(cin, nama);
					cout << "Masukkan tanggal Lahir : ";
					cin >> dd;
					cout << "Masukkan bulan lahir : ";
					cin >> mm;
					cout << "Masukkan tahun lahir : ";
					cin >> yy;
					cout << "Masukkan NPP : ";
					cin >> npp;
					cout << "Masukan departemen : ";
					cin.ignore();
					getline(cin, departemen);
					cout << "Masukan pendidikan : ";
					cin.ignore();
					getline(cin, pendidikan);
					dosen inputDosen = dosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
					recDosen.push_back(inputDosen);
				}
				break;
			case 3:
				{
					idTendik++;
					string id, nama, npp, unit;
					int dd, mm, yy;
					id = idTendik;
					cout << "Masukkan nama : ";
					cin.ignore();
					getline(cin, nama);
					cout << "Masukkan tanggal Lahir : ";
					cin >> dd;
					cout << "Masukkan bulan lahir : ";
					cin >> mm;
					cout << "Masukkan tahun lahir : ";
					cin >> yy;
					cout << "Masukkan NPP : ";
					cin >> npp;
					cout << "Masukan unit : ";
					cin.ignore();
					getline(cin, unit);
					tendik inputTendik = tendik(id, nama, dd, mm, yy, npp,unit);
					recTendik.push_back(inputTendik);
				}
				break;
			case 4:
				{
					for(int i = 0; i < idMhs; i++){
						cout << "Nama Mahasiswa :" << recMhs[i].getNama() << endl;
						cout << "Tanggal Lahir  :" << recMhs[i].getTglLahir() << "/" << recMhs[i].getBulanLahir() << "/" << recMhs[i].getTahunLahir() << endl;
						cout << "NRP		  	:" << recMhs[i].getNRP() << endl;
						cout << "Departemen  	:" << recMhs[i].getDepartemen() << endl;
						cout << "Tahun Masuk 	:" << recMhs[i].getTahunMasuk() << endl;
					}
				}
				break;
			case 5:
				{
					for(int i = 0; i < idMhs; i++){
						cout << "Nama Dosen	   		 :" << recDosen[i].getNama() << endl;
						cout << "Tanggal Lahir 		 :" << recDosen[i].getTglLahir() << "/" << recDosen[i].getBulanLahir() << "/" << recDosen[i].getTahunLahir() << endl;
						cout << "NPP		   		 :" << recDosen[i].getNPP() << endl;
						cout << "Departemen			 :" << recDosen[i].getDepartemen() << endl;
						cout << "Pendidikan Terakhir :" << recDosen[i].getPendidikan() << endl;
					}
				}
				break;
			case 6:
				{
					for(int i = 0; i < idMhs; i++){
						cout << "Nama Mahasiswa :" << recTendik[i].getNama() << endl;
						cout << "Tanggal Lahir  :" << recTendik[i].getTglLahir() << "/" << recTendik[i].getBulanLahir() << "/" << recTendik[i].getTahunLahir() << endl;
						cout << "NPP	   	    :" << recTendik[i].getNPP() << endl;
						cout << "Unit		    :" << recTendik[i].getUnit() << endl;
					}
				}
				break;
		}
	}

	return 0;
}
