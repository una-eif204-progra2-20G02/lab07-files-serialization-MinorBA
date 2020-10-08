//
// Created by OEM on 06/10/2020.
//

#include "ISaveTexPerson.h"
#include "ISaveBinaryPerson.h"
#include "PersonManager.h"
#include "PersonList.h"

int main(){
    Person person1 = {"Ned Flanders", 18, 60};
    Person person2 = {"pep", 22, 43};
    Person person3 = {"lucas", 33, 12};

    PersonList *personList;
    personList->inset(person1);
    personList->inset(person2);
    personList->inset(person3);

    ISaveTexPerson* personTex = personList;
    ISaveBinaryPerson* personBinary = personList;

    PersonManager manager;
    manager.saveText(personTex);
    manager.saveBinary(personBinary);
    manager.loadBinary(personBinary);

    return 0;
}