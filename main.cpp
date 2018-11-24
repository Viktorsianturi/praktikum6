#include <iostream>
#include <conio.h>

using namespace std;

penjumlahan()
{
float bil1,bil2,hasil;
cout<<" OPERASI PENJUMLAHAN"<<endl;
cout<<"======================================="<<endl;
cout<<" Input Bilangan A : ";cin>>bil1;
cout<<" Input Bilangan B : ";cin>>bil2;

hasil=bil1+bil2;

cout<<" Hasil Penjumlahan adalah : "<<hasil<<endl;
cout<<"======================================="<<endl;
cout<<" Terima Kasih"<<endl;
}
perkalian()
{
float bil1,bil2,hasil;
cout<<" OPERASI PERKALIAN"<<endl;
cout<<"======================================="<<endl;
cout<<" Input Bilangan A : ";cin>>bil1;
cout<<" Input Bilangan B : ";cin>>bil2;

hasil=bil1*bil2;

cout<<" Hasil Perkalian adalah : "<<hasil<<endl;
cout<<"======================================="<<endl;
cout<<" Terima Kasih"<<endl;
}
pembagian()
{
float bil1,bil2,hasil;
cout<<" OPERASI PEMBAGIAN"<<endl;
cout<<"======================================="<<endl;
cout<<" Input Bilangan A : ";cin>>bil1;
cout<<" Input Bilangan B : ";cin>>bil2;

hasil=bil1/bil2;

cout<<" Hasil Pembagian adalah : "<<hasil<<endl;
cout<<"======================================="<<endl;
cout<<" Terima Kasih"<<endl;
}

keluar()
{
cout<<"======================================="<<endl;
cout<<"Terimakasih Telah menggunakan Kalkulator MAXI"<<endl;
cout<<"======================================="<<endl;
}

main()
{
int pilih;
char ulang;
atas:


cout<<" Calculator Fabel-Maxi "<<endl;
cout<<"======================================="<<endl;
cout<<" Pilihlah Operator"<<endl;
cout<<"======================================="<<endl;
cout<<" 1.Penjumlahan"<<endl;
cout<<" 2.Perkalian"<<endl;
cout<<" 3.Pembagian"<<endl;
cout<<" 4.Keluar"<<endl;
cout<<"======================================="<<endl;
cout<<" Masukan Pilihan Anda : "; cin>>pilih;
cout<<"======================================="<<endl;

switch (pilih)
{
case 1 : penjumlahan();break;
case 2 : perkalian();break;
case 3 : pembagian();break;
case 4 : keluar();break;
}
cout<<"======================================="<<endl;
cout<<"Ingin Menghitung Lagi [Y/T] : ";cin>>ulang;
if (ulang == 'Y' || 'y' == ulang )
goto atas;

getch();
}
