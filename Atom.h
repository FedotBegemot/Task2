#ifndef ATOM_H
#define ATOM_H
#pragma once
#include <string>

using namespace std;

class Atom
{
private:
    const double electron_mass = 0.00054858;
    const double neutron_mass = 1.008665;
    const double proton_mass = 1.007276;
 
    int electrons;
    int protons;
    int neutrons;
    int atomic_number;
    int mass = (protons * proton_mass) + (neutrons * neutron_mass) + (electrons * electron_mass);

	string type;

public:
	Atom(int p_num, int n_num, int e_num, int atomic_number, string type);

    int get_atomic_number();

    string get_type();

    double get_mass();

    int get_protons();

    int get_neutrons();

    int get_electrons();
};
#endif //ATOM_H
