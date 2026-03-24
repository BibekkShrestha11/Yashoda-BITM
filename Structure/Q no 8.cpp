#include <stdio.h>

enum DataType
{
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_CHAR
};

union Data
{
    int i;
    float f;
    char c;
};

struct TaggedUnion
{
    enum DataType tag;
    union Data value;
};

void printValue(struct TaggedUnion t)
{
    if(t.tag == TYPE_INT)
        printf("Integer value = %d\n", t.value.i);

    else if(t.tag == TYPE_FLOAT)
        printf("Float value = %.2f\n", t.value.f);

    else if(t.tag == TYPE_CHAR)
        printf("Character value = %c\n", t.value.c);
}

int main()
{
    struct TaggedUnion t;

    printf("Choose type:\n");
    printf("1. Integer\n2. Float\n3. Character\n");
    printf("Enter choice: ");
    scanf("%d", &t.tag);

    if(t.tag == TYPE_INT)
    {
        printf("Enter integer value: ");
        scanf("%d", &t.value.i);
    }
    else if(t.tag == TYPE_FLOAT)
    {
        printf("Enter float value: ");
        scanf("%f", &t.value.f);
    }
    else if(t.tag == TYPE_CHAR)
    {
        printf("Enter character value: ");
        scanf(" %c", &t.value.c);
    }

    printf("\nStored value:\n");
    printValue(t);

    return 0;
}