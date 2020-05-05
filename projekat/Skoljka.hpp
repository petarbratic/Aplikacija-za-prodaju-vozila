#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED

enum Materijal {CELIK, ALUMINIJUM, KARBON};
enum Karoserija {LIMUZINA, KARAVAN, HECBEK, SUV, KABRIOLET};
class Skoljka{
    private:
        std::string boja;
        Karoserija karoserija;
        Materijal materijal;
    public:
        Skoljka (std::string b, Karoserija kar, Materijal m){
            boja=b;
            karoserija=kar;
            materijal=m;
        }
        bool Prepravi (){
            if (karoserija!=KABRIOLET){  // mislio sam na nešto ovako https://www.youtube.com/watch?v=qm50TgVi0c4
                karoserija=KABRIOLET;    // rezultat se vidi na 3:17
                return true;
            }
            return false;
        }
};

#endif // SKOLJKA_HPP_INCLUDED
