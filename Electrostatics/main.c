#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    gets(a);
    char s[100];
    gets(s);
    int n;
    scanf("%d",&n);
    int charge[n];
    int count = 0;
    for(int i=0;i<strlen(a);i++){
        if(a[i] != ' ') {
            charge[count] = a[i]-48;
            count++;
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++) {
        if(s[i] == 'P')
            sum += charge[i];
        else
            sum -= charge[i];
    }
    if(sum > 0) {
        printf("%d",sum*100);
    }
    else {
        printf("%d",-sum*100);
    }
}