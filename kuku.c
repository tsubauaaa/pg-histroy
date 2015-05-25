#include <stdio.h>

int
main()
{
  int a,b,c;

  for (a = 1; a <= 9; a++) {
    for (b = 1; b <= 9; b++) {
//     printf("%d x %d = %d\n", a, b, a*b);
      c = a * b;
      printf("%6d",c);
   }
    printf("\n");
 }
}
