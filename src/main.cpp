//
// Created by OEM on 06/10/2020.
//

#include "ISaveTexPerson.h"
#include "PersonManager.h"

int main(){
    Person person1 = {"Ned Flanders", 18, 60};
    Person person2 = {"pep", 22, 43};
    Person person3 = {"lucas", 33, 12};

    PersonList *personList = new PersonList();
    personList->inset(person1);
    personList->inset(person2);
    personList->inset(person3);

    ISaveTexPerson* personTex = personList;

    PersonManager manager;
    manager.saveText(personTex);
    manager.saveBinary(personList);
    manager.loadBinary(personList);

    return 0;
}