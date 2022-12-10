// C program for implementation of Bubble sort
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
static void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    time_t seconds;
    time_t diff;
    FILE *fp;
    char buff[255];
    int arr100[100];
    int arr1000[1000];
    int arr10000[10000];
    int arr100000[100000];
    int arr200000[200000];
    int arr300000[300000];
    //int arr1000000[1000000];
    //int arr10000000[10000000];

    fp = fopen("100.txt", "r");
    for (int i = 0; i < 100; i++)
    {
        fgets(buff, 255, (FILE*)fp);
        arr100[i] = atoi(buff);
    }
    fclose(fp);

    fp = fopen("1000.txt", "r");
    for (int i = 0; i < 1000; i++)
    {
        fgets(buff, 255, (FILE*)fp);
        arr1000[i] = atoi(buff);
    }
    fclose(fp);

    fp = fopen("10000.txt", "r");
    for (int i = 0; i < 10000; i++)
    {
        fgets(buff, 255, (FILE*)fp);
        arr10000[i] = atoi(buff);
    }
    fclose(fp);

    fp = fopen("100000.txt", "r");
    for (int i = 0; i < 100000; i++)
    {
        fgets(buff, 255, (FILE*)fp);
        arr100000[i] = atoi(buff);
    }
    fclose(fp);

    fp = fopen("200000.txt", "r");
    for (int i = 0; i < 200000; i++)
    {
        fgets(buff, 255, (FILE*)fp);
        arr200000[i] = atoi(buff);
    }
    fclose(fp);

    fp = fopen("300000.txt", "r");
    for (int i = 0; i < 300000; i++)
    {
        fgets(buff, 255, (FILE*)fp);
        arr300000[i] = atoi(buff);
    }
    fclose(fp);

    // fp = fopen("1000000.txt", "r");
    // for (int i = 0; i < 1000000; i++)
    // {
    //     fgets(buff, 255, (FILE*)fp);
    //     arr1000000[i] = atoi(buff);
    // }
    // fclose(fp);

    int n = sizeof(arr100) / sizeof(arr100[0]);
    //printf("Array: \n");
    //printArray(arr100, n);
    seconds = time(NULL);
    bubbleSort(arr100, n);
    diff = time(NULL) - seconds;
    printf("C time (100 inputs) - %ld\n", diff);
    //printf("Sorted array: \n");
    //printArray(arr100, n);

    n = sizeof(arr1000) / sizeof(arr1000[0]);
    seconds = time(NULL);
    bubbleSort(arr1000, n);
    diff = time(NULL) - seconds;
    printf("C time (1000 inputs) - %ld\n", diff);

    n = sizeof(arr10000) / sizeof(arr10000[0]);
    seconds = time(NULL);
    bubbleSort(arr10000, n);
    diff = time(NULL) - seconds;
    printf("C time (10000 inputs) - %ld\n", diff);

    n = sizeof(arr100000) / sizeof(arr100000[0]);
    seconds = time(NULL);
    bubbleSort(arr100000, n);
    diff = time(NULL) - seconds;
    printf("C time (100000 inputs) - %ld\n", diff);

    n = sizeof(arr200000) / sizeof(arr200000[0]);
    seconds = time(NULL);
    bubbleSort(arr200000, n);
    diff = time(NULL) - seconds;
    printf("C time (200000 inputs) - %ld\n", diff);

    n = sizeof(arr300000) / sizeof(arr300000[0]);
    seconds = time(NULL);
    bubbleSort(arr300000, n);
    diff = time(NULL) - seconds;
    printf("C time (300000 inputs) - %ld\n", diff);

    // n = sizeof(arr1000000) / sizeof(arr1000000[0]);
    // seconds = time(NULL);
    // bubbleSort(arr1000000, n);
    // diff = time(NULL) - seconds;
    // printf("C time (1000000 inputs) - %ld\n", diff);

    return 0;
}