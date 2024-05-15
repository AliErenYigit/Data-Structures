/* 
* Dosya Adi:YoneticiListesi.cpp
* YoneticiListelerini icindeki verilerle olusturan fonksiyonların kaynak dosyasi
* 3.sinif 1-A Sinifi
* 1.Odev
* 17/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit ==>eren.yigit@ogr.sakarya.edu.tr
*/

#include "YoneticiListesi.hpp"

YoneticiDugum* YoneticiListesi::oncekiKonumuBul(int index)
 {
    if (index < 0 || index > boyut) ;
    YoneticiDugum *oncekisi = ilk;
    int i = 1;
    for (YoneticiDugum *itr = ilk; itr->sonraki != NULL && i != index; itr = itr->sonraki, i++)
    {
        oncekisi = oncekisi->sonraki;
    }
    return oncekisi;
}

YoneticiDugum* YoneticiListesi::BulKonumu(int index) 
{
    if (index < 0 || index >= boyut) ;
    return this->oncekiKonumuBul(index + 1);

}

YoneticiListesi::YoneticiListesi() 
{
    ilk = NULL;
    boyut = 0;
}

int YoneticiListesi::boyutu()const 
{
    return boyut;
}

bool YoneticiListesi::bosmu()const 
{
    return boyut == 0;
}

void YoneticiListesi::ekle(Sayi*& oge) 
{
    arayaEkle(boyut, oge);
}

void YoneticiListesi::arayaEkle(int index, Sayi*& oge) 
{
    if (index < 0 || index > boyut)
     throw "Index Out of Range!!";
    if (index == 0) 
    {
        ilk = new YoneticiDugum(oge, ilk);
        if (ilk->sonraki != NULL) ilk->sonraki->onceki = ilk;
    } 
    else 
    {
        YoneticiDugum *oncekisi = oncekiKonumuBul(index);
        oncekisi->sonraki = new YoneticiDugum(oge, oncekisi->sonraki, oncekisi);
        if (oncekisi->sonraki->sonraki != NULL)
        {
            oncekisi->sonraki->sonraki->onceki = oncekisi->sonraki;
        }
            
    }
    boyut++;
}

Sayi*& YoneticiListesi::ilki() 
{
    if (bosmu()) ;
    return ilk->veri;
}

Sayi*& YoneticiListesi::sonuncusu() 
{
    if (bosmu()) ;
    return oncekiKonumuBul(boyut)->veri;
}

int YoneticiListesi::indexOf(Sayi*& oge) 
{
    int index = 0;
    for (YoneticiDugum *itr = ilk; itr != NULL; itr = itr->sonraki) 
    {
        if (itr->veri == oge) return index;
        index++;
    }
    ;
}

void YoneticiListesi::cikar(Sayi*& oge) 
{
    int index = indexOf(oge);
    aradanKaldir(index);
}

void YoneticiListesi::aradanKaldir(int index) 
{
    if (index < 0 || index >= boyut) throw "Index Out of Range!!";
    YoneticiDugum *sil;
    if (index == 0) 
    {
        sil = ilk;
        ilk = ilk->sonraki;
        if (ilk != NULL) ilk->onceki = NULL;
    } 
    else 
    {
        YoneticiDugum *oncekisi = oncekiKonumuBul(index);
        sil = oncekisi->sonraki;
        oncekisi->sonraki = sil->sonraki;
        if (sil->sonraki != NULL)
            sil->sonraki->onceki = oncekisi;
    }
    boyut--;
    delete sil;
}

void YoneticiListesi::tersYap() 
{
    for (YoneticiDugum *itr = ilk; itr != NULL;) 
    {
        YoneticiDugum *gec = itr->sonraki;
        itr->sonraki = itr->onceki;
        itr->onceki = gec;
        if (gec == NULL) 
        {
            ilk = itr;
            break;
        }
        itr = gec;
    }
}

Sayi*& YoneticiListesi::elementAt(int index) 
{
    if (index < 0 || index >= boyut) ;
    if (index == 0) return ilk->veri;
    return oncekiKonumuBul(index)->sonraki->veri;
}

void YoneticiListesi::temizle() 
{
    while (!bosmu())
        aradanKaldir(0);
}

YoneticiListesi::~YoneticiListesi() 
{
    temizle();
}