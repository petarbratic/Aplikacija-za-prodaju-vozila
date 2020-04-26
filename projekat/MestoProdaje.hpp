#ifndef MESTOPRODAJE_HPP_INCLUDED
#define MESTOPRODAJE_HPP_INCLUDED

class MestoProdaje{
    private:
        string drzava;
        string okrug;
        string grad;
    public:
        MestoProdaje (string dr, string okr, string gr){
            drzava=dr;
            okrug=okr;
            grad=gr;
        }
};

#endif // MESTOPRODAJE_HPP_INCLUDED
