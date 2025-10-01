# 0 "fact.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "fact.c"
int fact(int n) {
 if (n < 2) return n;
 return n * fact(n - 1);
}
