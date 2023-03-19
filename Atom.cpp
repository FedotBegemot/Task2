#include "Atom.h"

using namespace std;

Atom::Atom(int p_num, int n_num, int e_num, int atomic_number, string type):
    protons(p_num), neutrons(n_num), electrons(e_num), atomic_number(atomic_number), type(type){}

const double electron_mass = 0.00054858;
const double neutron_mass = 1.008665;
const double proton_mass = 1.007276;

int electrons;
int protons;
int neutrons;
int atomic_number;
int mass = (protons * proton_mass) + (neutrons * neutron_mass) + (electrons * electron_mass);

string type;

string Atom::get_type() {
    return type;
};

int Atom::get_atomic_number() {
    return atomic_number;
}

double Atom::get_mass() {
    return mass;
}

int Atom::get_protons() {
    return protons;
}

int Atom::get_neutrons() {
    return neutrons;
}

int Atom::get_electrons() {
    return electrons;
}