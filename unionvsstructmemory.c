#include <stdio.h>

struct MyStruct {
    int i;
    float f;
    char c;
};

union MyUnion {
    int i;
    float f;
    char c;
};

int main() {
    struct MyStruct s;
    union MyUnion u;

    printf("Size of struct: %lu bytes\n", sizeof(s));
    printf("Size of union : %lu bytes\n", sizeof(u));

    return 0;
}
/*
Explanation

Structure (struct)

Each member has its own separate memory.

Total size = sum of sizes of all members (+ possible padding).

int   = 4 bytes
float = 4 bytes
char  = 1 byte
----------------
Total = 9 bytes (but due to alignment, it usually becomes 12 bytes)


Union (union)

All members share the same memory space.

Total size = size of the largest member (plus possible padding).

Largest member is int or float = 4 bytes
So, total = 4 bytes

🔹 Typical Output (on most 64-bit systems)
Size of struct: 12 bytes
Size of union : 4 bytes
*/