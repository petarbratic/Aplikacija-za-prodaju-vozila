#ifndef OPREMA_HPP_INCLUDED
#define OPREMA_HPP_INCLUDED

class Oprema{
protected:
    bool klima;
    bool navigacija;
public:
    Oprema (bool k, bool n){
        klima=k;
        navigacija=n;
    }
    virtual void ispisi ()const{
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
