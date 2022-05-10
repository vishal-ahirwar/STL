#include<stdio.h>
static const char* sayHii()
{
return "hi there!\n";
};

void execute_sayHii()
{
    printf("\n[execute_sayHii]%s",sayHii());
};

