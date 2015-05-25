#include <stdio.h>

int
main()
{
 int a;
 int b;

 for (a = 1; a <= 9; a++) {
   for (b = 1; b <= 9; b++) {
     printf("%d x %d = %d\n", a, b, a*b);
   }
 }
}
