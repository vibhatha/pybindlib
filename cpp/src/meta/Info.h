//
// Created by vibhatha on 3/5/20.
//

#ifndef PYBINDLIB_INFO_H
#define PYBINDLIB_INFO_H


#include <string>

class Info {
public:
    Info(const std::string &name_);
    void setName(const std::string &name_);
    const std::string &getName() const;
private:
    std::string name;
};

#endif //PYBINDLIB_INFO_H
