#ifndef MOLECULE_H
#define MOLECULE_H
#include <string>
#include <vector>
#include <cmath>
#include "Atom.h"

using namespace std;

class Molecule {

private:
    vector<Atom> atoms;
    vector<vector<double>> energy_array;

public:
    Molecule(vector<Atom> atoms, vector<vector<double>> energies);

    void add_atom(Atom atom) {}

    vector<Atom> get_atoms();

    vector<vector<double>> get_energies();

    int get_num_of_bonds();

    int get_num_atoms_of_type(string type);

    double get_energy();

    double get_mass();
};
#endif // MOLECULE_H