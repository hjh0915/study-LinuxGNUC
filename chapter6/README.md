预编译（生成main.i文件）
====================
>>> gcc -E main.c -o main.i

编译（生成main.s文件）
===================
>>> gcc -S main.i -o main.s

汇编（生成main.o文件）
===================
>>> gcc -c main.c
或
>>> gcc -c main.s -o main.o

链接（生成可执行文件）
==================
>>> gcc main.o -o main
或
>>> gcc main.c -c main

查看进程启动时的工作目录
====================
>>> pwd
>>> ls -l main
>>> /home/hjh/study-LinuxGNUC/chapter6/build/main &

查看所有的资源限制情况
===================
>>> ulimit -a

ptrace跟踪进程
=============
只能是对一个进程展开的，如果需要对多个进程进行跟踪则各自都需要启动跟踪

跟踪HelloWorld的系统调用
----------------------
>>> 文件名 HelloWorld > HelloWorld.output

strace跟踪HelloWorld的系统调用情况
--------------------------------
>>> strace -i HelloWorld > HelloWorld.output

strace跟踪lsof的运行
-------------------
>>> gcc testlsof.c -o testlsof
>>> ./testlsof &
23415
>>> strace -o lsof.strace lsof -p 23415

查看/proc/23415/fd目录下的文件
============================
>>> ls -l /proc/23415/fd

ltrace
======
通过ptrace连接到被跟踪进程，找到被跟踪进程的PLT，并用ptrace的PTRACE_POKETEXT将所有的库函数对应

*注意：ltrace截获的是C语言库中对系统调用进行封装的函数，而strace是利用内核代码截获系统调用*

吐核现象
=======
例子：coredump-demo.c

查看吐核文件格式
--------------
>>> cat /proc/sys/kernel/core_pattern