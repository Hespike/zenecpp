#include <iostream>
#include <string>

using namespace std;

class Zene {
   string eloado;
   string cim;

public:
   Zene(string eloado, string cim): eloado(eloado), cim(cim) {}

   string get_eloado() {
       return eloado;
   }

   string get_cim() {
       return cim;
   }
};

   Zene zenedoboz(){
   string beolvasotteloado;
   string beolvasottcim;

   cin >> beolvasotteloado;
   cin >> beolvasottcim;
   Zene ujzene(beolvasotteloado,beolvasottcim);
   return ujzene;
};


/*
#include <iostream>
#include <string>

using namespace std;

class Zene {
    string eloado;
    string cim;

public:
    Zene(string eloado, string cim): eloado(eloado), cim(cim) {}

    string get_eloado() {
        return eloado;
    }

    string get_cim() {
        return cim;
    }
};

Zene zenedoboz() {
    string eloado, cim;
    cin >> eloado >> cim;
    Zene z(eloado, cim);
    return z;
}
*/
