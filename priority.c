#include<stdio.h>
#define max 5
int main()
{
int i,j,n,t,p[max],bt[max],pr[max],wt[max],tat[max],Total_wt=0,Total_tat=0;
float awt=0,atat=0;
printf("Enter the number of process\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the process number\n");
scanf("%d",&p[i]);
printf("Enter the Burst time for process\n");
scanf("%d",&bt[i]);
printf("Enter the priority of the process\n");
scanf("%d",&pr[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(pr[j]>pr[j+1])
{
t=pr[j];
pr[j]=pr[j+1];
pr[j+1]=t;
   
   
t=bt[j];
bt[j]=bt[j+1];
bt[j+1]=t;
   
t=p[j];
p[j]=p[j+1];
p[j+1]=t;
}}
}
printf(" Procss\t burst Time \t priority\t waiting Time\t turn around time \n");
for(i=0;i<n;i++)
{
wt[i]=0;
tat[i]=0;
for(i=0;i<n;i++)
{
wt[i]=wt[i]+bt[j];
tat[i]=wt[i]+bt[i];
Total_wt=Total_wt+wt[i];
Total_tat=Total_tat+tat[i];
printf("%d\t\t  %d\t\t  %d\t\t %d\t\t %d\n",p[i],bt[i],pr[i],wt[i],tat[i]);
}}
awt=(float)Total_wt/n;
atat=(float)Total_tat/n;
printf("The average Waiting time =%f\n",awt);
printf("The average turn around time=%f\n",atat);
        }
        
        
        
      
