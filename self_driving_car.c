#include<stdlib.h>
#include<stdio.h>

#define TRUE 1
#define FALSE 0

void avoid_object();
int going_to_hit_something;

int main()
{
	int car = 1;
	int on = 1;
	while(car == on)
	{
		if (going_to_hit_something == TRUE)
		{
			avoid_object();
		}
	}
	return 0;
} 	
