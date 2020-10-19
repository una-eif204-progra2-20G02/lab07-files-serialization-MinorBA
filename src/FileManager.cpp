//
// Created by OEM on 19/10/2020.
//

#include "FileManager.h"

void to_json(json &_json, const Person &_person) {
    _json = json{
            {"id",   _person.getId()},
            {"name", _person.getName()},
    };
}

void from_json(const json &_json, Person &_person) {
    _person.setId(_json.at("id").get<int>());
    _person.setName(_json.at("name").get<std::string>());
}


string FileManager::serialize(const vector<Person>& _personList) {
    json jsonData(_personList);
    string jsonArray = jsonData.dump();
    return jsonArray;
}

vector<Person> FileManager::deserialize(const string& _data) {
    json jsonData = json::parse(_data);
    vector<Person> personList = jsonData;

    return personList;
}

string FileManager::saveDataTex(const vector<Person>& _personList)
{
    return serialize(_personList);
}