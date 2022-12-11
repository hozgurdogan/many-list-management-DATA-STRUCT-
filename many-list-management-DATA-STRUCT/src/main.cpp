/**
* @file Odev1  Main.cpp Liste.cpp Dugum.cpp Yonetici.cpp       g201210020      İsim:    Hasan Özgür Doğan 
* @description  'yönü bağli listeler ve tek yönlü bağli listeler kullanılarak işlevsel bi veri yapsı hazırlamak 
* @course 2.Ogretim C gurubu
* @assignment 1.Ödev
* @date 16.11.2022
* @author    Hasan Ögür Doğan       hasan.dogan10@ogr.sakarya.edu.tr



*/
#include<YoneticiListesi.hpp>



#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;


int main()
{

    

        

      
		    
    
    YonteciListesi* y1=new YonteciListesi();

	  ifstream dosyaoku("veriler.txt");         //verileri okunuyor
    if (!dosyaoku)
    {
        cout << "Error opening output file" << endl;            //gerekli kontroller yapılıyor.
        system("pause");
        return -1;
    }

    const int Satir_sayisi = 100;
    const int Stun_sayisi = 100;
    int satir[Satir_sayisi][Stun_sayisi];

    string geici_string_ifade;          //gerekli tanımlmalar yapılıyor

    int Satir_indexi = 0; 
    int Stun_indexi = 0; 
            int toplam=0;
           double ortalama=0;
    while (!dosyaoku.eof() && Satir_indexi < Satir_sayisi)
    {
        getline(dosyaoku, geici_string_ifade);
        stringstream kaydet(geici_string_ifade); //donusturme islemeleri yapiliyor.
                             
        int  j = 0;
        Liste* l1=new Liste();              //tek bir liste nesnesi ile tüm satirlari alıp yönetici içine atıyoruz....

          
           
        while (kaydet)
        {


            kaydet >> satir[Satir_indexi][j]; 
                if(satir[Satir_indexi][j]>500 )                 //boşta kalan değerele derleyeci rastgele sayı atıyor bunu önlemek için belirli kısıtlamalar giriyoruz...
            {
                continue;
            }

            else if(satir[Satir_indexi][j]<0)
            {
                continue;
            }

            else{
                if(satir[Satir_indexi][j]==0)
                {
                    continue;
                }
                else{
                    l1->ekle(satir[Satir_indexi][j]);


                    toplam=toplam+satir[Satir_indexi][j];

                 ++j;


                     
                }
               
            }

          
           

        }   
            

       Satir_indexi++; 
        if(j!=0)                    //her bir alındıktan sonra  diğer satıra geçmeden içindeki verilerle ve ortalama değei ile yönetici içine atılıyor...
        { 
              ortalama=toplam/j;

            l1->ortalma_al(ortalama);

             y1->Liste_ekle(l1);                //yönetici nesnesine atılıyor


        }

       

         l1=0;                              //bi nevi taşıma görevi gören gören l1 liste nesnesinin içi boşaltılıyor ve üstüne yeni vberiler yazılıyor....
    

       

       toplam=0;                            //yeniden ortalama hesaplamak için gerkli değerler sıfırlanıyor..
       ortalama=0;
      


    
          

    }

   



y1->yazdirYonetici();                       //en sonunda yöneticinin yazdır methodu ile ekrana çıktı sağlıyoruz..

    



}




	