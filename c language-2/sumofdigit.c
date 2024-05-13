// wap takes on integer & print sum of all the digits in the sum integer with recursction?


#include <stdio.h>

int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    else
        return (num % 10 + sumOfDigits(num / 10));
}

int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = sumOfDigits(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}

// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("enter the number");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         sum=sum+n%10;
//         n=n/10;
//     }
//     printf("sum of digit=%d",sum);
// }

#include<stdio.h>
int main()
{
    

}