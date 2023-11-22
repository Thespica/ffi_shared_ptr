package com.alibaba.ffi_shared_ptr;

import com.alibaba.fastffi.CXXHead;
import com.alibaba.fastffi.CXXReference;
import com.alibaba.fastffi.CXXValue;
import com.alibaba.fastffi.FFIGen;
import com.alibaba.fastffi.FFILibrary;
import com.alibaba.fastffi.FFINameAlias;
import com.alibaba.fastffi.FFITypeAlias;
import com.alibaba.fastffi.FFITypeFactory;
@FFIGen
@CXXHead("clz.h")
@FFILibrary(value = "cmath", namespace = "")
public interface StaticFunctions {
    StaticFunctions INSTANCE = FFITypeFactory.getLibrary(StaticFunctions.class);

    @FFINameAlias("factory_func")
    @CXXValue StdSharedPtr<Clz> factoryFunc();
}
