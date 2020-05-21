#ifndef MENJAC_HPP_INCLUDED
#define MENJAC_HPP_INCLUDED

enum VrstaMenjaca {MANUELNI, AUTOMATSKI};
class Menjac{
    private:
        VrstaMenjaca vrsta;
        int brojStepenaPrenosa;
    public:
        Menjac (VrstaMenjaca vr, int brojst){
            vrsta=vr;
            brojStepenaPrenosa=brojst;
        }
        void ispisiMenjac ()const{
            cout<<"Menjac: ";
            if (vrsta==MANUELNI){
                std::cout << "MANUELNI" << std::endl;}
            if (vrsta==AUTOMATSKI){
                std::cout << "AUTOMATSKI" << std::endl;}
            std::cout <<"Broj stepeni prenosa: "<< brojStepenaPrenosa << std::endl;
        }
};

#endif // MENJAC_HPP_INCLUDED
