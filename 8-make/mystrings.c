#include<stdio.h>
#include"mystrings.h"

int strlength(char  string[])
{
    int i = 0;
    while(string[i] != '\0')
    i++;
    return i;
}

void strconcat(char string1[], char string2[])
{
    int i=strlength(string1);
    if(i > 50 || strlength(string2) > 50)
    {
        printf("Error: one or more strings may be too long!\n");
    
    }
    for(int j = 0; string2[j] != '\0'; j++)
    {
        string1[i]=string2[j];
        i++;
    }
     string1[i] = '\0'; 
     printf("%s \n", string1);
}

int strcompare(char string1[], char string2[])
{
    int strl = strlength(string1);
    int max = strlength(string2);
    if(strl > max)
    max = strl;
    for(int i = 0; i < max; i++)
    {
        if(string1[i] > string2[i])
        return 1;
        else if(string1[i] < string2[i])
        return -1;
    }
    return 0;
}











