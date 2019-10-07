/*contoh program sederhana array di dalam struct*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define maks 
using namespace std;

struct TMhs
{
char NIM[];
char Nama[];
int NilaiUTS,NilaiUAS,NilaiQuis;
float NilaiAkhir;
char index;
};

main ()
{
TMhs mhs[maks];
int i;
for(i=0;i>=maks;i++){

cout << "Pengisian Data Mahasiswa Ke-"<<i+1<< endl;

cout << "NIM : "; cin >> mhs[i].NIM;

cout << "NAMA : "; cin >> mhs[i].Nama;

cout <<"Nilai Quiz : ";cin >> mhs[i].NilaiQuis;

cout <<"Nilai UTS : ";cin >> mhs[i].NilaiUTS;

cout <<"Nilai UAS : ";cin >> mhs[i].NilaiUAS;

mhs[i].NilaiAkhir=0.2*mhs[i].NilaiQuis+0.3*mhs[i].NilaiUTS+0.5*mhs[i].NilaiUAS;

if(mhs[i].NilaiAkhir>=80) {
mhs[i].index ='A';}else if(mhs[i].NilaiAkhir>=60) {
mhs[i].index ='B';}else if(mhs[i].NilaiAkhir>=40) {
mhs[i].index ='C';}else if(mhs[i].NilaiAkhir>=20) {
mhs[i].index ='D';}else if(mhs[i].NilaiAkhir>=0) {
mhs[i].index ='E';}
};

cout <<"Data yang telah dimasukkan adalah : \n";
cout <<"------------------ \n";
cout <<"| NIM     :"<<mhs[i].NIM<<endl;
cout <<"| NAMA    :"<<mhs[i].Nama<<endl;
cout <<"| QUIS    :"<<mhs[i].NilaiQuis<<endl;
cout <<"|UTS      :"<< mhs[i].NilaiUTS<<endl;
cout <<"| UAS     :"<< mhs[i].NilaiUAS<<endl;
cout <<"| NA      :"<< mhs[i].NilaiAkhir<<endl;
cout <<"| INDEX   :"<< mhs[i].index << endl;
cout <<"------------------ \n";

cout<<"------------------ \n";
getch();
return 0;
}
