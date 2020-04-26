#ifndef MENJAC_HPP_INCLUDED
#define MENJAC_HPP_INCLUDED

enum VrtsaMenjaca {MANUELNI, AUTOMATSKI};
class Menjac{
    private:
        VrstaMenjaca vrsta;
        int brojStepenaPrenosa;
    public:
        Menjac (VrstaMenjaca vr, int brojst){
            vrsta=vr;
            brojStepenaPrenosa=brojst;
        }
};

#endif // MENJAC_HPP_INCLUDED
