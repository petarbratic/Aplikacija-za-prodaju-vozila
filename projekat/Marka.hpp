#ifndef MARKA_HPP_INCLUDED
#define MARKA_HPP_INCLUDED

class Marka{
    private:
        string nazivMarke;
        int godOsnivanja;
        string zemljaOdakleJe;
    public:
        Marka (string n, int g, string z){
            nazivMarke=n;
            godOsnivanja=g;
            zemljaOdakleJe=z;
        }
};

#endif // MARKA_HPP_INCLUDED
