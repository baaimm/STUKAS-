#include<iostream>
#include"proses.h"

void Stuka5::output(){
    cout << "Nama : " << nama << "\n";
    cout << "NIM  : " << nim << "\n\n";
    cout << "Matakuliah    ||     sks \n";
    for(int i=0; i<mtkul; i++){
        cout <<a[i] <<"   "<< b[i];
    }
    cout << "\n\n";
    cout << "Jumlah SKS : " << jmlhsks << "\n";
    cout << "Harga Awal : " << tot << "\n";
    cout << "Harga setelah diskon : " << biaya2 << "\n"; 
}