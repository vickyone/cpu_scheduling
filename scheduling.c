/*cpu scheduling program
NAME-VICKY KUMAR
ROLL NO-47
SECTION-K17EX
*/
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
 int i,j,noprcs,bt[50],at[50],tat[50],wt[ ],temp[];
 float awt = 0, atat = 0;
 printf("Cpu scheduling \n");6
 printf("Enter the total number of process which we want to schedule\n");
 scanf("%d" , &noprcs);
 printf("Enter the Arrival Time of the process\n");
   for(i=0;i<n;i++)
 	{
 		scanf("%d",&bt[i]);
 	}
 printf("Enter the Burst Time of the process\n");
   for(i=0;i<n;i++)
 	{
 	 	scanf("%d",&bt[i]);
 	}
	 temp[0] = 0;
 printf("Process \t Arrival Time \t Burst Time \n");	
	for(i=0;i<n;i++)
	{
		wt[i] = 0;
		tat[i] = 0;
		temp[i+1] = temp[i] + bt[i];
		wt[i] = temp[i] - at[i];
		tat[i] = wt[i] + bt[i];
		awt = awt + wt[i];
		atat = atat + tat[i];
		printf("%d \t %d \t\t\t %d\t\t%d\t\t%d",i+1,at[i],at[i],wt[i],tat[i]);	
	}
  
  awt = awt/n;
  atat= atat/n;
  printf("Average Waiting Time is equal to: %f\n ", awt);
  printf("Average Turn Around Time is equal to: %f\n ", atat);
   
}

