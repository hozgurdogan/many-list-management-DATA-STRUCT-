#include "Liste.hpp"


class YonteciListesi{

    public: 

    YonteciListesi();
    ~YonteciListesi();


    Liste* ilk_liste;

    Liste* Onceki_liste;

    Liste* Soraki_liste;


    void yazdirYonetici();

    void Liste_ekle(Liste* gonderilen_liste);




};