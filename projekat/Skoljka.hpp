#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED

enum Materijal {CELIK, ALUMINIJUM, KARBON};
enum Karoserija {LIMUZINA, KARAVAN, HECBEK, SUV};
class Skoljka{
    private:
        string boja;
        Karoserija karoserija;
        // primer: limuzina (sedan), karavan, hecbek, SUV
        Materijal materijal;
    public:
        Skoljka (string b, Karoserija kar, Materijal m){
            boja=b;
            karoserija=kar;
            materijal=m;
        }
};

#endif // SKOLJKA_HPP_INCLUDED
