#ifndef IZLOG_HPP_INCLUDED
#define IZLOG_HPP_INCLUDED
#include "Automobil.hpp"
#include "Kamion.hpp"
#include <vector>
using namespace std;
enum lokacija {BEOGRAD, NOVI_SAD};
class Izlog {
private:
    lokacija lokacijaIzloga;
    vector<Vozilo*> vozila;
public:
    Izlog(lokacija loc){
        lokacijaIzloga=loc;
    }
    void dodaj(Vozilo* v){
        vozila.push_back(v);
    }
    void ispisiVozila(){
        switch (lokacijaIzloga){
            case 0:
                cout<<"Lokacija ovog izloga je Beograd."<<endl;break;
            case 1:
                cout<<"Lokacija ovog izloga je Novi Sad"<<endl;

        }
        cout<<"Broj automobila na izlogu je: "<<vozila.size()<<endl;
        cout<<"Na njemu su u ponudi sledeci automobili: "<<endl<<endl;
        for(auto it=vozila.begin(); it<vozila.end(); it++){
            (*it)->ispisi();
       }
       }

    void ispisiSvaVozila(){
        cout<<"Ukupan broj automobila je: "<<vozila.size()<<endl;
        cout<<"Na njemu su u ponudi sledeci automobili: "<<endl<<endl;
        for(auto it=vozila.begin(); it<vozila.end(); it++){
            (*it)->ispisi();
        }

    }
    // int kolikoJeAutomobila(){return automobili.size();}
    bool izbaci (int iid){
        for(auto it=vozila.begin(); it<vozila.end(); it++){
            if(iid==(*it)->getid()){
                vozila.erase(it);
                return true;
            }
        }
        return false;
    }
   void pretragaPoMarki(string mmarka){
        int x;
        for(auto it=vozila.begin(); it<vozila.end(); it++){
            x=((*it)->getmarka()).compare(mmarka);
            if (x==0){
                (*it)->ispisi();
            }

        }
   }


};


#endif // IZLOG_HPP_INCLUDED




