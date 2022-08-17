#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a no. to calculate it's table: ");

    scanf("%d", &n);

    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }


return 0;
}
