#include <omp.h>
#include <iostream>
#include <pybind11/pybind11.h>

template<typename T>
T add(T a, T b) {
    return a + b;
}

PYBIND11_MODULE(package, m) {
    m.def("add", &add<int>, "A function adding two integers");
    m.def("add", &add<float>, "A function adding two floats");
    m.def("add", &add<double>, "A function adding two doubles");
}