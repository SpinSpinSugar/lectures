
;; Function fact (fact, funcdef_no=23, decl_uid=2546, cgraph_uid=24, symbol_order=23)

int fact (int n)
{
  int D.2553;

  if (n <= 1) goto <D.2551>; else goto <D.2552>;
  <D.2551>:
  D.2553 = n;
  // predicted unlikely by early return (on trees) predictor.
  goto <D.2554>;
  <D.2552>:
  _1 = n + -1;
  _2 = fact (_1);
  D.2553 = n * _2;
  goto <D.2554>;
  <D.2554>:
  return D.2553;
}



;; Function main (main, funcdef_no=24, decl_uid=2548, cgraph_uid=25, symbol_order=24)

int main ()
{
  int D.2555;

  _1 = fact (10);
  printf ("%d\n", _1);
  D.2555 = 0;
  goto <D.2556>;
  D.2555 = 0;
  goto <D.2556>;
  <D.2556>:
  return D.2555;
}



;; Function printf (<unset-asm-name>, funcdef_no=15, decl_uid=964, cgraph_uid=16, symbol_order=15)

__attribute__((artificial, gnu_inline, always_inline))
__attribute__((nonnull (1), format (printf, 1, 2)))
int printf (const char * restrict __fmt)
{
  int D.2557;

  D.2557 = __printf_chk (1, __fmt, __builtin_va_arg_pack ());
  goto <D.2558>;
  <D.2558>:
  return D.2557;
}


