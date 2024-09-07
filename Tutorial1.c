#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,a,b=0,num;
    printf("Enter a number.\n");
    scanf("%d", &num);
    n = num;
    for(; num!=0 num=num/10)
        c++;
    for(num=n; num!=0; num = num /10 )
    {
        a=pow(num % 10, c);
        b = b + a;
    }
    printf("%d", b);
    if(b == n)
    printf("This is armstrong number.\n");
    else
    printf("This is not a armstrong number.\n");
    return 0;
}