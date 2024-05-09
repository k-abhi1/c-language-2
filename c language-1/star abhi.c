#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i = 0;
char *arr = "Being a Programmer, I Encountered few bugs in my day-to-day life. I found its sooo hard to compile it without you as my header file. So will you marry me.";
while(i < strlen(arr))
{
getch();
printf("%c ", arr[i++]);
}
return 0;
}
