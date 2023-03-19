#include "Molecule.h"

using namespace std;

Molecule::Molecule(vector<Atom> atoms, vector<vector<double>> energies) :
    atoms(atoms), energy_array(energies) {}

vector<Atom> atoms;
vector<vector<double>> energy_array;

void add_atom(Atom atom) {
    atoms.push_back(atom);
}

vector<Atom> Molecule::get_atoms() {
    return atoms;
}

vector<vector<double>> Molecule::get_energies() {
    return energy_array;
}

int Molecule::get_num_of_bonds() {
    int count = 0;
    for (int i = 0; i < atoms.size(); ++i) {
        for (int j = i + 1; j < atoms.size(); ++j) {
            if (energy_array[i][j] > 0.0) {
                count++;
            }
        }
    }
    return count;
}

int Molecule::get_num_atoms_of_type(string type) {
    int count = 0;
    for (Atom& atom : atoms) {
        if (type == atom.get_type()) {
            count++;
        }
    }
    return count;
}

double Molecule::get_energy() {
    double energy = 0.0;
    for (int i = 0; i < atoms.size(); ++i) {
        for (int j = i + 1; j < atoms.size(); ++j) {
            energy = energy + energy_array[i][j];
        }
    }
    return energy;
}

double Molecule::get_mass() {
    double mass = 0.0;
    for (Atom& atom : atoms) {
        mass = mass + atom.get_mass();
    }
    return mass;
}