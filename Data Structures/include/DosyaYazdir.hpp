/* 
* Dosya Adi:DosyaYazdir.hpp
* Dosya icindeki verileri yazdiran fonsiyonlarin baslik dosyasi.
* 3.sinif 1-A Sinifi
* 1.Odev
* 22/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit ==> eren.yigit@ogr.sakarya.edu.tr
*/

#ifndef DosyaYazdir_hpp
#define DosyaYazdir_hpp

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include "Sayi.hpp"
#include "SayilarListesi.hpp"
#include "YoneticiListesi.hpp"


class DosyaYazdir 
{
private:
    string dosyaAdi;
    int sayiBoyutu();
    void readLine();
public:
    Sayi **sayi;
    SayilarListesi *sayilarListesi;
    Sayi *sayi_;

    DosyaYazdir(string);
    ~DosyaYazdir();
    YoneticiListesi* GetFillYoneticiListesi();
};

#endif