int main()
{
    int* p; /* wild pointer */
    int a = 10;
    /* p is not a wild pointer now*/
    p = &a;
    /* This is fine. Value of a is changed */
    *p = 12;
    //this is wrong, a pointer should always be initialized
    int x=5;
    int *q=new int;
}