# Play with GNU toolchain

## GCC as driver
* gcc --verbose fact.c

## GCC as compiler

### GCC frontend
* clang -cc1 -ast-view fact.c
* sudo apt install gv
* sudo apt install graphviz
* /home/chansons/Tools/Compilers/llvm-project/build/bin/clang -Xclang -ast-dump fact.c > fact.ast
