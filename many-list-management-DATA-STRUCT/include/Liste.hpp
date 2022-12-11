#ifndef Liste_hpp
#define Liste_hpp
#include <Dugum.hpp>
#include<exception>
class Liste
{
    public:
    Liste();
    ~Liste();
    void ekle(int veri);
    void cikar();
    void yazdir();
    
  


  


   

  float ortalama;
  void ortalma_al(float ortalama_Verisi);

    

    Liste* oncekiListe;
    Liste* sonrakiListe;

  //  friend ostream & operator<<(ostream& os,Liste& liste);

  
    Dugum* ilk;

};
#endif