#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <stdlib.h>

int main() {
    // Set the locale to the user's default locale
    setlocale(LC_ALL, "");

    // UTF-8 encoded string
    char *utf8_str = "你好, 世界!";

    // Calculate the length of the wide character string
    size_t len = mbstowcs(NULL, utf8_str, 0) + 1;

    // Allocate memory for the wide character string
    wchar_t *wstr = malloc(len * sizeof(wchar_t));

    // Convert the UTF-8 string to a wide character string
    mbstowcs(wstr, utf8_str, len);

    // Print the wide character string
    wprintf(L"%ls\n", wstr);

    // Free the allocated memory
    free(wstr);

    return 0;
}

