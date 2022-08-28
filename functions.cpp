#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "StringFunctions.h"


int stringlen(char s[])
{
    int i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}

char *stringcpy(char a1[], char a2[])
{
    while(*a1++ = *a2++);
    return a1;
}

char *stringchr(char str[], int c)
{
    assert("str != NULL");
    while (*str != NULL)
    {
        if (*str == c)
            return str;
        str++;
    }
    return NULL;
}

int stringcmp(char a1[], char a2[])
{
    int i = 0;
    while (a1[i] != '\0')
    {
        if (a2[i] == '\0')
            return 1;
        ++i;
    }
    if (a2[i] == '\0')
        return 0;
    else
        return -1;
}

char *stringcat(char a1[], char a2[])
{
    int i = 0, j = 0;
    while (a1[i] != '\0')
        i++;
    while ((a1[i++] = a2[j++]) != '\0');
    return   a1;
}
