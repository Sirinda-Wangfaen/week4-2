#include<stdio.h>

int main() {
	double count,num,sum=0;
	scanf_s("%lf", &count);
	if (count==(int)count && count > 0 && count < 1000) {
		while (count > 0) {
			scanf_s("%lf", &num);
			sum += num;
			count--;
		}
		printf("%.2lf", sum);
	}
	else {
		printf("Error");
	}
	return 0;
}