#include<stdio.h>
int main()
{
    int u[5] = {1, 2, 3, 4, 5};
    int a[5] = {0, 1, 1, 0, 1};
    int b[5] = {1, 0, 1, 0, 1};
    int uni[5], inter[5], diffa[5], diffb[5], compa[5], compb[5];
    int i;

    //display u
    printf("universel set={");
    for  (i = 0; i < 5; i++)
    {
        printf(" %d ", u[i]);
    }
    printf("}\n");

    //display a
    printf("set A={");
    for  (i = 0; i < 5; i++)
    {
        if (a[i]==1)
        {
            printf(" %d ", u[i]);
        }
        
        
    }

    printf("}\n");
    printf("set B={");
    for  (i = 0; i < 5; i++)
    {
        if (b[i]==1)
        {
            printf(" %d ", u[i]);
        }
        
        
    }
    printf("}\n");
    printf("union in bit representation A&B={");
    for ( i = 0; i < 5; i++)
    {
        uni[i] = a[i] | b[i];
        printf(" %d ", uni[i]);
    }
    printf("}\n");
    printf("AUB={");
    for ( i = 0; i < 5; i++)
    {
        if (uni[i]==1)
        {
            printf(" %d ", u[i]);
        }
        
    }
    printf("}\n");
    printf("intersection in bit representation A&B={");
    for ( i = 0; i < 5; i++)
    {
        inter[i] = a[i] & b[i];
        printf(" %d ", inter[i]);
    }
    printf("}\n");
    printf("AnB={");
    for ( i = 0; i < 5; i++)
    {
        if (inter[i]==1)
        {
            printf(" %d ", u[i]);
        }
        
    }
    printf("}\n");
    printf("union in bit representation A&B={");
    for ( i = 0; i < 5; i++)
    {
        uni[i] = a[i] | b[i];
        printf(" %d ", uni[i]);
    }
    printf("}\n");
    printf("AUB={");
    for ( i = 0; i < 5; i++)
    {
        if (uni[i]==1)
        {
            printf(" %d ", u[i]);
        }
        
    }
    printf("}\n");
    printf("A compliment={");
    for ( i = 0; i < 5; i++)
    {
        compa[i] = 1-a[i];
        printf(" %d ", compa[i]);
    }
    printf("}\n");
    printf("A'={");
    for ( i = 0; i < 5; i++)
    {
        if (compa[i]==1)
        {
            printf(" %d ", u[i]);
        }
        
    }
    printf("}\n");
    printf("B compliment={");
    for ( i = 0; i < 5; i++)
    {
        compb[i] = 1-b[i];
        printf(" %d ", compb[i]);
    }
    printf("}\n");
    printf("B'={");
    for ( i = 0; i < 5; i++)
    {
        if (compb[i]==1)
        {
            printf(" %d ", u[i]);
        }
        
    }
    printf("}\n");
    printf("A-B={");
    for ( i = 0; i < 5; i++)
    {
        diffa[i] = a[i]&compb[i];
        printf(" %d ", diffa[i]);
    }
    printf("}\n");
    printf("A-B={");
    for ( i = 0; i < 5; i++)
    {
        if (diffa[i]==1)
        {
            printf(" %d ", u[i]);
        }
        
    }
    printf("}\n");
    printf("B-A={");
    for ( i = 0; i < 5; i++)
    {
        diffb[i] = b[i]&compa[i];
        printf(" %d ", diffb[i]);
    }
    printf("}\n");
    printf("B-A={");
    for ( i = 0; i < 5; i++)
    {
        if (diffb[i]==1)
        {
            printf(" %d ", u[i]);
        }
        
    }
    printf("}\n");
}