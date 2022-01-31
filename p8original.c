/*Write a program to find Sum of n complex numbers
struct _complex
{
float real,imaginary;
};
typedef _complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
input:
2
2 + 3i
4 + 5i
output:
2 + 3i
+ 4 + 5i is
6 + 8i*/
#include <stdio.h>
struct _complex
{
  float real,imaginary;
};
typedef struct _complex Complex;
int get_n()
{
  int n;
  printf("Enter the number of complex numbers\n");
  scanf("%d",&n);
  return n;
}
Complex
input_complex ()
{
  Complex c;
  printf ("Enter complex number\n");
  scanf ("%f%f", &c.real, &c.imaginary);
  return c;
}

void input_n_complex(int n, Complex c[n])
{
  int i;
  for (i=0;i<n;i++)
    c[i]=input_complex ();
}

Complex add (Complex a, Complex b)
{
  Complex r;
  r.real = a.real + b.real;
  r.imaginary = a.imaginary + b.imaginary;
  return r;
}

Complex add_n_complex(int n, Complex c[n])
{
  Complex r;
  int i;
  r.real = 0;
  r.imaginary =0;
  for(i=0;i<n;i++)
    r= add(r,c[i]);
}

void output(int n, Complex c[n], Complex result)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%f + %fi\n", c[i].real, c[i].imaginary);
  printf("+ %f + %fi is %f + %fi\n", c[n-1].real, c[n-1].imaginary, result.real, result.imaginary);
}

int main()
{
    int n = get_n ();
    Complex c[n],result;
    input_n_complex ( n, c);
    result=add_n_complex ( n, c);
    output ( n, c,result);
    return 0;
}

