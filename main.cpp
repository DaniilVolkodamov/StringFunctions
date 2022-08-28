#include <stdio.h>
#include <string.h>
#include "StringFunctions.h"

int main()
{
    char s1[10] = "ABC";
    char s2[4] = "DEF";
    char *i = stringcat(s1, s2);
    printf("%p %s", i, s1);
    return 0;
}


