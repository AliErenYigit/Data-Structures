/* 
* Dosya Adi:SayilarListesi.cpp
* YoneticiListelerini icindeki verilerle olusturan fonksiyonların kaynak dosyasi
* 3.sinif 1-A Sinifi
* 1.Odev
* 17/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit ==>eren.yigit@ogr.sakarya.edu.tr
*/

#include "SayilarListesi.hpp"
#include "Dugum.hpp"

Dugum* SayilarListesi::OncekiBul(int index) 
{
    if (index < 0 || index > boyut) ;
    Dugum *oncekisi = ilk;
    int i = 1;
    for (Dugum*itr = ilk; itr->sonraki != NULL && i != index; itr = itr->sonraki, i++) 
    {
        oncekisi = oncekisi->sonraki;
    }
    return oncekisi;
}


SayilarListesi::SayilarListesi() 
{
    ilk = NULL;
    boyut = 0;
}

int SayilarListesi::boyutu()const 
{
    return boyut;
}

bool SayilarListesi::bosmu()const 
{
    return boyut == 0;
}

void SayilarListesi::ekle(Sayi* oge, int sayiDegeri) 
{   
    Dugum* yeni = new Dugum(oge, sayiDegeri);

    if (ilk == nullptr)
    {
        ilk = yeni;
    }
    else{
        Dugum* gec = ilk;
        while (gec->sonraki != NULL)
        {
            gec = gec->sonraki;
        }
        gec->sonraki = yeni;
    }
    boyut++;
}

Dugum* SayilarListesi::ilkDugum() 
{
    if (bosmu()) ;
    return ilk;
}
Dugum* SayilarListesi::dugumGetir(int index){
    if(index == 0) return ilk;
    
    Dugum* gec = ilk;
    int sayac = 0;
    while (gec->sonraki!=nullptr)
    {   
        gec=gec->sonraki;
        if (sayac+1 == index)
        {
            return gec;
        }
        sayac++;
    }
    
}

void SayilarListesi::cikar(int index){
    if(boyut == 0) throw "Empty list";
    Dugum *sil;
    if(index == 0){
        sil = ilk;
        ilk = ilk->sonraki;
    }
    else{
        Dugum *prev = OncekiBul(index);
        sil = prev->sonraki;
        prev->sonraki = prev->sonraki->sonraki;
    }
    delete sil;
    boyut--;
}

SayilarListesi::~SayilarListesi() 
{
    
}