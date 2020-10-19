//
// Created by OEM on 19/10/2020.
//

#ifndef MY_PROJECT_NAME_FILEMANAGER_H
#define MY_PROJECT_NAME_FILEMANAGER_H

#include "../lib/nlohmann/json.hpp"
#include <string>
#include "ISaveTexPerson.h"


using namespace std;
using nlohmann::json;

class FileManager: ISaveTexPerson {
public:
    static string serialize(const vector<Person>& _personList);
    static vector<Person> deserialize(const string& _data);
    string saveDataTex(const vector<Person>& _personList) override;
};
#endif //MY_PROJECT_NAME_FILEMANAGER_H