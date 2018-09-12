// IMK
// Interkasi Manusia Komputer Memet

//Praktikum02B - Menu Datar Menggunakan Pilihan Warna

#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void naik(int posisiy, int posisi);
void turun(int posisiy, int posisi);
void kanan(int posisiy, int posisi);
void kiri(int posisiy, int posisi);
void pergike(int a, int b);
void warna(int w);

const string menu0 = "M E N U",
             menu1 = "[1]  Lihat Daftar Mahasiswa  ",
             menu2 = "[2]  Lihat Daftar Dosen      ",
             menu3 = "[3]  Lihat Daftar Mata Kuliah",
             menu4 = "[4]  Lihat Jadwal Kuliah     ",
             menu5 = "[5]  Edit Data Mahasiswa     ",
             menu6 = "[6]  Edit Data Dosen         ",
             menu7 = "[7]  Edit Data Mata Kuliah   ",
             menu8 = "[8]  Keluar                  ";

      int posisi;
      int posisiy;

int main()
{
    COORD koor;
    int i;
    char tekan;

    home:

    //membuat kotak
    system("cls");
    cout << (char)201; for(i=1;i<=27;i++) cout << (char)205;
    cout << (char)187 << endl;
    cout << (char)186; cout << " PENGELOLAAN DATA AKADEMIK ";
    cout << (char)186 << endl;
    cout << (char)186; cout << " JURUSAN INFORMATIKA - FSM ";
    cout << (char)186 << endl;
    cout << (char)200; for(i=1;i<=27;i++) cout << (char)205;
    cout << (char)188 << endl;

    //membuat menu
    cout << endl;
    cout << (char)201; for(i=1;i<=60;i++) cout << (char)205;cout << (char)187 << endl;
    cout << (char)186; for(i=1;i<=27;i++) cout << " "; cout << menu0; for(i=1;i<=26;i++) cout << " ";cout << (char)186 << endl;
    cout << (char)186; for(i=1;i<=60;i++) cout << (char)196;cout << (char)186 << endl;
    cout << (char)186; cout << menu1;cout << '\t';cout << menu5;cout << (char)186 << endl;
    cout << (char)186; cout << menu2;cout << '\t';cout << menu6;cout << (char)186 << endl;
    cout << (char)186; cout << menu3;cout << '\t';cout << menu7;cout << (char)186 << endl;
    cout << (char)186; cout << menu4;cout << '\t';cout << menu8;cout << (char)186 << endl;
    cout << (char)200; for(i=1;i<=60;i++) cout << (char)205;cout << (char)188 << endl;

    //program utama
     posisi = 9;
     posisiy = 2;
        warna(252);
        pergike(posisiy,posisi);
        cout << menu1;
    while (tekan != 27)
    {
          tekan = getch();
          switch(tekan)
          {
          case 72 : {
                    naik(posisiy,posisi);
                    if (posisi!=9)posisi--; else posisi=12;
                    break;
                    };
          case 80 : {
                    turun(posisiy,posisi);
                    if (posisi!=12)posisi++; else posisi=9;
                    break;
                    };
          case 77 : {
                    kanan(posisiy,posisi);
                    if (posisiy==2)posisiy+=31; else posisiy=2;
                    break;
                    };
          case 75 : {
                    kiri(posisiy,posisi);
                    if (posisiy==2)posisiy+=31; else posisiy=2;
                    break;
                    };
          case 13 : {
                    if (posisiy == 2 )
                    {
                    switch(posisi)
                    {
                    case 9 : {
                             warna(15);
                             system("cls");
                             cout << "Anda berada di menu " << menu1 << endl;
                             cout << "Tekan <enter> untuk kembali.";
                             getch();
                             goto home;
                             }
                    case 10 : {
                             warna(15);
                             system("cls");
                             cout << "Anda berada di menu " << menu2 << endl;
                             cout << "Tekan <enter> untuk kembali.";
                             getch();
                             goto home;
                             }
                    case 11 : {
                             warna(15);
                             system("cls");
                             cout << "Anda berada di menu " << menu3 << endl;
                             cout << "Tekan <enter> untuk kembali.";
                             getch();
                             goto home;
                             }
                    case 12: {
                             warna(15);
                             system("cls");
                             cout << "Anda berada di menu " << menu4 << endl;
                             cout << "Tekan <enter> untuk kembali.";
                             getch();
                             goto home;
                             }
                    };
                    }
                    else
                    {
                        switch(posisi)
                            {
                                case 9 :
                                    {
                                        warna(15);
                                        system("cls");
                                        cout << "Anda berada di menu " << menu5 << endl;
                                        cout << "Tekan <enter> untuk kembali.";
                                        getch();
                                        goto home;
                                    }
                                case 10 :
                                    {
                                        warna(15);
                                        system("cls");
                                        cout << "Anda berada di menu " << menu6 << endl;
                                        cout << "Tekan <enter> untuk kembali.";
                                        getch();
                                        goto home;
                                    }
                                case 11 :
                                    {
                                        warna(15);
                                        system("cls");
                                        cout << "Anda berada di menu " << menu7 << endl;
                                        cout << "Tekan <enter> untuk kembali.";
                                        getch();
                                        goto home;
                                    }
                                case 12:
                                    {
                                        goto keluar;
                                    }
                            }
                    };
                    }
          }
    }

     keluar:
    pergike(1,15);
    warna(15);
                        cout << "  |===================================================|\n";
                        cout << "  |-           MOHON MAAF DAN TERIMAKASIH            -|\n";
                        cout << "  |===================================================|\n";
                        cout << "  |-                Slamet Febryanto                 -|\n";
                        cout << "  |-                 24060117140098                  -|\n";
                        cout << "  |-                INFORMATIKA 2017                 -|\n";
                        cout << "  |-           Fakultas Sains Dan Matematika         -|\n";
                        cout << "  |-              Universitas Diponegoro             -|\n";
                        cout << "  |===================================================|\n";
                        cout << "  |-              Press Any Key To Exit              -|\n";
                        cout << "  |===================================================|\n";
    getch();
    return 0;
}

