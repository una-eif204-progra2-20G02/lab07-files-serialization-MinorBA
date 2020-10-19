//
// Created by OEM on 06/10/2020.
//

#include "ISaveTexPerson.h"
#include "PersonManager.h"

int main(){
    Person person1 = {"Ned Flanders", 18, 60};
    Person person2 = {"pep", 22, 43};
    Person person3 = {"lucas", 33, 12};

    PersonList *personList;
    personList->inset(person1);
    personList->inset(person2);
    personList->inset(person3);

    vector<Person> personList1;
    Person person11 = Person("Mike", 20, 23);
    Person person22 = Person("Carlos",23 ,13);

    personList1.push_back(person11);
    personList1.push_back(person22);


    ISaveTexPerson* personTex;
    personTex->saveDataTex(personList1);

    PersonManager manager;
    manager.saveText(personTex);
    manager.saveBinary(personList);
    manager.loadBinary(personList);

    return 0;
}