package com.alibaba.ffi_shared_ptr;

import com.alibaba.fastffi.CXXValueScope;
import org.junit.Test;

public class ClzTest {
    @Test
    public void test() {
        try (CXXValueScope scope = new CXXValueScope()) {
            StdSharedPtr<Clz> stdSharedPtr = StaticFunctions.INSTANCE.factoryFunc();
        }
    }
}