void naik(int posisiy,int posisi)
{
    if(posisiy == 2){
            switch(posisi){
                    case 9 :{
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu1;
                            warna(252);
                            pergike(posisiy,posisi+3);
                            cout << menu4;
                            break;};
                    case 10 :{
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu2;
                            warna(252);
                            pergike(posisiy,posisi-1);
                            cout << menu1;
                            break;};
                    case 11 : {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu3;
                            warna(252);
                            pergike(posisiy,posisi-1);
                            cout << menu2;
                            break;};
                    case 12 : {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu4;
                            warna(252);
                            pergike(posisiy,posisi-1);
                            cout << menu3;
                            break; };
                } }

    else {
            switch(posisi) {
                    case 9 :  {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu5;
                            warna(252);
                            pergike(posisiy,posisi+3);
                            cout << menu8;
                            break; };
                    case 10 : {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu6;
                            warna(252);
                            pergike(posisiy,posisi-1);
                            cout << menu5;
                            break;  };
                    case 11 :{
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu7;
                            warna(252);
                            pergike(posisiy,posisi-1);
                            cout << menu6;
                            break;  };
                    case 12 :   {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu8;
                            warna(252);
                            pergike(posisiy,posisi-1);
                            cout << menu7;
                            break; };
                } }}

void turun(int posisiy,int posisi){
    if(posisiy == 2) {
            switch(posisi)  {
                    case 9 : { warna(15);
                            pergike(posisiy,posisi);
                            cout << menu1;
                            warna(252);
                            pergike(posisiy,posisi+1);
                            cout << menu2;
                            break; };
                    case 10 : {  warna(15);
                            pergike(posisiy,posisi);
                            cout << menu2;
                            warna(252);
                            pergike(posisiy,posisi+1);
                            cout << menu3;
                            break; };
                    case 11 : {warna(15);
                            pergike(posisiy,posisi);
                            cout << menu3;
                            warna(252);
                            pergike(posisiy,posisi+1);
                            cout << menu4;
                            break; };
                    case 12 :{ warna(15);
                            pergike(posisiy,posisi);
                            cout << menu4;
                            warna(252);
                            pergike(posisiy,posisi-3);
                            cout << menu1;
                            break; };}}
    else {
            switch(posisi) {
                    case 9 : { warna(15);
                            pergike(posisiy,posisi);
                            cout << menu5;
                            warna(252);
                            pergike(posisiy,posisi+1);
                            cout << menu6;
                            break; };
                    case 10 : { warna(15);
                            pergike(posisiy,posisi);
                            cout << menu6;
                            warna(252);
                            pergike(posisiy,posisi+1);
                            cout << menu7;
                            break; };
                    case 11 : {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu7;
                            warna(252);
                            pergike(posisiy,posisi+1);
                            cout << menu8;
                            break; };
                    case 12 :{ warna(15);
                            pergike(posisiy,posisi);
                            cout << menu8;
                            warna(252);
                            pergike(posisiy,posisi-3);
                            cout << menu5;
                            break; }; } }}

