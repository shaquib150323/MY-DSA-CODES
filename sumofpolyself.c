#include<stdio.h>
int main()
{
int n1,n2,n,i,j,k,A[20],B[20],C[20];
printf("this program calculates the the sum of polynomials using array \n");
printf("--------------------------------------------------------------\n\n");
printf("enter the degree of both the polynomials\n");
scanf("%d %d,",&n1,&n2);
/*finding  the max power of polynomial among 2*/
if(n1>n2)
n=n1;
else
n=n2;
printf("enter the coeffecient of the 1st polynomial\n"); //entering first poly co-eff
for(i=n;i>=0;i--)
{
    printf("x^%d :",i);
    scanf("%d",&A[i]);
}
printf("enter the coeffecient of the 2nd polynomial\n"); //entering second poly co-eff
for(j=n;j>=0;j--)
{
    printf("x^%d :",j);
    scanf("%d",&B[j]);
}
/*to add 2 polynomials and print their sum*/
for(k=n;k>=0;k--)
{
C[k]=A[k]+B[k];
if(k>0)
printf("%dx^%d + ",C[k],k);
else
printf("%d ",C[k]);
}
return 0;
}