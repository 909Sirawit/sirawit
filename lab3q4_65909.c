#include <stdio.h>
#include <stdbool.h>

int main() {
    int number;
    int sum = 0, count = 0;

    while(true) {
	printf("Inter number: ");
	scanf("%d", &number);
	
	if (number < 1) {
		break;
	}
	sum += number;
	count++;
    }
    printf("Sum: %d, Avg: %f\n", sum, (float)sum/count);

    return 0;
}
