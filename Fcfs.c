#include<stdio.h>
void main(){
    int bt[20],wt[20],tat[20],i,n;
    float wtavg,tatavg;
    printf("\nEnter the number of process:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter Burst Time for the process%d--",i);
        scanf("%d",&bt[i]);
    }
        wt[0]=wtavg=0;
        tat[0]=tatavg=bt[0];
        for(i=1;i<n;i++){
            wt[i]=wt[i-1]+bt[i-1];
            tat[i]=tat[i-1]+bt[i];
            wtavg=tatavg+tat[i];
            tatavg=tatavg+tat[i];
        }
        printf("\tProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
        for(i=0;i<n;i++){
        printf("\n\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
        printf("\n Average Waiting Time--%f",wtavg);
          printf("\n Average Turnaround Time--%f",tatavg);
        }
    }