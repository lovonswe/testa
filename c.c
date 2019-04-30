#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    while(scanf("%s", string) == 1)
    {
        int len = strlen(string);
        int i, j;
        char x[] = "A   3  HIL JM O   2TUVWXY5";
        char y[] = "01SE Z  8 ";
        int flag1 = 0, flag2 = 0;
        for(i = 0, j = len-1; i <= j; i++, j--)
        {
            if(string[i] != string[j])
                flag1 = 1;
            if(string[i] >= 'A' && string[i] <= 'Z')
            {
                if(string[j] != x[string[i]-'A'])
                    flag2 = 1;
            }
            else
            {
                if(string[j] != y[string[i]-'0'])
                    flag2 = 1;
            }
        }
        printf("%s -- is ", string);
        if(flag1)
        {
            if(flag2)
                puts("not a palindrome.");
            else
                puts("a mirrored string.");
        }
        else
        {
            if(flag2)
                puts("a regular palindrome.");
            else
                puts("a mirrored palindrome.");
        }
        puts("");
    }
    return 0;
}
