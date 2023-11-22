# Error log

```
[INFO]      [java] Find another jar:file:/home/john/.m2/repository/com/alibaba/fastffi/llvm/0.1.2/llvm-0.1.2-linux-x86_64.jar!/libl
lvm4jni.so for libllvm4jni.so
[INFO]      [java] Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: 0
[INFO]      [java]      at org.objectweb.asm.Frame.merge(Frame.java:1268)
[INFO]      [java]      at org.objectweb.asm.Frame.merge(Frame.java:1233)
[INFO]      [java]      at org.objectweb.asm.MethodWriter.computeAllFrames(MethodWriter.java:1610)
[INFO]      [java]      at org.objectweb.asm.MethodWriter.visitMaxs(MethodWriter.java:1546)
[INFO]      [java]      at org.objectweb.asm.tree.MethodNode.accept(MethodNode.java:769)
[INFO]      [java]      at org.objectweb.asm.tree.MethodNode.accept(MethodNode.java:649)
[INFO]      [java]      at org.objectweb.asm.tree.ClassNode.accept(ClassNode.java:452)
[INFO]      [java]      at com.alibaba.fastffi.llvm4jni.body.ClassBody.save(ClassBody.java:59)
[INFO]      [java]      at com.alibaba.fastffi.llvm4jni.Universe.save(Universe.java:165)
[INFO]      [java]      at com.alibaba.fastffi.llvm4jni.Main.parseAndGenerate(Main.java:160)
[INFO]      [java]      at com.alibaba.fastffi.llvm4jni.Main.main(Main.java:104)
[INFO]      [java] [INFO] Successfully generate code for Java_com_alibaba_ffi_1shared_1ptr_StdSharedPtr_1cxx_10xb6f4b0f2_nativeDele
te, code size (before optimization=185, after optimization=101), needsStackPointer=false
[INFO]      [java] [INFO] Successfully generate code for Java_com_alibaba_ffi_1shared_1ptr_StdSharedPtr_1cxx_10xb6f4b0f2_nativeGet,
 code size (before optimization=8, after optimization=4), needsStackPointer=false
[INFO]      [java] [INFO] Successfully generate code for Java_com_alibaba_ffi_1shared_1ptr_StdSharedPtr_1cxx_10xb6f4b0f2__1elementSize_00024_00024_00024, code size (before optimization=3, after optimization=3), needsStackPointer=false
[INFO]      [java] [INFO] Save class com/alibaba/ffi_shared_ptr/Clz_cxx_0x10911 into /home/john/ffi_shared_ptr/target/llvm4jni-output/com/alibaba/ffi_shared_ptr/Clz_cxx_0x10911.class
[INFO]      [java] [INFO] Save class com/alibaba/ffi_shared_ptr/StdSharedPtr_cxx_0xb6f4b0f2 into /home/john/ffi_shared_ptr/target/llvm4jni-output/com/alibaba/ffi_shared_ptr/StdSharedPtr_cxx_0xb6f4b0f2.class
[INFO] ------------------------------------------------------------------------
[INFO] BUILD FAILURE
[INFO] ------------------------------------------------------------------------
[INFO] Total time:  15.768 s
[INFO] Finished at: 2023-11-22T21:22:13+08:00
[INFO] ------------------------------------------------------------------------
[ERROR] Failed to execute goal org.apache.maven.plugins:maven-antrun-plugin:3.0.0:run (make-and-link-bitcode) on project gar-java: An Ant BuildException has occured: The following error occurred while executing this line:
[ERROR] /home/john/ffi_shared_ptr/build.xml:53: Java returned: 1
[ERROR] around Ant part ...<ant antfile="/home/john/ffi_shared_ptr/build.xml">... @ 6:56 in /home/john/ffi_shared_ptr/target/antrun/build-main.xml
[ERROR] -> [Help 1]
[ERROR]
[ERROR] To see the full stack trace of the errors, re-run Maven with the -e switch.
[ERROR] Re-run Maven using the -X switch to enable full debug logging.
[ERROR]
[ERROR] For more information about the errors and possible solutions, please read the following articles:
[ERROR] [Help 1] http://cwiki.apache.org/confluence/display/MAVEN/MojoExecutionException
```
