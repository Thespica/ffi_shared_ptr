#ifndef CLZ_H
#define CLZ_H

#include <memory>

struct Clz {
    Clz();

    Clz(const Clz& other);

    Clz& operator=(const Clz& other);

    ~Clz();

    void print();
};

std::shared_ptr<Clz> factory_func();

#endif // CLZ_H
