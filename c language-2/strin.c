//1.convert string to integer
#include <stdio.h>

int main() {
    char str[100];
    int i, num = 0;

    printf("Enter any string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        num = num * 10 + (str[i] - '0');
    }

    printf("String to integer: %d\n", num);

    return 0;
}

//2. convert capital to small latter

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter any string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    printf("String after converting to lowercase: %s\n", str);

    return 0;
}

//3. convert small to capital letter
#include<stdio.h>

int main(){
    char str[100];
    int i;

    printf("Enter any string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("String after converting to uppercase: %s\n", str);

    return 0;
}

//4.convert to good morning capitalize first word is small letter and second word is

#include<stdio.h>

int main(){
    char str[100];
    int i;

    printf("Enter any string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
        if (str[i] == ' ') {
            ++i;
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
    }

    printf("String after converting to uppercase: %s\n", str);

    return 0;
}