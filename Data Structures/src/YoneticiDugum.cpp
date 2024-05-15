/* 
* Dosya Adi:YoneticiDugum.cpp
* YonetciListeleri arasinda dugum kuran fonksiyonların kaynak dosyasi
* 3.sinif 1-A Sinifi
* 1.Odev
* 16/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit ==> eren.yigit@ogr.sakarya.edu.tr
*/

#include "YoneticiDugum.hpp"


YoneticiDugum::YoneticiDugum(Sayi* veri, YoneticiDugum *sonraki , YoneticiDugum *onceki) 
{
    this->veri = veri;
    this->sonraki = sonraki;
    this->onceki = onceki;
   
}

YoneticiDugum::YoneticiDugum(Sayi* veri, YoneticiDugum *sonraki ) 
{
    this->veri = veri;
    this->sonraki = sonraki;
    this->onceki = onceki;
   
}

YoneticiDugum::YoneticiDugum(Sayi* veri) 
{
    this->veri = veri;
    this->sonraki = sonraki;
    this->onceki = onceki;
    
}
