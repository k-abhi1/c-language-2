// file handling write the file gec.txt file

// #include <stdio.h>

// int main() {
//     FILE *file_pointer;
//     char data_to_write[100]; // assuming data size won't exceed 100 characters

//     // Open the file in write mode ("w")
//     file_pointer = fopen("example.txt", "w");
    
//     // Check if the file was opened successfully
//     if (file_pointer == NULL) {
//         printf("Error opening file!\n");
//         return 1; // exit with error
//     }

//     // Write data to the file
//     printf("government engneering college arwal:\n");
//     fgets(data_to_write, sizeof(data_to_write), stdin); // Read input from user
//     fprintf(file_pointer, "%s", data_to_write);

//     // Close the file
//     fclose(file_pointer);

//     printf("Data has been written to the file.\n");

//     return 0; // exit successfully
// }

// #include<stdio.h>

// int main(){
//     FILE *fp;

//     fp = fopen("gec.txt", "w");
//     fputec('a', fp);
//     fclose(fp);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     FILE *fp;

//     fp = fopen("gec.txt", "w");
//     fputes("government engineering college arwal", fp);
//     fclose(fp);
//     return 0;
// }
//2. red mode in the file 
// #include<stdio.h>

// int main()
// {
//     FILE *fp;
//     fp =fopen("gec.txt", "r");
//     if(fp == NULL)
//     {
//         printf("file not found");
//         return 1;
//     }
    
// }

// 
// #include<stdio.h>
// #include<windows.h>

// int main(){
//     HWND MyWindows = GetConsoleWindow(); // Corrected function name
//     printf("\n hiding the console window");

//     Sleep(3000); // Corrected function name

//     ShowWindow(MyWindows, SW_HIDE);
//     return 0;
// }

// #include<stdio.h>
// #include<windows.h>

// int main(){
//     HWND MyWindows = GetConsoleWindow(); // Corrected function name
//     printf("\nconsole window");
//     Sleep(3000); // Corrected function name
//     ShowWindow(MyWindows, SW_HIDE);
//     Sleep(3000);
//     ShowWindow(MyWindows, SW_SHOW); // Corrected function name
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     FILE *fp;
//     char ch;
//   ptr=fopen("gec.txt", "r");
//   if(NULL==ptr)
//   {
//       printf("\n file cant be open");
  
// }
// printf("\n content of the file is");

// do{
//     ch=fgetc(ptr);
//     printf("%c",ch);
// }
// while(ch!=EOF);
// fclose(ptr);
// return 0;
// }

#include<stdio.h>

int main(){
    FILE *fp; // Corrected declaration
    char ch;
    fp=fopen("gec.txt", "r"); // Changed ptr to fp
    if(NULL==fp)
    {
        printf("\n file cant be open");
    }
    printf("\n content of the file is");
    do{
        ch=fgetc(fp); // Changed ptr to fp
        printf("%c",ch);
    } while(ch!=EOF);
    fclose(fp); // Changed ptr to fp
    return 0;
}
