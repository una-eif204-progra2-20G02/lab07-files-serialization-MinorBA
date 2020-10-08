//
// Created by OEM on 05/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSONA_H
#define MY_PROJECT_NAME_PERSONA_H

#endif //MY_PROJECT_NAME_PERSONA_H
#include <../lib/nlohmann/json.hpp>
#include <iostream>
#include <sstream>

using namespace std;
using json = nlohmann::json;

class Person
{
private:
    string name;
    int age;
    int id;

public:
    Person();

    Person(const string &name, int age, int id);

    ~Person();

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    int getId() const;

    void setId(int id);

    string toString();

    string serialization() const;

};