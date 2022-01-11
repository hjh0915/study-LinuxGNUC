hexdump
========
命令行查看文件内容
>>> hexdump -C 文件名.c

预处理
=====
>>> gcc -E 文件名.c
用gcc -E 命令完成预处理的操作并查看输出

编译
====
>>> gcc -S 文件名.c
>>> cat 文件名.s
gcc采用的是AT&T的汇编格式，操作数在最后

objdump
=======
先编译成.o文件
>>> gcc -c 文件名.c
用objdump -d查看经反汇编得到的代码，第一行指出hello.o目标文件格式 elf64-x86-64。
汇编部分是人可读的x86-64汇编程序。

创建静态库
=========
用ar工具生成libvector.a静态库
---------------------------
>>> gcc -Og -c 文件名.c
>>> gcc 文件名.o libvector.a -o 文件名
>>> file 文件名

动态库
=====
>>> gcc -shared -fPIC -o libvector.so 文件名.c
将源代码编译成动态库libvector.so，用file查看可以确定它是共享库，其中-fPIC就是指明生成位置无关代码，-shared指出要生成动态库

生成引用动态库
------------
>>> gcc -o macro-shared 文件名.c libvector.so

用ldd查看动态库引用情况
--------------------
>>> ldd macro-shared
ldd可以查看可执行文件引用了哪些动态库

gcc搜索路径
==========
>>> gcc -print-search-dirs

ldconfig
========
>>> cat /etc/ld.so.conf
>>> ldconfig -p |grep vector

GDB调试
=======
>>> gdb demo-gdb
用gdb启用被调试对象

### 1、用l查看源代码
### 2、用run执行
### 3、用start单步执行
### 4、设置断点-b 行数。断点查看i b；断点删除d 行数
### 5、用i r显示寄存器值
### 6、用p/c i查看数据格式
### 7、用p i查看不同作用域的同名变量
### 8、显示内存单元数据x/4xh 0x400574
### 9、用watch i检测变量i