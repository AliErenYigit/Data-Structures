/* 
* Dosya Adi:Basamak.hpp
* SayiListeleri arasinda dugum kuran fonksiyonların baslik dosyasi
* 2.sinif 1-A Sinifi
* 1.Odev
* 12/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit ==> eren.yigit@ogr.sakarya.edu.tr
*/

#ifndef Basamak_hpp
#define Basamak_hpp

#include <iostream>

using namespace std;

class Basamak 
{
public:
    int veri;
    Basamak *sonraki;
    
    Basamak(const int veri);
};



#endif