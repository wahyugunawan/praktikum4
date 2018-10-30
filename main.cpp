#include <iostream>

using namespace std;
int main() {
    awal:
    int j_kue;
    char nama [30];
    char kode,yt;
    cout<<"                                         " << endl;
    cout<<"  DAFTAR MENU TOKO KUE LAPIS ROSAH BAYAR " << endl;
    cout<<" ______ ____________________ ___________ " << endl;
    cout<<"| Kode |    Daftar Kue      |    Harga  |" << endl;
    cout<<"|   1  | Bolu Lapis         |    60000  |" << endl;
    cout<<"|   2  | Lapis Coklat       |    45000  |" << endl;
    cout<<"|   3  | Lapis Keju         |    37500  |" << endl;
    cout<<"|   4  | Lapis Pisang       |    40500  |" << endl;
    cout<<"|______|____________________|___________|" << endl;
    cout<<endl;
    cout<<"Nama Pembeli      : " ;cin>>nama;
    cout<<"Kode Kue (1/2/3/4): " ;cin>>kode;
    cout<<"Jumlah Kue        : " ;cin>>j_kue;
  if (kode=='1') {
    int diskon,tot,t_bay,h_kue;
    h_kue=60000;
    tot=j_kue*h_kue;
        if (tot>=1000000) (diskon=tot*0.1);
        else if (tot>=501000) (diskon=tot*0.05);
        else (diskon=tot*0);
    t_bay=tot-diskon;
    cout << "Nama Pembeli     : " <<nama<< endl;
    cout << "Kode Kue         : " <<kode<< endl;
    cout << "Nama Kue         : " <<"Bolu Lapis"<< endl;
    cout << "Harga Kue        : Rp." <<h_kue<< endl;
    cout << "Jumlah Kue       : " <<j_kue<< endl;
    cout << "Total Harga      : Rp." <<tot<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<t_bay<<",-"<< endl;
    }
    else if (kode=='2') {
    int diskon,tot,t_bay,h_kue;
    h_kue=45000;
    tot=j_kue*h_kue;
        if (tot>=1000000) (diskon=tot*0.1);
        else if (tot>=501000) (diskon=tot*0.05);
        else (diskon=tot*0);
    t_bay=tot-diskon;
    cout << "Nama Pembeli     : " <<nama<< endl;
    cout << "Kode Kue         : " <<kode<< endl;
    cout << "Nama Kue         : " <<"Lapis Coklat"<< endl;
    cout << "Harga Kue        : Rp." <<h_kue<< endl;
    cout << "Jumlah Kue       : " <<j_kue<< endl;
    cout << "Total Harga      : Rp." <<tot<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<t_bay<<",-"<< endl;
    }
    else if (kode=='3') {
    int diskon,tot,t_bay,h_kue;
    h_kue=37500;
    tot=j_kue*h_kue;
        if (tot>=1000000) (diskon=tot*0.1);
        else if (tot>=501000) (diskon=tot*0.05);
        else (diskon=tot*0);
    t_bay=tot-diskon;
    cout << "Nama Pembeli     : " <<nama<< endl;
    cout << "Kode Kue         : " <<kode<< endl;
    cout << "Nama Kue         : " <<"Lapis Keju"<< endl;
    cout << "Harga Kue        : Rp." <<h_kue<< endl;
    cout << "Jumlah Kue       : " <<j_kue<< endl;
    cout << "Total Harga      : Rp." <<tot<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<t_bay<<",-"<< endl;
    }
    else if (kode=='4') {
    int diskon,tot,t_bay,h_kue;
    h_kue=40500;
    tot=j_kue*h_kue;
        if (tot>=1000000) (diskon=tot*0.1);
        else if (tot>=501000) (diskon=tot*0.05);
        else (diskon=tot*0);
    t_bay=tot-diskon;
    cout << "Nama Pembeli     : " <<nama<< endl;
    cout << "Kode Kue         : " <<kode<< endl;
    cout << "Nama Kue         : " <<"Lapis Pisang"<< endl;
    cout << "Harga Kue        : Rp." <<h_kue<< endl;
    cout << "Jumlah Kue       : " <<j_kue<< endl;
    cout << "Total Harga      : Rp." <<tot<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<t_bay<<",-"<< endl;
    }
    else {
    cout<<"Menu "<<kode<<" tidak ada di daftar menu";
    cout<<endl;
    }
    cout<<endl;
    cout<<"Apakah anda ingin mengulang ? [Y/T] : ";
    cin>>yt;
    cout<<endl;
    if(yt=='Y' || yt=='y')
    {goto awal;}
    if(yt=='T' || yt=='t')
    {goto selesai;}
    selesai:
     return 0;
}