void kanan(int posisiy,int posisi)
{
    if(posisiy == 2) {
            switch(posisi){
                    case 9 :  {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu1;
                            warna(252);
                            pergike(posisiy+31,posisi);
                            cout << menu5;
                            break; };
                    case 10 : {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu2;
                            warna(252);
                            pergike(posisiy+31,posisi);
                            cout << menu6;
                            break;  };
                    case 11 :{
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu3;
                            warna(252);
                            pergike(posisiy+31,posisi);
                            cout << menu7;
                            break; };
                    case 12 : {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu4;
                            warna(252);
                            pergike(posisiy+31,posisi);
                            cout << menu8;
                            break;};}}
    else {
            switch(posisi) {
                    case 9 : {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu5;
                            warna(252);
                            pergike(posisiy-31,posisi);
                            cout << menu1;
                            break; };
                    case 10 : {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu6;
                            warna(252);
                            pergike(posisiy-31,posisi);
                            cout << menu2;
                            break; };
                    case 11 : {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu7;
                            warna(252);
                            pergike(posisiy-31,posisi);
                            cout << menu3;
                            break; };
                    case 12 :{
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu8;
                            warna(252);
                            pergike(posisiy-31,posisi);
                            cout << menu4;
                            break; }; }}}

void kiri(int posisiy,int posisi){
    if(posisiy == 2) {
            switch(posisi) {
                    case 9 : {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu1;
                            warna(252);
                            pergike(posisiy+31,posisi);
                            cout << menu5;
                            break;};
                    case 10 : {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu2;
                            warna(252);
                            pergike(posisiy+31,posisi);
                            cout << menu6;
                            break;};
                    case 11 :{
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu3;
                            warna(252);
                            pergike(posisiy+31,posisi);
                            cout << menu7;
                            break; };
                    case 12 :  {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu4;
                            warna(252);
                            pergike(posisiy+31,posisi);
                            cout << menu8;
                            break; }; }  }
    else {
            switch(posisi) {
                    case 9 :  {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu5;
                            warna(252);
                            pergike(posisiy-31,posisi);
                            cout << menu1;
                            break;  };
                    case 10 :  {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu6;
                            warna(252);
                            pergike(posisiy-31,posisi);
                            cout << menu2;
                            break;  };
                    case 11 : {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu7;
                            warna(252);
                            pergike(posisiy-31,posisi);
                            cout << menu3;
                            break; };
                    case 12 : {
                            warna(15);
                            pergike(posisiy,posisi);
                            cout << menu8;
                            warna(252);
                            pergike(posisiy-31,posisi);
                            cout << menu4;
                            break; }; } }}

void pergike(int a, int b)
{
     COORD koor;
     koor.X = a-1;
     koor.Y = b-1;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), koor);
}

void warna(int w)
{
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), w);;
}
