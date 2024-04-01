#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct process
{
    int pid;
    int burstTime;
} process;

process arr[1000];
int front = -1;
int rear = -1;

void push(process n)
{
    arr[++front] = n;
}

process pop()
{
    return arr[++rear];
}
int main()
{
    int d;
    printf("Enter the number of process \n");
    scanf("%d", &d);

    process temp;
    printf("Enter the process id and their burst time \n");
    for (int i = 0; i < d; i++)
    {
        scanf("%d", &temp.pid);
        scanf("%d", &temp.burstTime);
        push(temp);
    }

    int finalTime[d + 1];

    int tme = 0;
    while (front != rear)
    {
        temp = pop();
        finalTime[temp.pid] = tme;
        tme += temp.burstTime;
    }

    for (int i = 1; i <= d; i++)
    {
        printf("Process having pid %d executing at %d time for processing \n", i, finalTime[i]);
    }

    printf("Total time used is %d\n", tme);
}