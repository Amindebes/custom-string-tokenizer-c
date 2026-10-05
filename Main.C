#include <stdio.h>
#include <string.h>

// My version of strtok
char* mystrtok(char* str, const char* delim)
{
    static char* scan;   // keeps track of where we stopped last time
    int i;

    // first call: set scan to start of string
    if(str != NULL)
        scan = str;

   
    if(scan == NULL)
        return NULL;

    // skip any leading delimiters
    while(*scan != '\0')
    {
        int isDelim = 0;

        for(i = 0; delim[i] != '\0'; i++)
        {
            if(*scan == delim[i])
            {
                isDelim = 1;
                break;
            }
        }

        if(isDelim == 0)
            break;

        scan++;
    }

    // if reached the end, no more tokens
    if(*scan == '\0')
    {
        scan = NULL;
        return NULL;
    }

    
    char* start = scan;

   
    while(*scan != '\0')
    {
        int isDelim = 0;

        for(i = 0; delim[i] != '\0'; i++)
        {
            if(*scan == delim[i])
            {
                isDelim = 1;
                break;
            }
        }

        if(isDelim == 1)
            break;

        scan++;
    }

    // cut the string at the delimiter and move forward
    if(*scan != '\0')
    {
        *scan = '\0';  
        scan++;
    }
    else
    {
        scan = NULL;   // no more tokens
    }

    return start;
}

int main()
{
    
    char str[] = "Learning C is fun, powerful, and useful!";
    char* token;

    // get the first token
    token = mystrtok(str, " ,!");  // delimiters: space, comma, exclamation

    // loop through and print all tokens
    while(token != NULL)
    {
        printf("%s\n", token);
        token = mystrtok(NULL, " ,!");
    }

    return 0;
}
