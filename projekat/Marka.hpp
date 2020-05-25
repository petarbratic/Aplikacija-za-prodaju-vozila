#ifndef MARKA_HPP_INCLUDED
#define MARKA_HPP_INCLUDED

class Marka{
    protected:

        int godOsnivanja;
        std::string zemljaOdakleJe;
        std::string nazivMarke;
    public:

        Marka (std::string n, int g, std::string z){
            nazivMarke=n;
            godOsnivanja=g;
            zemljaOdakleJe=z;
        }
        void ispisiMarka ()const{
            std::cout <<"Marka: "<< nazivMarke << std::endl;
            std::cout <<"Godina osnivanja: "<< godOsnivanja << std::endl;
            std::cout <<"Drzava proizvodnje: "<< zemljaOdakleJe << std::endl;
        }
        string getnazivMarke()const{return nazivMarke;}
};

#endif // MARKA_HPP_INCLUDED
