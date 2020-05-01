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

};

#endif // OPREMA_HPP_INCLUDED
