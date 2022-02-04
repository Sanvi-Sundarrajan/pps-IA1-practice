#include<stdio.h>
#include<math.h>
float input()
{ float n;
  printf("Enter a number\n");
  scanf("%f",&n);
  return n;
 }
 float my_sqrt(float n)
{   float sqrt_result,temp;
    sqrt_result = n/2;
    temp = 0;
  while(fabs(sqrt_result - temp)>0.0000001)
  {
      temp = sqrt_result;
      sqrt_result = ( (n/temp) + temp) / 2;
  }
  return sqrt_result;
}
void output(float n,float sqrt_result)
{ 
  printf("The sqrt of given number %f is %f\n",n,sqrt_result);
}

int main()
{  
   float n = input();
   float res = my_sqrt(n);
   output(n,res);
   return 0;
 }
