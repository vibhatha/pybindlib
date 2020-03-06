//
// Created by vibhatha on 3/5/20.
//

#include "../meta/Info.cpp"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(metalib, m) {
    py::class_<Info>(m, "Info")
            .def(py::init<const std::string &>())
            .def("setName", &Info::setName)
            .def("getName", &Info::getName)
            .def_property("name", &Info::getName, &Info::setName);
}