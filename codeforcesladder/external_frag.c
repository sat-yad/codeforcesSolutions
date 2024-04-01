#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

typedef struct process
{
    int pid;
    int size;
    int at;
    int dt;
} process;
int main()
{
    int block_size;
    printf("Enter the size of block that will be used for continous allocation \n ");
    scanf("%d", &block_size);
    int s = 0;
    int n;
    printf("Enter the number of process availiable : \n");
    scanf("%d", &n);
    process arr[n];
    printf("Enter size , arrival time and departure time of the processess\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &arr[i].size, &arr[i].at, &arr[i].dt);
        arr[i].pid = i + 1;
    }
    int end_start = 0;
    int end_last = 0;
    int end_time = 0;

    for (int i = 0; i < n; i++)
    {
        end_time = arr[i].at;

        if (s + arr[i].size < block_size)
        {
            s += arr[i].size;
            printf("Process having pid %d have been allocated \n", arr[i].pid);
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i].dt < end_time)
                {
                    end_last += arr[i].size;
                }
            }
            if (end_last - end_start > arr[i].size)
            {
                end_start += arr[i].size;
            }
            else
            {
                printf("This process having pid %d cannot be allocated\n", arr[i].pid);
            }
        }
    }

    printf("\n");
    // printf("--*----*----*----*----*----*----*----*----*----*----*----*----*----*----*--\n");
    printf("\n");

    int left_fragment = block_size - s;
    left_fragment += (end_last - end_start);

    printf("Remaining external fragment is %d \n", left_fragment);
}

/*

500
4
200 0 1
150 0 4
100 0 4
250 2 6

*/
