#ifndef OPREMA_HPP_INCLUDED
#define OPREMA_HPP_INCLUDED

class Oprema{
protected:
    /// protected cemo isto naknadno objasniti
    bool klima;
    bool navigacija;
public:
    Oprema (bool k, bool n){
        klima=k;
        navigacija=n;
    }
    void ispisiOprema (){
        if(klima)
                std::cout <<"Klima: "<< "da" << std::endl;
            else
                std::cout <<"Klima: "<< "ne" << std::endl;
        if(navigacija)
                std::cout <<"Navigacija: "<< "da" << std::endl;
            else
                std::cout <<"Navigacija: "<< "ne" << std::endl;
    }

};

#endif // OPREMA_HPP_INCLUDED
