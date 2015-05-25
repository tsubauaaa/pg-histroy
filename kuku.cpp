#include <stdio>
int main()
{
  int i,j,x;

  for (i = 1; i <= 9; i++){
    for (j = 1; j <= 9; j++){
      x= i * j;
      printf("%6d",x);
    }
    printf("\n");
  }
  return 0;
}
