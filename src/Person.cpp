#include <string>
#include "Person.h"

//
// Created by OEM on 05/10/2020.
//

Person::Person() {}

Person::Person(const std::basic_string<char, std::char_traits<char>, std::allocator<char>> &name, int age, int id)
        : name(name), age(age), id(id) {}

Person::~Person() {

}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

int Person::getId() const {
    return id;
}

void Person::setId(int id) {
    Person::id = id;
}

string Person::serialization() const {
    json jsonPersona;
    jsonPersona["nombre"] = getName();
    jsonPersona["edad"] = getAge();
    jsonPersona["id"] = getId();

    string personaSerializado = jsonPersona.dump(4);

    return personaSerializado;
}



string Person::toString() {
    ostringstream output;
    output << "Name: " << getName() << endl;
    output << "Age: " << getAge() << endl;
    output << "Identification: " << getId() << endl;

    return output.str();
}





