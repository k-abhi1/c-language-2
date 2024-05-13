// wap in c that takes  a number of change the number by remaing zeros output serise i/p =10450320 output=14532

#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    while(n%10==0)
    {
        n=n/10;
    }
    printf("the number after removing zeros=%d",n);
}  
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     while(n%10==0)`
//     {
//         n=n/10;
//     }
//     printf("the number after removing zeros=%d",n);
// }


#include <stdio.h>

int main() {
    long long int num, result = 0;
    int remainder, power = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%lld", &num);

    // Extract digits other than zero
    while (num != 0) {
        remainder = num % 10;
        if (remainder != 0) {
            result += remainder * power;
            power *= 10;
        }
        num /= 10;
    }

    // Output the result
    printf("Output: %lld\n", result);

    return 0;
}
