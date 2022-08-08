#include <stdio.h>
#include <string.h>

void main()

{
    int i, j = 0, k = 0;
    char str[100], str1[10][20];
    scanf("%[^\n]s", str);

    for (i = 0;str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str1[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            str1[k][j]=str[i];
            j++;
        }
    }

    str1[k][j] = '\0';
    for (i=k;i>=0;i--)
        printf("%s ", str1[i]);
}
