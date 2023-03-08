#include <stdio.h>

int _getline(char line[]);
void copy(char to[], char from[]);

int main(void)
{
        int len, max;
        char line[50];
        char longest[50];

        max = 0;
        while ((len = _getline(line)) > 0)
        {
                if (len > max)
                        max = len;
                copy(longest, line);
        }
        if (max > 0)
                printf("%s : longest line", longest);

        return (0);
}

int _getline(char s[])
{
        int c, i;

        for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)

                s[i] = c;
        if (c == '\n')
        {
                s[i] = c;
                ++i;
        }
        s[i] = '\0';

        return (i);
}

void copy(char to[], char from[])
{
        int i = 0;

        while ((to[i] = from[i]) != '\0')
                ++i;
}

