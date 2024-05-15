/* 
* Dosya Adi:Sayi.cpp
* SayiListelerini içindeki veriler ile  olusturan fonksiyonların kaynak dosyasi
* 3.sinif 1-A Sinifi
* 1.Odev
* 11/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit ==> eren.yigit@ogr.sakarya.edu.tr
*/

#include "Basamak.hpp"
#include "Sayi.hpp"

Basamak* Sayi::OncekiBul(int index) 
{
    if (index < 0 || index > boyut) ;
    Basamak *oncekisi = ilk;
    int i = 1;
    for (Basamak*itr = ilk; itr->sonraki != NULL && i != index; itr = itr->sonraki, i++) 
    {
        oncekisi = oncekisi->sonraki;
    }
    return oncekisi;
}


Sayi::Sayi() 
{
    ilk = NULL;
    boyut = 0;
}

int Sayi::boyutt()const 
{
    return boyut;
}

bool Sayi::bosmu()const 
{
    return boyut == 0;
}

void Sayi::ekle(int sayiDegeri) 
{   
    Basamak* yeni = new Basamak(sayiDegeri);

    if (ilk == nullptr)
    {
        ilk = yeni;
    }
    else{
        Basamak* gec = ilk;
        while (gec->sonraki != NULL)
        {
            gec = gec->sonraki;
        }
        gec->sonraki = yeni;
    }
    boyut++;
}

/* void Sayi::arayaEkle(int index, const int& oge) 
{
    if (index < 0 || index > boyut) throw "Index Out of Range!!";
    if (index == 0) {
        ilk = new Basamak(oge, ilk);
        if (ilk->sonraki != NULL) ilk->sonraki->onceki = ilk;
    } else {
        Basamak *oncekisi = OncekiBul(index);
        oncekisi->sonraki = new Basamak(oge, oncekisi->sonraki, oncekisi);
        if (oncekisi->sonraki->sonraki != NULL)
            oncekisi->sonraki->sonraki->onceki = oncekisi->sonraki;
    }
    boyut++;
} */

const int& Sayi::ilki() 
{
    if (bosmu()) ;
    return ilk->veri;
}

const int& Sayi::sonuncusu() 
{
    if (bosmu()) ;
    return OncekiBul(boyut)->veri;
}

int Sayi::indexOf(const int& oge) 
{
    int index = 0;
    for (Basamak *itr = ilk; itr != NULL; itr = itr->sonraki) 
    {
        if (itr->veri == oge) return index;
        index++;
    }
    ;
}

void Sayi::ogeCikar(const int& oge) 
{
    int index = indexOf(oge);
    removeAt(index);
}

void Sayi::removeAt(int index){
    if(boyut == 0) throw "Empty list";
    Basamak *sil;
    if(index == 0){
        sil = ilk;
        ilk = ilk->sonraki;
    }
    else{
        Basamak *prev = OncekiBul(index);
        sil = prev->sonraki;
        prev->sonraki = prev->sonraki->sonraki;
    }
    delete sil;
    boyut--;
}

/* void Sayi::removeAt(int index) 
{
    if (index < 0 || index >= boyut) throw "Index Out of Range!!";
    Basamak *sil;
    if (index == 0) {
        sil = ilk;
        ilk = ilk->sonraki;
        if (ilk != NULL) ilk->sonraki = NULL;
    } else {
        Basamak *oncekisi = OncekiBul(index);
        sil = oncekisi->sonraki;
        oncekisi->sonraki = sil->sonraki;
        if (sil->sonraki != NULL)
            sil->sonraki->onceki = oncekisi;
    }
    boyut--;
    delete sil;
} */

/* 

void Sayi::tersi() 
{
    for (Basamak *itr = ilk; itr != NULL;) 
    {
        Basamak *gec = itr->sonraki;
        itr->sonraki = itr->onceki;
        itr->onceki = gec;
        if (gec == NULL) 
        {
            ilk = itr;
            break;
        }
        itr = gec;
    }
} */

Basamak* Sayi::dugumGetir(int index){
    if(index == 0) return ilk;
    
    Basamak* gec = ilk;
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


const int& Sayi::elementAt(int index) 
{
    //return ilk->veri;
    if (index < 0 || index >= boyut) ;

    if (index == 0) return ilk->veri;
    return OncekiBul(index)->sonraki->veri;
}

void Sayi::temizle() {
    while (!bosmu())
        removeAt(0);
}

ostream& operator <<(ostream& os, Sayi& sag) 
{

    for (Basamak *itr = sag.ilk; itr != NULL; itr = itr->sonraki) 
    {
        
        os<<" "<<itr<<"\n";
       
        os<<"----------\n";
        os<<"|"<<setw(5)<<itr->veri<<setw(4)<<"|"<<endl;
        os<<"----------\n";
        os<<"|"<<itr->sonraki<<setw(2)<<"|\n";
        os<<"----------\n\n";
    }
    os << endl;
    return os;
}

void Sayi::yazdirTersDugum(int index) 
{
    if (index < 0 || index >= boyut) ;

    for (Basamak *itr = OncekiBul(index + 1); itr != NULL; itr = itr->sonraki) 
    {
        
        cout << itr->veri << " <----> ";
    }
    cout << endl;
}


void Sayi::yazdirTersSirayi() 
{
    yazdirTersDugum(boyut - 1);
}

/* void Sayi::SayiYazdir(int x,int y)
{
    int yIndex=0; 

    KonsolPozisyon.gotoxy(x,yIndex);
     
     for (Basamak *itr = this->ilk; itr != NULL; itr = itr->sonraki) 
     {
      cout<<"###########\n";
        KonsolPozisyon.gotoxy(x,++yIndex);
        cout<<"#"<<itr<<"\n"<<"";
        

        KonsolPozisyon.gotoxy(x,++yIndex);
        cout<<"#---------#\n";
        

        KonsolPozisyon.gotoxy(x,++yIndex);
        cout<<"#"<<setw(5)<<itr->veri<<setw(5)<<"#"<<endl;
         
        KonsolPozisyon.gotoxy(x,++yIndex);
        cout<<"###########\n";
        
        
      

      
    }
   
}
 */



Sayi::~Sayi() 
{
    temizle();
}