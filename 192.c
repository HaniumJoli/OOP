
#include<stdio.h>
#include<string.h>
void capitalize(char s[100]);
int main()
{
    int x=2147483647,y=3,z=10;
    int one=~x+z%y;
    int two=!z^!!y?0:1;
    int three=z>>=y+(7&8);
    printf("%d",three);
    return 0;
}
//task 1:
void capitalize(char *p)
{
    char cap[100];
    int i=0;
    while(*p!='\0')
    {
        if(*p>='a' && *p<='z')
        {
            cap[i]=*p-32;
        }
        else
        {
            cap[i]=*p;
        }
    }
    puts(cap);
}

