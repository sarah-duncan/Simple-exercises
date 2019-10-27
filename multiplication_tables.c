/* Table that printf the times tables.Created by Sarah Duncan on 27/10/2019. Last Modified: 27/10/2019*/
#include <stdio.h>
#define size12 = 11

int main(void)
{
		int first;
		int second;
		for(first=0; first<=12; first++)
		{
			printf("    %d \n", first);
			for(second=0; second<=12; second++)
			{
				int product=first*second;
				printf("%d*%d = %d \n", first, second, product); 
			}
			printf("\n\n");
		}
}