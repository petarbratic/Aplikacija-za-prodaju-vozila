#ifndef IZLOGAUTOMOBILA_HPP_INCLUDED
#define IZLOGAUTOMOBILA_HPP_INCLUDED
#include "Automobil.hpp"
#include <vector>
using namespace std;
enum lokacija {BEOGRAD, NOVI_SAD};
class IzlogAutomobila {
private:
    lokacija lokacijaIzloga;
    vector<Automobil*> automobili;
public:
    IzlogAutomobila (lokacija loc){
        lokacijaIzloga=loc;
    }
    void dodaj(Automobil* a){
        automobili.push_back(a);
    }
    void ispisiAutomobile(){
        switch (lokacijaIzloga){
            case 0:
                cout<<"Lokacija ovog izloga je Beograd."<<endl;break;
            case 1:
                cout<<"Lokacija ovog izloga je Novi Sad"<<endl;

        }
        cout<<"Broj automobila na izlogu je: "<<automobili.size()<<endl;
        cout<<"Na njemu su u ponudi sledeci automobili: "<<endl<<endl;
        for(auto it=automobili.begin(); it<automobili.end(); it++){
            (*it)->ispisiAutomobil();
        }
    }
    // int kolikoJeAutomobila(){return automobili.size();}
    bool izbaci (int iid){
        for(auto it=automobili.begin(); it<automobili.end(); it++){
            if(iid==(*it)->getid()){
                automobili.erase(it);
                return true;
            }
        }
        return false;
    }
   void pretragaPoMarki(string mmarka){
        int x;
        for(auto it=automobili.begin(); it<automobili.end(); it++){
            x=((*it)->getmarka()).compare(mmarka);
            if (x==0){
                (*it)->ispisiAutomobil();
            }

        }
   }


};


#endif // IZLOGAUTOMOBILA_HPP_INCLUDED
