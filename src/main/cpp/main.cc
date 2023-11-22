#include <iostream>
#include <memory>
#include <new>

#include "clz.h"

int main() {
    /* previous behavior: */

    // java: long rv_base = com.alibaba.fastffi.CXXValueScope.allocate(com.alibaba.ffi_shared_ptr.StdSharedPtr_cxx_0xb6f4b0f2.SIZE));
    void* cxx_value_scope_ptr = malloc(sizeof(std::shared_ptr<Clz>));
    // jni: return reinterpret_cast<jlong>(new((void*)rv_base) std::shared_ptr<Clz>(::factory_func()));
    new (cxx_value_scope_ptr) std::shared_ptr<Clz>(factory_func());
    // java: Unsafe.freeMemory(rv_base);
    free(cxx_value_scope_ptr);

    std::cout << "------------------" << std::endl;

    // long rv_base = com.alibaba.fastffi.CXXValueScope.allocate(com.alibaba.ffi_shared_ptr.StdSharedPtr_cxx_0xb6f4b0f2.SIZE));
    void* cxx_value_scope_ptr2 = malloc(sizeof(std::shared_ptr<Clz>));
    // return reinterpret_cast<jlong>(new((void*)rv_base) std::shared_ptr<Clz>(::factory_func()));
    new (cxx_value_scope_ptr2) std::shared_ptr<Clz>(factory_func());
    // sharedPtr2Clz.get().delete();

    auto shared_ptr_by_constructor = new std::shared_ptr<Clz>();
    shared_ptr_by_constructor->swap(*(std::shared_ptr<Clz>*)cxx_value_scope_ptr2);
    free(cxx_value_scope_ptr2);
    shared_ptr_by_constructor->get()->print();

    delete shared_ptr_by_constructor;
    // Unsafe.freeMemory(rv_base);

    return 0;
}