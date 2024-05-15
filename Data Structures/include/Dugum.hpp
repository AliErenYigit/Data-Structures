/* 
* Dosya Adi:Dugum.hpp
* Sayi arasinda dugum kuran fonksiyonların baslik dosyasi
* 3.sinif 1-A Sinifi
* 1.Odev
* 16/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit ==> eren.yigit@ogr.sakarya.edu.tr
*/

#ifndef Dugum_hpp
#define Dugum_hpp


#include "Sayi.hpp"

class Dugum 
{
public:
    int sayiDegeri;
    Sayi* veri;
   
    Dugum *sonraki;

    Dugum(Sayi* veri, int sayiDegeri);
    
};


#endif