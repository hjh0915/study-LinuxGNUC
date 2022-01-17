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