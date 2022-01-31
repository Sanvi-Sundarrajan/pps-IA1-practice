	/*Write a program to find Sum of n numbers
	<br> a.	Sum of n numbers 
	<br> int input_n();
	<br> int sum_n(int n);
	<br> void output(int n, int sum);
	<br> input: 
	<br> 5
	<br> output:
	<br> 1+2+3+4+5 is 15*/
  #include <stdio.h>
  int input_n()
  {
    int n;
    printf("Enter n value \n");
    scanf("%d",&n);
    return n;
  }
  int sum_n(int n)
  {
    int i,sum=0;
    for(i=0;i<=n;i++)
    sum=sum+i;
    return sum;
  }
  void output(int n,int sum )
  {
    int i;
    for(i=1;i<n;i++)
    printf("%d+",i);
    printf("%d=%d",n,sum);
  }
  int main()
  {
    int n,sum;
    n=input_n();
    sum=sum_n(n);
    output(n,sum);
    return 0;
  }
