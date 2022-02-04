/*Write a program to find Sum of two complex numbers
struct _complex
{
float real,imaginary;
}; <brtypedef _complex Complex
Complex input_complex();
Complex add(Complex a, Complex b);
void output(Complex a, Complex b, Complex c);
input:
2 3
4 5
output
2 + 3i + 4 + 5i is 6 + 8i*/
#include<stdio.h>

struct _complex
{
  float real, imaginary;
};
typedef struct _complex Complex;

Complex
input_complex ()
{
  Complex x ;
  printf ("Enter complex number\n");
  scanf ("%f%f", &x.real, &x.imaginary);
  return x;

}

Complex
add (Complex a, Complex b)
{
  Complex c;
  c.real = a.real + b.real;
  c.imaginary = a.imaginary + b.imaginary;
  return c;
}

void
output (Complex a, Complex b, Complex c)
{
  printf ("%f+%fi+%f+%fi = %f+%fi\n", a.real, a.imaginary, b.real, b.imaginary, c.real, c.imaginary);
}

int
main ()
{
  Complex a, b, c;
  a=input_complex();
  b=input_complex ();
  c = add (a, b);
  output (a, b, c);
  return 0;
}

