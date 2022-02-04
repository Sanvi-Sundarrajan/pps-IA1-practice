/*Write a program to find Sum of n different number entered by the user
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_arrays(int n, int a[n]);
void out_put(int n, int a[n], int sum);
input:
1 7 11
output:
1+7+11 is 19*/
#include<stdio.h>
int input_array_size ()
{
  int n;
  printf ("Enter array size\n");
  scanf ("%d", &n);
  return n;
}

void input_array (int n, int a[n])
{
  int i;
  printf ("Enter the %d elements array \n", n);
  for (i = 0; i < n; i++)
 scanf ("%d", &a[i]);
}

int sum_n_arrays (int n, int a[n])
{
  int i, sum = 0;
  for (i = 0; i < n; i++)
    sum = sum + a[i];
  return sum;
}

void output (int n, int a[n], int sum)
{
  int i;
  for (i = 0; i < n - 1; i++)
    printf ("%d+", a[i]);
  printf ("%dis%d", a[n - 1], sum);
}

int main ()
{
  int n, sum;
  n = input_array_size ();
  int a[n];
  input_array (n, a);
  sum = sum_n_arrays (n, a);
  output (n, a, sum);
  return 0;
}
