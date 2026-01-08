#include <pybind11/pybind11.h>

std::string greet() {
    return "Hello from C++ (Python Module) 2026!";
}

PYBIND11_MODULE(hello_cpp, m) {
    m.def("greet", &greet, "A function that returns a greeting");
}