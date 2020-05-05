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
        std::cout << klima << std::endl;
        std::cout << navigacija << std::endl;
    }

};

#endif // OPREMA_HPP_INCLUDED
