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
#include<conio.h>
#define max 100

int main()
{
 int i,j,noprcs,burst[max],arrvt[max],turnat[max],wait[max],temp[max];
 float await = 0, aturnat = 0;
 printf("Cpu scheduling \n");6
 printf("Enter the total number of process which we want to schedule\n");
 scanf("%d" , &noprcs);
 printf("Enter the Arrival Time of the process\n");
   for(i=0;i<n;i++)
 	{
 		scanf("%d",&arrvt[i]);
 	}
 printf("Enter the Burst Time of the process\n");
   for(i=0;i<n;i++)
 	{
 	 	scanf("%d",&burst[i]);
 	}
	 temp[0] = 0;
 printf("Process \t Arrival Time \t Burst Time \n");	
	for(i=0;i<n;i++)
	{
		wait[i] = 0;
		turnat[i] = 0;
		temp[i+1] = temp[i] + burst[i];
		wait[i] = temp[i] - arrvt[i];
		turnat[i] = wait[i] + burst[i];
		await = await + wait[i];
		aturnat = aturnat + turnat[i];
		printf("%d \t %d \t\t\t %d\t\t%d\t\t%d",i+1,arrvt[i],burst[i],wait[i],turnat[i]);	
	}
  
  await = await/n;
  aturnat= aturnat/n;
  printf("Average Waiting Time is equal to: %f\n ", await);
  printf("Average Turn Around Time is equal to: %f\n ", aturnat);
   
}

