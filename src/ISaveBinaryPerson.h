//
// Created by OEM on 06/10/2020.
//

#ifndef MY_PROJECT_NAME_ISAVEBINARYPERSON_H
#define MY_PROJECT_NAME_ISAVEBINARYPERSON_H

#endif //MY_PROJECT_NAME_ISAVEBINARYPERSON_H

#include <sstream>
using namespace std;

class ISaveBinaryPerson
{
public:
    virtual ~ISaveBinaryPerson();

    virtual string saveDataBinary() = 0;
};