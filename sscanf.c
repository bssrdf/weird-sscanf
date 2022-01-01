#include<stdio.h>

int main()
{
    //char Command[20] = "command:3";
    char Command[20] = "foo,4,3";
    //char Keyword[20];
    char *Keyword;
    int Context, count;

    sscanf(Command, "%[^,],%d,%d", Keyword, &Context, &count);

    printf("Keyword:%s\n",Keyword);
    printf("Context,count:%d,%d",Context, count);

    getchar();
//    putchar("\n");  
    return 0;
}
