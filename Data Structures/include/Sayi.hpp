/* 
* Dosya Adi:Sayi.hpp
* SatirListesini olusturan fonksiyonların baslik dosyasi
* 3.sinif 1-A Sinifi
* 1.Odev
* 11/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit ==> eren.yigit@ogr.sakarya.edu.tr
*/

#ifndef Sayi_hpp
#define Sayi_hpp

#include "Basamak.hpp"
#include <iomanip>

class Sayi
{
private:
    Basamak *ilk;
    int boyut;

    Basamak* OncekiBul(int index);
public:
    Sayi();
    int boyutt()const;
    bool bosmu()const;
    void ekle(int sayiDegeri);
    void arayaEkle(int index, const int& oge);
    const int& ilki();
    const int& sonuncusu();
    int indexOf(const int& oge);
    void ogeCikar(const int& oge);
    void removeAt(int index);
    //void aradanCikar(int index);
    Basamak* dugumGetir(int index);
   
    void tersi();
    const int& elementAt(int index);
    void temizle();
    friend ostream& operator<<(ostream& ekran, Sayi& sag);
    void yazdirTersDugum(int index);
    void yazdirTersSirayi();
    void SayiYazdir(int x, int y);
    ~Sayi();

};


#endif