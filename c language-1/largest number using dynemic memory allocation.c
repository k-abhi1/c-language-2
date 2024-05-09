#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;
    float *data;

    printf("How many elements u want to enter :: ");
    scanf("%d", &num);

    // Allocates the memory for 'num' elements.
    data = (float*) calloc(num, sizeof(float));

    if(data == NULL)
    {
        printf("\nError!!! memory not allocated.");
        exit(0);
    }

    // Stores the number entered by the user.
    for(i = 0; i < num; ++i)
    {
       printf("\nEnter Number %d :: ", i + 1);
       scanf("%f", data + i);
    }

    // Loop to store largest number at address data
    for(i = 1; i < num; ++i)
    {
       // Change < to > if you want to find the smallest number
       if(*data < *(data + i))
           *data = *(data + i);
    }

    printf("\nLargest element = %.2f\n", *data);

    return 0;
}

