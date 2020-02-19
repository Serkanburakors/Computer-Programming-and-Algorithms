#include <stdio.h>
int hours, mins, secs,totalSecs;
int main() {
	printf("Please enter hours, minutes and seconds in given order.\n");
	scanf_s("%d %d %d", &hours, &mins, &secs);
	totalSecs += mins * 60 + hours * 3600;
    if (hours > 12)
		hours = hours % 12;
	else
		hours = hours;
	printf("Total seconds:%d\n", totalSecs);
	printf("Time is %d:%d:%d\n", hours, mins, secs);
}

	
