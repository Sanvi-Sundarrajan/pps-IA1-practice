/* Add two numbers using 4 functions and Pass by reference
void input(int a, int b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
input:
1
2
output:
sum of 1+2 is 3*/
#include <stdio.h>
void input(int *a,int *b)
{
  printf("Enter the two numbers\n");
  scanf("%d%d",a,b);

}
void add (int a, int b,int *sum)
{
  *sum=a+b;
}
void output(int a, int b, int sum)
{
  printf("%d+%d=%d",a,b,sum);
}
int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}