//
// Created by OEM on 05/10/2020.
//

#ifndef MY_PROJECT_NAME_ISAVETEXPERSON_H
#define MY_PROJECT_NAME_ISAVETEXPERSON_H

#include <sstream>
using namespace std;

class ISaveTexPerson
{
public:
    virtual ~ISaveTexPerson();

    virtual string saveDataTex() = 0;
};

#endif //MY_PROJECT_NAME_ISAVETEXPERSON_H