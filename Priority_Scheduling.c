#include<stdio.h>
#include<stdlib.h>
struct process
{
	int id;int pri;int at;
	int bt;int ubt;int start;int wait;int comp;int tat;
	
};

int main()
{
	int time,p,i,j,r,working=-1,current;
	float avgtat=0,avgwt=0;
	printf("Enter number of processes\n");
	scanf("%d",&p);
	struct process pro[p+1];
	printf("For the Processes Enter the Arrival Time Burst Time Priority\n");
	for(i=0;i<p;i++)
	{
		printf("For process P%d ",i+1);
		pro[i].id=i+1;
		scanf("%d",&pro[i].at);
		scanf("%d",&pro[i].bt);
		scanf("%d",&pro[i].pri);
		pro[i].wait=0;
		pro[i].start=-1;
		pro[i].ubt=pro[i].bt;
	}
	
