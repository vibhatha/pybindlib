//
// Created by vibhatha on 3/5/20.
//

#include <string>
#include "Record.h"

struct Record {
    Record(const std::string &name, int age) : name(name), age(age) { }

    void set(int age_) { age = age_; }
    void set(const std::string &name_) { name = name_; }

    std::string name;
    int age;
};