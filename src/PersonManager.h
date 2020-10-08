//
// Created by OEM on 05/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSONMANAGER_H
#define MY_PROJECT_NAME_PERSONMANAGER_H

#endif //MY_PROJECT_NAME_PERSONMANAGER_H

#include <iostream>
#include "ISaveTexPerson.h"
#include "PersonList.h"

using namespace std;
class PersonManager
{
public:
    void saveText(ISaveTexPerson* savePerson);
    string readText();
    void saveBinary(PersonList* savePerson);
    void loadBinary(PersonList* savePerson);
};