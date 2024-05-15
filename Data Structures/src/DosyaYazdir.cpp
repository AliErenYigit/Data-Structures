/* 
* Dosya Adi:DosyaYazdir.cpp
* Dosya icindeki verileri yazdiran fonsiyonlar.
* 3.sinif 1-A Sinifi
* 1.Odev
* 23/11/2023(Düzenlemeler yapilmistir)
* Ali Eren Yigit ==> eren.yigit@ogr.sakarya.edu.tr
*/

#include "DosyaYazdir.hpp"

YoneticiListesi* DosyaYazdir::GetFillYoneticiListesi()
{
    readLine();
    YoneticiListesi *gec=new YoneticiListesi();
    int boyut=sayiBoyutu();
    for(int i=0;i<boyut;++i){
        gec->ekle(this->sayi[i]);
    }
    return gec;
    
}

DosyaYazdir::DosyaYazdir(string dosyaAdi) 
{
    this->sayilarListesi = new SayilarListesi();
    this->sayi_ = new Sayi();

    this->dosyaAdi = dosyaAdi;


    int sayiNo = sayiBoyutu();
    this->sayi = new Sayi*[sayiNo];
    for (int i = 0; i < sayiNo; i++) 
    {
    
        this->sayi[i] = new Sayi();
    }
}

int DosyaYazdir::sayiBoyutu() 
{
    int counter = 0;
    ifstream file(this->dosyaAdi);
    string unused;
    while (getline(file, unused))
        ++counter;

    file.close();
    return counter;
}

void DosyaYazdir::readLine() 
{
    string token;
    ifstream file(this->dosyaAdi);
    string str;
    int index = 0;
    while (getline(file, token))
    {
        std::istringstream ss(token);

        while (getline(ss, str, ' ')) 
        {
            this->sayi_ = new Sayi();
            for (size_t i = 0; i < str.length(); i++)
            {
                char basamak = str[i];
                int b = basamak - '0';
                sayi_->ekle(b);
            }
            int sayiDegeri = stoi(str);
            this->sayilarListesi->ekle(sayi_, sayiDegeri);
        }
        index++;

    }
    file.close();
}

DosyaYazdir::~DosyaYazdir()
{
	if(sayi!=0){
		int boyut =sayiBoyutu();
		for (int i = 0; i < boyut; i++)
        {
			if(sayi[i]!=0) delete sayi[i];
		}
		delete[] sayi;
	}
	
}