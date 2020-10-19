//
// Created by OEM on 05/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSONA_H
#define MY_PROJECT_NAME_PERSONA_H

#endif //MY_PROJECT_NAME_PERSONA_H
#include <sstream>

using namespace std;

class Person
{
private:
    string name;
    int age{};
    int id{};

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

};