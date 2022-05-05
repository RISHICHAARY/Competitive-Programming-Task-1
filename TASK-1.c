#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[]="A string.";
    char *p=a;
    printf("%c %c %c \n",a[0],*p,p[3]);
    p+=2;
    printf("%c %c %c",*p,p[2],p[5]);
    return 0;
}
