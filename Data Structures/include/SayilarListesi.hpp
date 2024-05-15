/* 
* Dosya Adi:SayilarListesi.hpp 
* YoneticiListelerini olusturan fonksiyonların baslik dosyasi.
* 3.sinif 1-ASinifi
* 1.Odev
* 15/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit ==> eren.yigit@ogr.sakarya.edu.tr
*/

#ifndef SayilarListesi_hpp
#define SayilarListesi_hpp

#include <iostream>
#include <stdlib.h>     
#include <time.h>
#include "Sayi.hpp"
#include "Dugum.hpp"

class SayilarListesi 
{
private:
    int boyut;

    Dugum* BulKonumu(int index);
    Dugum* OncekiBul(int index);

public:

    Dugum *ilk;
    SayilarListesi();
    int boyutu()const;
    bool bosmu()const;
    void ekle(Sayi* oge, int sayiDegeri);
    Dugum* ilkDugum();
    Dugum* dugumGetir(int index);
    void cikar(int index);
    ~SayilarListesi();

};


#endif