/* 
* Dosya Adi:YoneticiListesi.hpp 
* YoneticiListelerini olusturan fonksiyonların baslik dosyasi.
* 3.sinif 1-A Sinifi
* 1.Odev
* 15/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit ==> eren.yigit@ogr.sakarya.edu.tr
*/

#ifndef YoneticiListesi_hpp
#define YoneticiListesi_hpp

#include <iostream>
#include "Sayi.hpp"
#include "YoneticiDugum.hpp"
#include <stdlib.h>     
#include <time.h>

class YoneticiListesi 
{
private:
    YoneticiDugum *ilk;
    int boyut;

    YoneticiDugum* oncekiKonumuBul(int index);
    YoneticiDugum* BulKonumu(int index);

public:

    YoneticiListesi();
    int boyutu()const;
    bool bosmu()const;
    void ekle(Sayi*& oge);
    void arayaEkle(int index, Sayi*& oge);
    Sayi*& ilki();
    Sayi*& sonuncusu();
    int indexOf(Sayi*& oge);
    void cikar(Sayi*& oge);
    
  
    
    void aradanKaldir(int index);
    
    
    void tersYap();
   
    Sayi*& elementAt(int index);
    void temizle();
   
    ~YoneticiListesi();

};


#endif