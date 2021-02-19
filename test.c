/**

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

***/

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int choice,a,b,n,i;
    int e,f,g,h,j;
    while (1)
    {
        printf("\nWelcome to our Progression Series");
        printf("\n 1: Arithmetic Progression ");
        printf("\n 2: Geometric Progression");
        printf("\n 3: Exit");
        printf("\n\n Enter your choice ");
        scanf("%d",&choice);

        switch(choice)
        {
    case 1:
        printf("Input 1st number of the arithmetic progression ");
        scanf("%d",&a);
        printf("Input common difference ");
        scanf("%d",&b);
        printf("Input number of terms ");
        scanf("%d",&n);
        for(i=0;i<=(n-1);i++)
        {
            printf("\n%d",a+(i, b));
        }
        break;
    case 2:
        printf("Input 1st number of geometric progression ");
        scanf("%d ",&e);
        printf("Input common ratio ");
        scanf("%d ",&f);
        printf("Input number of terms ");
        scanf("%d ",&g);
        for(h=0;h<=(h-1);h++)
        {
            j=(pow(f,h));
            printf("\n%d ",j);
        }
        break;
    case 3:
        exit (0);
    default:
        printf("Invalid Choice");
        }
    getchar;
}
}
