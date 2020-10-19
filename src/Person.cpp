#include <string>
#include "Person.h"

//
// Created by OEM on 05/10/2020.
//

Person::Person() = default;

Person::Person(const std::basic_string<char, std::char_traits<char>, std::allocator<char>> &name, int age, int id)
        : name(name), age(age), id(id) {}

Person::~Person() = default;

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

string Person::toString() {
    ostringstream output;
    output << "Name: " << getName()
    << ", Age: " << getAge() <<
    ", Identification: " << getId() << endl;

    return output.str();
}





