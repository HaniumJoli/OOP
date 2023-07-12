#include<stdio.h>
#include<string.h>
void capitalize(char s[100]);
int main()
{
    unsigned char b=80,c=20,d=2,y=-400,z=20,w=30;
    unsigned char a=b*c/d;
    unsigned char x=y/z*w;
    printf("%d %d",y,x);
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

