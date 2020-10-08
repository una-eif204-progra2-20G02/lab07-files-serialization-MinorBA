//
// Created by OEM on 06/10/2020.
//

#include <vector>
#include "PersonList.h"

PersonList::PersonList() {}

PersonList::PersonList(const vector<Person> &personList) : personList(personList) {}

const vector<Person> &PersonList::getPersonList() const {
    return personList;
}

void PersonList::setPersonList(const vector<Person> &personList) {
    PersonList::personList = personList;
}

string PersonList::toString() {
    ostringstream out;
    for (int i = 0; i < personList.size(); i++)
    {
        out << personList[i].toString();
    }
    return out.str();
}

void PersonList::inset(Person person) {
    personList.push_back(person);
}

string PersonList::saveDataTex() {
    string serialization;
    for (int i = 0; i < personList.size(); i++)
    {
        serialization = personList[i].serialization();
    }
    json jsonPersonas;

    jsonPersonas["Personas"] = {{" Personas: ",serialization}};

    string personasSerializando = jsonPersonas.dump();

    return personasSerializando;
}

string PersonList::saveDataBinary() {
    return string();
}
