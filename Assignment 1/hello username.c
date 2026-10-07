#include <stdio.h>
#include <stdlib.h>

int main()
{
    //dataType variableName
    char User_name[50];

    printf("Please enter name\n");
    scanf("%s",User_name);
    printf("Hello %s",User_name);
    return 0;
}
