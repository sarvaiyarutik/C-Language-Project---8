

#include<stdio.h>
#include<string.h>

int main(){

    char str[50];

    char *ptr;

    int length = 0;

    printf("Enter any string:");
    scanf("%[^\n]",&str);

    ptr = str;

    while (*ptr != '\0')
    {
      length++;
      ptr++;
    }

  printf("Length of the string= %d\n",length);

    return 0;
}

