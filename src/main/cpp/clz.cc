#include <iostream>
#include <memory>

#include "clz.h"

Clz::Clz() {
    std::cout << "Clz()" << std::endl;
}

Clz::Clz(const Clz& rhs) {
    std::cout << "Clz(const Clz& other)" << std::endl;
}

Clz& Clz::operator=(const Clz& rhs) {
    std::cout << "Clz& Clz::operator=(const Clz& other)" << std::endl;
    return *this;
}

Clz::~Clz() {
    std::cout << "~Clz()" << std::endl;
}

void Clz::print() {
    std::cout << "Clz::print()" << std::endl;
}

std::shared_ptr<Clz> factory_func() {
    return std::make_shared<Clz>();
}