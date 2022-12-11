#include "Liste.hpp"
#include<iomanip>

Liste::Liste()
{
    ilk=0;

    oncekiListe=0;

    sonrakiListe=0;
    
   ortalama=0;
    

}


Liste::~Liste()
{   
     
    Dugum* gec=ilk;

    while(gec!=0)
    {
        Dugum* silincek=gec;
        

        gec=gec->sonraki;
        delete silincek;
    }
   
}

void Liste::ortalma_al(float ortalma_verisi)
{
    ortalama=ortalma_verisi;
}

void Liste::ekle(int veri)
{
    Dugum* yeniDugum=new Dugum(veri);
    if(ilk==0)
    {
        
       ilk=yeniDugum;


        
    }

    else
    {

        Dugum* gec;

        gec=ilk;

        while(gec->sonraki!=0)
        {
            gec=gec->sonraki;

        }
        gec->sonraki=yeniDugum;
        yeniDugum->onceki=gec;
         

    }



   

}



void Liste::yazdir()
{
    Dugum* gec1=ilk;

    while(gec1!=0)
    {
        cout<<setw(2)<<"|"<<gec1->veri<<"|";

        gec1=gec1->sonraki;
    }

    


}

void Liste::cikar() 
{
    Dugum* gec;

    if(ilk==0)
    return;


    if(ilk->sonraki==0)
    {
        delete ilk;
        ilk=0;

    }   


    else 
    {
        Dugum* gec=ilk;
        

        while(gec->sonraki->sonraki!=0)
        {
            gec=gec->sonraki;

        }   
            delete gec->sonraki;

            gec->sonraki=0;

       

       

    
    } 
    
    
}




