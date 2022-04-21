#include<iostream>
#include<string>
using namespace std;

class Stuka5{
    public:
    void input();
    void proses();
    void output();
    int prorkrsf(int x, int i);
    
    private:
    int sks = 120000;
    int dsc1,dsc2;
    string a[50];
    string nama;
    int b[50];
    int mtkul,jmlhsks=0,nim;
    int tot,biaya1,biaya2;
    int i;
};

void Stuka5::input(){
    cout << "Pembayaran SKS \n";
    cout << "Masukan Nama anda : ";
    cin >> nama;
    cout << "Masukan 3 digit terakhir Nim anda : ";
    cin >> nim;
    cout << "Masukan Jumlah Matkul yang anda ambil : ";
    cin >> mtkul;
    cout << "==========================\n";
    for ( i = 0; i < mtkul; i++){
        cout << "Masukan Nama Matkulnya " << i + 1 << " : ";
        cin>>a[i];
        cout << "Masukan Jumlah SKS : ";
        cin >> b[i];
        cout << endl;
    }
}