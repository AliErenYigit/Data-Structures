/* 
* Dosya Adi:Main.cpp
* Dosyayi yazdiran ve konsol ekranindaki hareketleri kontrol eden fonksiyonlarin kaynak dosyasi
* 3.sinif 1-A Sinifi
* 1.Odev
* 13/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit==>  eren.yigit@ogr.sakarya.edu.tr
*/

#include <cstdlib>
#include "Sayi.hpp"
#include "YoneticiListesi.hpp"
#include "DosyaYazdir.hpp"

using namespace std;
void yaz(DosyaYazdir* dosyaOku){
for (size_t i = 0; i < dosyaOku->sayilarListesi->boyutu(); i++)
    {
        cout<<"###########   ";
        for(size_t j = 0; j < dosyaOku->sayilarListesi->dugumGetir(i)->veri->boyutt(); j++)
        {
            cout<<"*******"<<" ";
        }
        cout<<endl;
        cout<<"#"<<setw(9)<<right<<dosyaOku->sayilarListesi->dugumGetir(i)<<"#   ";///////////////////////////////sayi
        for (size_t j = 0; j < dosyaOku->sayilarListesi->dugumGetir(i)->veri->boyutt(); j++)
        {
            
            int basamak = int(dosyaOku->sayilarListesi->dugumGetir(i)->veri->dugumGetir(j))%1000;
            cout<<"* "<<setw(4)<<hex<<basamak<<"* ";
           // int basamak = int(dosyaOku->sayilarListesi->dugumGetir(i))%1000;
            //cout<<"* "<<setw(4)<<dosyaOku->sayilarListesi->dugumGetir(i)->veri->elementAt(j)<<"* ";
            
        }
        cout<<endl;
        cout<<"#"<<"---------"<<"#   ";
        for(size_t j = 0; j < dosyaOku->sayilarListesi->dugumGetir(i)->veri->boyutt(); j++)
        {
            cout<<"*******"<<" ";
        }
        cout<<endl;
        cout<<"#"<<setw(9)<<right<<dec<<dosyaOku->sayilarListesi->dugumGetir(i)->sayiDegeri<<"#   ";
        for(size_t j = 0; j < dosyaOku->sayilarListesi->dugumGetir(i)->veri->boyutt(); j++)
        {
            cout<<"* "<<setw(4)<<dosyaOku->sayilarListesi->dugumGetir(i)->veri->elementAt(j)<<"* ";
        }
        cout<<endl;
        cout<<"###########"<<"   ";

        for(size_t j = 0; j < dosyaOku->sayilarListesi->dugumGetir(i)->veri->boyutt(); j++)
        {
            cout<<"*******"<<" ";
        }
        cout<<endl;
        cout<<endl;

    }
}

int main(int argc, char** argv) 
{
system("cls");
    DosyaYazdir * dosyaOku = new DosyaYazdir("Sayilar.txt");

    YoneticiListesi *yoneticiListesi = dosyaOku->GetFillYoneticiListesi();
    yaz(dosyaOku);
    cout<<endl;
        
    
        int secim;
        int buyukSayi = 0;
        int sira = 0;

    do {
        
        cout << "1. Tek Deger Tasi\n";
        cout << "2. Basamaklari Yer Degistir\n";
        cout << "3. En Buyugu Cikart\n";
        cout << "0. Cikis\n";
        cout << "Seciminiz: ";
        cin >> secim;
        Sayi sayiListesi;
        switch (secim) {
        case 1:
            cout <<"f1as";
            break;
        case 2:
            cout <<"fasd";
            break;
        case 3:
            for (int i = 0; i < dosyaOku->sayilarListesi->boyutu(); i++)
            {
                if (dosyaOku->sayilarListesi->dugumGetir(i)->sayiDegeri > buyukSayi)
                {
                    buyukSayi = dosyaOku->sayilarListesi->dugumGetir(i)->sayiDegeri;
                    sira = i;
                }
            }
            dosyaOku->sayilarListesi->cikar(sira);

            yaz(dosyaOku);
            
            break;
        case 0:
            cout << "Programdan cikiliyor...\n";
            break;
        default:
            cout << "Geçersiz secim. Tekrar deneyin.\n";
        }
    } while (secim != 0);

    


    delete dosyaOku;
    return 0;
}

