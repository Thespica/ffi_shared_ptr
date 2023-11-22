package com.alibaba.ffi_shared_ptr;

import com.alibaba.fastffi.CXXHead;
import com.alibaba.fastffi.CXXPointer;
import com.alibaba.fastffi.CXXValue;
import com.alibaba.fastffi.FFIGen;
import com.alibaba.fastffi.FFILibrary;
import com.alibaba.fastffi.FFINameAlias;
import com.alibaba.fastffi.FFITypeAlias;

@FFIGen()
@CXXHead("clz.h")
@FFITypeAlias("Clz")
public interface Clz extends CXXPointer {
}
