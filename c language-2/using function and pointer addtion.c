#include <stdio.h>
int add(int *a, int *b)
{
    int add = *a + *b;
    *b = *a - *b;
    *a = add;
}
   int main(){
    int a,b;
    
    printf("enter the frst number");
    scanf("%d",&a);
    
    printf("enter the frst second");
    scanf("%d",&b);
    
    add(&a, &b);
    
    printf("a + b = %d\na - b = %d\n", a, b);
}
