//
// Created by vibhatha on 3/5/20.
//

#include "Info.h"


Info::Info(const std::string &name_) {
    name = name_;
}

void Info::setName(const std::string &name_) {
    name = name_;
}

const std::string &Info::getName() const {
    return name;
}