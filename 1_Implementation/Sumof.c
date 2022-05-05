#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int sumofasc(char [], int);
 
int main()
{
   // char str1[30];
    int sum;

    char str1[30]="CHAITALI";
  
    sum = sumofasc(str1, 0);
    printf("The sum of all values in '%s' is %x.\n", str1, sum);
 
    return 0;
}
 
int sumofasc(char str[], int num)
{
    if (num < strlen(str))
    {
        return (str[num] + sumofasc(str, num + 1));
    }
 
    return 0;
}