//
// Created by OEM on 06/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSONLIST_H
#define MY_PROJECT_NAME_PERSONLIST_H

#endif //MY_PROJECT_NAME_PERSONLIST_H
#include "Person.h"
#include <vector>
#include "ISaveTexPerson.h"
#include "ISaveBinaryPerson.h"

class PersonList: public ISaveTexPerson, public ISaveBinaryPerson{
public:
    vector<Person>personList;

    PersonList();

    PersonList(const vector<Person> &personList);

    const vector<Person> &getPersonList() const;

    void setPersonList(const vector<Person> &personList);

    string toString();

    void inset(Person person);

    string saveDataTex() override;

    string saveDataBinary() override;
};