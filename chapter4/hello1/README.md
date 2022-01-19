编译、链接生成可执行文件
====================
编译目标文件
----------
>>> gcc -Og -c addvec.c multvec.c

生成静态库
---------
>>> ar rcs libvector.a addvec.o multvec.o

链接使用
-------
>>> gcc -c main-lib.c
>>> gcc main-lib.o libvector.a -o main-lib
>>> ./main-lib

查看main-lib可执行文件中文件头的内容
================================
>>> readelf -h main-lib
类型是DYN
>>> readelf -h main-lib.o
类型是REL

从节表头获得全部节的信息
====================
>>> readelf -S main-lib

可执行头文件
==========
>>> readelf -h build/main-lib

可执行文件的段
============
>>> readelf -l build/main-lib

节名字符串表
==========
>>> readelf -x 27 build/main-lib

查看符号表
=========
>>> nm -s build/main-lib.o

机器码和反汇编
============
>>> objdump -d build/addvec.o