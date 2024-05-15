/* 
* Dosya Adi:YoneticiDugum.hpp
* YonetciListeleri arasinda dugum kuran fonksiyonların baslik dosyasi
* 3.sinif 1-A Sinifi
* 1.Odev
* 16/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit ==> eren.yigit@ogr.sakarya.edu.tr
*/

#ifndef YoneticiDugum_hpp
#define YoneticiDugum_hpp

#include "Sayi.hpp"

class YoneticiDugum 
{
public:
    Sayi* veri;
   
    YoneticiDugum *sonraki;
    YoneticiDugum *onceki;

    YoneticiDugum(Sayi* veri, YoneticiDugum *sonraki, YoneticiDugum *onceki);
    YoneticiDugum(Sayi* veri, YoneticiDugum *sonraki);
    YoneticiDugum(Sayi* veri);
    
};


#endif