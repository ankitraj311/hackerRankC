#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char c, str[100], sen[100];
    scanf("%c",&c);
    scanf("%s\n",str); // \n  is used Because next line containg *%c, which means ignore \n
    scanf("%[^\n]*%c",sen);
    printf("%c\n",c);
    printf("%s\n",str);
    printf("%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
