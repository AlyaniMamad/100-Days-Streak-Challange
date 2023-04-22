#include<stdio.h>
#include<stdlib.h>

typedef struct process {
    int pid;
    int arrival_time;
    int burst_time;
    int waiting_time;
    int turnaround_time;
} process;

int compare(const void *a, const void *b) {
    return ((process *)a)->burst_time - ((process *)b)->burst_time;
}

int main() {
    int n, i;
    float avg_waiting_time = 0, avg_turnaround_time = 0;

    printf("Enter the number of processes:");
    scanf("%d", &n);

    process *p = malloc(n * sizeof(process));
    printf("\nEnter the arrival time and burst time for each process:\n");

    for(i = 0; i < n; i++) {
        printf("\nProcess %d\n", i+1);
        p[i].pid = i+1;

        printf("Arrival Time:");
        scanf("%d", &p[i].arrival_time);
        
        printf("Burst Time:");
        scanf("%d", &p[i].burst_time);
    }

    qsort(p, n, sizeof(process), compare);

    int current_time = 0;
    
    for(i = 0; i < n; i++) {
        if(current_time < p[i].arrival_time)
        {
            current_time = p[i].arrival_time;
        }

        p[i].waiting_time = current_time - p[i].arrival_time;
        
        current_time += p[i].burst_time;
        
        p[i].turnaround_time = current_time - p[i].arrival_time;
        
        avg_waiting_time += p[i].waiting_time;
        
        avg_turnaround_time += p[i].turnaround_time;
    }

    avg_waiting_time /= n;
    avg_turnaround_time /= n;

    printf("\nProcess\t Arrival Time\t Burst Time\t Waiting Time\t Turnaround Time\n");

    for(i = 0; i < n; i++) {
        printf("P%d\t\t",p[i].pid);
        printf("%d\t\t",p[i].arrival_time);
        printf("%d\t\t",p[i].burst_time);
        printf("%d\t\t",p[i].waiting_time);
        printf("%d\n",p[i].turnaround_time);
    }

    printf("\nAverage Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);

    free(p);
    return 0;
}
