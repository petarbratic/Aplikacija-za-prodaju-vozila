#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED

enum Materijal {CELIK, ALUMINIJUM, KARBON};
enum Karoserija {LIMUZINA, KARAVAN, HECBEK, SUV};
class Skoljka{
    private:
        string boja; /// ovo je ok
        Karoserija karoserija;
        ///string karoserija; // primer: limuzina (sedan), karavan, hecbek, SUV
        Materijal materijal;

};

#endif // SKOLJKA_HPP_INCLUDED
