#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "world!";

    strcat(str1, str2); // Concatenates str2 to the end of str1
    printf("Concatenated string: %s\n", str1);

    return 0;
}


//or to do manually
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Programming ";
    char str2[] = "is fun!";
    int i, j;

    // Find the end of str1
    i = 0;
    while (str1[i] != '\0') {
        i++;
    }

    // Append str2 to str1
    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Null-terminate the resulting string

    printf("Concatenated string: %s\n", str1);

    return 0;
}