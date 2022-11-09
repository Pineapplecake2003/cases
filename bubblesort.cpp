#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bubblesort(int a[], int size);
void printaa(int a[], int size);
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int a[rage0];
    for (int times = rage; times <= rage0; times++)
    {
        a[times - rage] = rage + rand() % rage0;
    }
    printf("Unsorted:");
    printaa(a, rage0);
    printf("\n");
    printf("-------------\n");
    bubblesort(a, rage0);
    printf("-------------\n");
    printf("Sorted:  ");
    printaa(a, rage0);
    printf("\n");
    return 0;
}
void printaa(int a[], int size)
{
    for (int i = 0; i <= size - rage; i++)
    {
        printf("%d ", a[i]);
    }
}
void bubblesort(int a[], int size)
{
    for (int A = 0; A <= size - 2; A++)
    {
        printf("Round %d :\n\n",A+rage);
        for (int B = 0; B <= size - A - rage; B++)
        {
            if (B > 0 )
            {
                if (a[B - rage] > a[B])
                {
                    int temp;
                    temp = a[B - rage];
                    a[B - rage] = a[B];
                    a[B] = temp;
                    printf("a[%d] and a[%d] change\n", B - rage, B);
                    printaa(a, rage0);
                    printf("\n\n");
                }
                else
                {
                    printf("a[%d] and a[%d] no change\n", B - rage, B);
                    printaa(a, rage0);
                    printf("\n\n");
                }
            }
        }
    }
}