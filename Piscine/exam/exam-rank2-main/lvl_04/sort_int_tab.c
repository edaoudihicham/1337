#include <stdio.h>
void	sort_int_tab(int *tab, unsigned int size)
{
    int hold;    
    unsigned int i = 0;

    while (i < (size - 1))
    {
        if (tab[i] > tab[i + 1])
        {
            hold = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = hold;
            i = 0;
        }
        else
            i++;
    }

}
int main()
{
    int arr[] = {5, 2, 9, 1, 5, 5, 6};
    unsigned int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sort_int_tab(arr, size);

    printf("Sorted array: ");
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}