#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED

enum Karoserija {LIMUZINA, KARAVAN, HECBEK, SUV};
class Skoljka{
    private:
        string boja; /// ovo je ok
        Karoserija karoserija;
        ///string karoserija; // primer: limuzina (sedan), karavan, hecbek, SUV
        string materijal; /// ako imas neke materijale na umu nek bude enum sa par nabrojivih vrednosti
        /// (kao gore kao sto sam ja uradila sa karoserijom)
};

#endif // SKOLJKA_HPP_INCLUDED
