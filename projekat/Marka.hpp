#ifndef MARKA_HPP_INCLUDED
#define MARKA_HPP_INCLUDED

class Marka{
    private:
        std::string nazivMarke;
        int godOsnivanja;
        std::string zemljaOdakleJe;
    public:
        Marka (std::string n, int g, std::string z){
            nazivMarke=n;
            godOsnivanja=g;
            zemljaOdakleJe=z;
        }
        void ispisiMarka (){
            std::cout << nazivMarke << std::endl;
            std::cout << godOsnivanja << std::endl;
            std::cout << zemljaOdakleJe << std::endl;
        }
};

#endif // MARKA_HPP_INCLUDED
