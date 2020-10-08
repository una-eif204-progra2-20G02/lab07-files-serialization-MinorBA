//
// Created by OEM on 05/10/2020.
//
#include <iomanip>
#include <fstream>
#include "PersonManager.h"

void PersonManager::saveText(ISaveTexPerson* savePerson) {
    ofstream archivo;
    try { archivo.open("ArchivoTexto.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    archivo << savePerson << '\n';
}

string PersonManager::readText() {
    ifstream archivo;
    string texto;
    try { archivo.open("ArchivoTexto.json", ios::in); }
    catch (std::ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    cout << endl;
    while (!archivo.eof()) {
        getline(archivo, texto);
        cout << texto << endl;
    }
    archivo.close();
}

void PersonManager::saveBinary(ISaveBinaryPerson* savePerson) {
    ofstream archivo;

    try { archivo.open("ArchivoBinario.dat", ios::app | ios::binary); }

    catch (std::ifstream::failure a) { cout << "no se pudo abrir el archivo"; }

    archivo.write((char *) &savePerson, sizeof(ISaveBinaryPerson));

    archivo.close();

}

void PersonManager::loadBinary(ISaveBinaryPerson* savePerson) {
    ifstream archivo;

    try { archivo.open("ArchivoBinario.dat", ios::in | ios::binary); }

    catch (std::ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    archivo.read((char *) &savePerson, sizeof(ISaveBinaryPerson));

    archivo.close();
}

