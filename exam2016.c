#include <stdio.h>
#include <string.h>

int main()
{
    char *a[] = {"AAA","BBB","CCC"};

    int length = (sizeof(a))/(sizeof(a[2]));
    int aSize = sizeof(a);
    int charSize = sizeof(char);
    int elementSize = sizeof(a[0]);
    int n = 3;

    printf("Character size: %d\n", charSize);
    printf("Array size: %d\n", aSize);
    printf("Element size: %d\n", elementSize);
    printf("Length: %d\n",length);
    char *ptr;
    ptr = &a;
    for(int i = 0; i < 3; i++){
        printf("%c \n", *(a[i]));
    }
 t
    return 0;
}
