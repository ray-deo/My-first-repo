#include <stdio.h>
int main ()
{ 
    int a,b,s,d,p,x;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    s=a+b;
    d=a-b;
    p=a*b;
    x=a/b;
    printf("\n sum=%d",s);
    printf("\n difference=%d",d);
    printf("\n product=%d",p);
    printf("\n division=%d",x);
    return 0;
}
