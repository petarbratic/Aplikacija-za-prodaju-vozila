#ifndef MARKA_HPP_INCLUDED
#define MARKA_HPP_INCLUDED

class Marka{
    protected:

        int godOsnivanja;
        std::string zemljaOdakleJe;
    public:
        std::string nazivMarke;
        Marka (std::string n, int g, std::string z){
            nazivMarke=n;
            godOsnivanja=g;
            zemljaOdakleJe=z;
        }
        void ispisiMarka (){
            std::cout <<"Marka: "<< nazivMarke << std::endl;
            std::cout <<"Godina osnivanja: "<< godOsnivanja << std::endl;
            std::cout <<"Drzava proizvodnje: "<< zemljaOdakleJe << std::endl;
        }
        string getnazivMarke(){return nazivMarke;}
};

#endif // MARKA_HPP_INCLUDED
