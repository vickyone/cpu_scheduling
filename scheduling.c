/*cpu scheduling program
NAME-VICKY KUMAR
ROLL NO-47
SECTION-K17EX
*/
//header files 
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#define max 100 //defined maximum size of array

int main()
{
 int i,j,noprcs,burst[max],arrvt[max],turnat[max],wait[max],temp[max];
 //burst=burst time,arrvt=arrival time,turnat=turn around time,wait=waiting time,temp is a variable//
 
 float await = 0, aturnat = 0;//await average waiting time,aturnat=average turn around time//
 
 printf("Cpu Scheduling Program \n");
 printf("Enter the total number of process which we want to schedule\n");
 scanf("%d" , &noprcs);
 
 printf("Enter the Arrival Time of the processes\n");
   for(i=0;i<noprcs;i++)
 	{
 		scanf("%d",&arrvt[i]);
 	}
 	
 printf("Enter the Burst Time of the processes\n");
   for(i=0;i<noprcs;i++)
 	{
 	 	scanf("%d",&burst[i]);
 	}
	 temp[0] = 0;//first element in temp storage is zero initially
	 
 printf("Process\t Arrival Time\t\t Burst Time\t waiting time\t turn around time\n ");	
	for(i=0;i<noprcs;i++)
	{
		wait[i] = 0;//initially
		turnat[i] = 0;//initially
		temp[i+1] = temp[i] + burst[i];
		wait[i] = temp[i] - arrvt[i];//calculates waiting time
		turnat[i] = wait[i] + burst[i];//calculates turn around time
		await = await + wait[i];//calculates average waiting time
		aturnat = aturnat + turnat[i];//calculates average turnaround time
		printf("%d\t\t%d\t\t%d\t\t\t%d\t\t\t%d\n",i+1,arrvt[i],burst[i],wait[i],turnat[i]);	
	}
  
  await = await/noprcs;
  aturnat= aturnat/noprcs;
  printf("Average Waiting Time is equal to: %f\n ", await);
  printf("Average Turn Around Time is equal to: %f\n ", aturnat);
   return 0;
}
