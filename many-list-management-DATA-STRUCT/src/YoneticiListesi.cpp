#include<YoneticiListesi.hpp>
#include<iomanip>

    //2 yönlü bagli liste foramtı oluşturluyor fakat fromat olarak düğüm adresi yerine liste adresi alıyoruz...

YonteciListesi::YonteciListesi()
{
    ilk_liste=0;


}


void YonteciListesi::Liste_ekle(Liste* gonderilen_liste )
{
    if(ilk_liste==0)
    {
        ilk_liste=gonderilen_liste;
    }
    else{
        Liste* gec=ilk_liste;

        while(gec->sonrakiListe!=0)
        {
            gec=gec->sonrakiListe;

        }

        gec->sonrakiListe=gonderilen_liste;
        gonderilen_liste->oncekiListe=gec;

    }



}



void YonteciListesi::yazdirYonetici()           //ekrana gcici denen liste eleamnı tanımlanarak düğümler gezilerek çıktı veriliyor....
{
    
    
  
    Liste* gec;
     
    gec=ilk_liste;
    while(gec!=0)
    {
        
        
           
        cout<<"Dugumun adresi:         "<<gec<<endl<<setw(33)<<"----------"<<endl;
          cout<<"Onceki Dugumun adresi: "<<"|"<<gec->oncekiListe<<"|"<<endl
          <<setw(33)<<"----------"<<endl
          <<"Satir Listesi ort"<<setw(7)<<"|"<<setw(5)<<gec->ortalama<<"    |";
          cout<<"   Satir listesi dugumleri->  ";    gec->yazdir();

          cout<<endl;
          



            




          cout<<setw(33)<<"----------"<<endl
          <<"Sonraki Dugum Adresi:"<<"  |"<<gec->sonrakiListe<<"|"<<endl
           <<"----------"<<endl;


          cout<<endl<<endl;
             gec=gec->sonrakiListe;
    }


}














