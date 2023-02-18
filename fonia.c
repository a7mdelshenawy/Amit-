#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 100
#include <string.h>




int main()
{
    char str[MAX_SIZE], rev[MAX_SIZE];
    int len,i, index, wordStart, wordEnd;

    printf("enter any string : ");
    gets(str);

    len = strlen(str);
    printf("%d",len);
    index=0;

    wordStart = len-1;
    wordEnd   = len-1;

    while(wordStart > 0)
    {
        if(str[wordStart] == ' ')
        {
            i = wordStart + 1;

            while(i <= wordEnd)
            {
                rev[index]=str[i];
                i++;
                index++;
            }
            rev[index++] = ' ';
            wordEnd = wordStart - 1;
        }
        wordStart--;
    }

    for(i=0; i<=wordEnd; i++)
    {
        rev[index]=str[i];
        index++;
    }
    rev[index] = '\0';

    printf("original string = %s\n",str);
    printf("reversed string = %s\n",rev);

    return 0;
}
