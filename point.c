#include <stdio.h>

void printArray(void *arr, int n, char type)
{
    int i;

    if(type == 'i')
    {
        int *p = (int *)arr;

        for(i = 0; i < n; i++)
        {
            printf("%d ", *(p + i));
        }
    }

    else if(type == 'f')
    {
        float *p = (float *)arr;

        for(i = 0; i < n; i++)
        {
            printf("%.2f ", *(p + i));
        }
    }
}

int main()
{
    int a[] = {10, 20, 30};
    float b[] = {1.5, 2.5, 3.5};

    printArray(a, 3, 'i');

    printf("\n");

    printArray(b, 3, 'f');

    return 0;
}
