#include <iostream>
#include <string>
#include "include/PersegiPanjang.hpp"
using namespace std;

float length, 
    width,
    midpoint_x, 
    midpoint_y;

int main(){
    while(1){
        startProgram();
        string option_str;
        int option_int;
        cout << "INPUTKAN DATA PERSEGI ATAU PERSEGI PANJANG" << endl;
        cout << "Persegi panjang 1" << endl;
        input();
        persegiPanjang obj1(midpoint_x, midpoint_y, length, width);

        cout << "Persegi panjang 2" << endl;
        input();
        persegiPanjang obj2(midpoint_x, midpoint_y, length, width);
        persegiPanjang obj3(0,0,0,0);
        clear();

        cout << "DATA SEMENTARA ADALAH" << endl;
        cout << "Persegi panjang 1" << endl; 
            obj1.output();
            cout << endl;
        cout << "Persegi panjang 2" << endl;
            obj2.output();
            cout << endl;
        cout << "Data yang dimasukan sesuai (y/n) : ";
            cin >> option_str;
                if(option_str == "n" || option_str == "N"){
                    main();
                }
        clear();
        
        while(1){
            clear();
            cout << endl;
            option_int = optionthis();
            cout << endl;
            switch (option_int){
                case 0:
                    {
                        cout << "================= OPERATOR + =====================" << endl;
                        obj3 = obj1 + obj2;
                        if (obj1==obj2){
                            obj3.output();
                        }
                    }
                    break;
                case 1:
                    {
                        cout << "================ OPERATOR - ======================" << endl;
                        obj3 = obj1 - obj2;
                        if (obj1==obj2){
                            obj3.output();
                        }
                    }
                    break;
                case 2:
                    {
                        cout << "============ OPERATOR ++ persegi panjang 1 =============" << endl;
                        ++obj1;
                        obj1.output();
                        --obj1;
                    }
                    break;
                case 3:
                    {
                        cout << "============ OPERATOR -- persegi panjang 1 =============" << endl;
                        ++obj2;
                        obj1.output();
                        --obj2;
                    }
                    break;
                case 4:
                    {
                        cout << "============ OPERATOR ++ persegi panjang 2 =============" << endl;
                        --obj1;
                        obj1.output();
                        ++obj1;
                    }
                    break;
                case 5:
                    {
                        cout << "============ OPERATOR -- persegi panjang 2 =============" << endl;
                        --obj2;
                        obj1.output();
                        ++obj2;
                    }
                    break;
                case 6:
                    {
                        const char *index[4] = {"xMin", "xMax", "yMin", "yMax"};
                        cout<<"OPERATOR [] Perbandingan antar objek"<<endl;
                        for (int pilihan = 1; pilihan < 5; pilihan++){
                            cout << "Nilai " << index[pilihan-1] << " Objek : " << pp1[pilihan] << endl;
                            cout << "Nilai " << index[pilihan-1] << " Objek : " << pp2[pilihan] << endl;
                            if (pp1[pilihan] > pp2[pilihan]){
                                cout << index[pilihan-1] << " Objek 1 lebih besar dari " << index[pilihan-1] << " Objek 1" << endl;
                            }else if(pp2[pilihan] > pp1[pilihan]){
                                cout << index[pilihan-1] << " Objek 2 lebih besar dari " << index[pilihan-1] << " Objek 1" << endl;;
                            }else{
                                cout << "Kedua " << index[pilihan-1] << " sama" << endl;
                            }
                            cout<<endl;
                        }
                    }
                    break;
                case 7:
                    {
                        cout << endl << endl;
                        cout << "==================== OPERATOR == ====================" << endl;
                        if (obj1==obj2){
                            cout << "Persegi panjang beririsan" << endl;
                        }else{
                            cout << "Persegi panjang tidak beririsan" << endl;
                        }
                    }
                    break;
                }
            cout << endl<< endl;
            cout << "Apakah anda ingin mencoba operator lain (y/n) : ";
            cin >> option_str;
            if(option_str == "N" || option_str == "n"){
                break;
            }
        }
    clear();
    cout << endl;
    cout << "Apakah anda ingin mencoba demgan objek baru (y/n) :";
        cin >> option_str;
        if(option_str == "N" || option_str == "n"){
            break;
        }
}
endProgram();
return 0;
}



void input(){
    cout << "Panjang        : "; cin >> length;      
    cout << "Lebar          : "; cin >> width;       
    cout << "Titik tengah x : "; cin >> midpoint_x;  
    cout << "Titik tengah y : "; cin >> midpoint_y;  
    cout << endl;
}
void startProgram(){
    clear();
    cout << endl;
    cout << "======================TUGAS OPERATOR OVERLOADING===================" << endl;
    cout << "Nama  : Muhammad Ridho Mujahid"<<endl<< "NRP   : 5024211023"<<endl<< "Departemen  : Teknik Komputer"<<endl<< "Kelas : Pemrograman Lanjut A"<<endl;
    cout << "===================================================================" << endl;
    cout << "Klik enter untuk mulai program...";
    cin.get();
    clear();
}
void endProgram(){
    cout << endl;
    cout << "Terimakasih telah menggunakan program saya" << endl;
    cout << "Tekan Enter untuk menselesaikan...";
    cin.get();
}
void clear(){
    system("clear || CLS");
}
int optionthis(){
    cout << endl;
    int option_fungsi;
    cout << "Pilihlah Operasi yang ingin anda lakukan \n 0. Operator + \n 1. Operator - \n 2. Operator ++ Objek 1 \n 3. Operator -- Objek 1 \n 4. Operator ++ Objek 2 \n 5. Operator -- Objek 2 \n 6. Operator []  \n 7. Operator == \n Masukan pilihan anda : ";
    cin >> option_fungsi;
    return option_fungsi;
}
