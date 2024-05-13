// file handling write the file gec.txt file

#include <stdio.h>

int main() {
    FILE *file_pointer;
    char data_to_write[100]; // assuming data size won't exceed 100 characters

    // Open the file in write mode ("w")
    file_pointer = fopen("example.txt", "w");
    
    // Check if the file was opened successfully
    if (file_pointer == NULL) {
        printf("Error opening file!\n");
        return 1; // exit with error
    }

    // Write data to the file
    printf("government engneering college arwal:\n");
    fgets(data_to_write, sizeof(data_to_write), stdin); // Read input from user
    fprintf(file_pointer, "%s", data_to_write);

    // Close the file
    fclose(file_pointer);

    printf("Data has been written to the file.\n");

    return 0; // exit successfully
}
