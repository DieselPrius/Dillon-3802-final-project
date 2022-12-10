#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


void getnumbers(int n, int arr[])
{
    //char buff[255];
    //char snum[30];
    //itoa(n, snum, 10);
    //printf("snum = %s\n", snum);

    // fp = fopen("100.txt", "r");
    // for (int i = 0; i < 100; i++)
    // {
    //     fgets(buff, 255, (FILE*)fp);
    //     arr[i] = atoi(buff);
    // }
    // fclose(fp);

    return;
}

int main()
{
    // FILE *fp;
    // char buff[255];
    // int arr100[100];
    // int arr1000[1000];
    // int arr10000[10000];
    // int arr100000[100000];
    // int arr1000000[1000000];

    // fp = fopen("100.txt", "r");
    // for (int i = 0; i < 100; i++)
    // {
    //     fgets(buff, 255, (FILE*)fp);
    //     arr100[i] = atoi(buff);
    // }
    // fclose(fp);

    // fp = fopen("1000.txt", "r");
    // for (int i = 0; i < 1000; i++)
    // {
    //     fgets(buff, 255, (FILE*)fp);
    //     arr1000[i] = atoi(buff);
    // }
    // fclose(fp);

    // fp = fopen("10000.txt", "r");
    // for (int i = 0; i < 10000; i++)
    // {
    //     fgets(buff, 255, (FILE*)fp);
    //     arr10000[i] = atoi(buff);
    // }
    // fclose(fp);

    // fp = fopen("100000.txt", "r");
    // for (int i = 0; i < 100000; i++)
    // {
    //     fgets(buff, 255, (FILE*)fp);
    //     arr100000[i] = atoi(buff);
    // }
    // fclose(fp);

    // fp = fopen("1000000.txt", "r");
    // for (int i = 0; i < 1000000; i++)
    // {
    //     fgets(buff, 255, (FILE*)fp);
    //     arr1000000[i] = atoi(buff);
    // }
    // fclose(fp);

    // fp = fopen("10000000.txt", "r");
    // for (int i = 0; i < 10000000; i++)
    // {
    //     fgets(buff, 255, (FILE*)fp);
    //     arr10000000[i] = atoi(buff);
    // }
    // fclose(fp);

    // //verify
    // printf("10000.txt\n");
    // for (int i = 0; i < 1000; i++)
    // {
    //     printf("%d, ", arr1000[i]);
    // }

    time_t seconds;

    seconds = time(NULL);
    sleep(3);
    time_t diff = time(NULL) - seconds;
    printf("%ld \n", diff);

    return 0;
}