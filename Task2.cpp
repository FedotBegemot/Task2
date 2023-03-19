#include <iostream>
#include "Atom.h"
#include "Molecule.h"

using namespace std;

int main(int argc, char** argv) {

    setlocale(0, "");
    system("cls");

    Atom atom1(1, 2, 6, 51, "helium");
    Atom atom2(4, 6, 12, 78, "lithium");
    Atom atom3(9, 10, 2, 5, "oxygen");
    Atom atom4(20, 15, 16, 120, "aurum");
    Atom atom5(2, 4, 11, 42, "hydrogen");
    Atom atom6(4, 6, 12, 78, "lithium");

    string type = "lithium";

    vector<Atom> atoms = { atom1, atom2, atom3, atom4, atom5, atom6 };
    vector<vector<double>> energies{ {0.0, 4.3, 6.6, 8.1, 5.5, 5.8},
                                          {2.1, 0.0, 7.8, 3.1, 3.3, 5.9},
                                          {3.2, 2.1, 0.0, 1.1, 3.6, 6.8},
                                          {4.3, 5.1, 2.2, 0.0, 5.2, 7.1},
                                          {5.4, 6.1, 5.2, 4.1, 0.0, 3.2}, 
                                          {6.5, 1.1, 7.2, 2.5, 5.6, 0.0} };
    Molecule molecule(atoms, energies);
    //molecule.add_atom(atom2);
    //molecule.add_atom(atom3);
    //molecule.add_atom(atom4);
    //molecule.add_atom(atom5);
    //molecule.add_atom(atom6);

    cout << "Состав молекулы: " << endl;
        for (Atom& atom : molecule.get_atoms()) {
        cout << atom.get_type() << " (масса протонов, нейтронов и электронов = " << atom.get_mass() << ")" << endl;
    }
        cout << "\nОбщая масса молекулы = " << molecule.get_mass();
    cout << "\nКоличество связей в молекуле: " << molecule.get_num_of_bonds();
    cout << "\nОбщая энергия взаимодействия атомов = " << molecule.get_energy()<< endl;

    cout << "\nНаиболее встречающийся атом в молекуле: "<< type;
    cout << "\nКол-во атомов типa = " << molecule.get_num_atoms_of_type(type);
    cout << "\nМасса протонов, нейтронов и электронов = " << atom2.get_mass();

    cout << endl;
}