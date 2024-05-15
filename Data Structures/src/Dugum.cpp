/* 
* Dosya Adi:Dugum.cpp
* YonetciListeleri arasinda dugum kuran fonksiyonların kaynak dosyasi
* 3.sinif 1-A Sinifi
* 1.Odev
* 16/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit ==> eren.yigit@ogr.sakarya.edu.tr
*/

#include "Dugum.hpp"
#include "Sayi.hpp"

Dugum::Dugum(Sayi* veri, int sayiDegeri) 
{
    this->sayiDegeri = sayiDegeri;
    this->veri = veri;
    this->sonraki = 0;
}
