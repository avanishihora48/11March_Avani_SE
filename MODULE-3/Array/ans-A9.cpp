#include<stdio.h>
#include<string.h>

//structure

struct Std{
	int roll;
	char nm[50];
	float marks;
};

//union

union Info{
	int roll;
	char nm[50];
	float marks;
};

int main(){
	// structure..
	struct Std std1;
	std1.roll=1;
	strcpy(std1.nm,"Rohan");
	std1.marks=80.5;
	
	printf("Using Structure:");
	printf("\nRoll Number:%d",std1.roll);
	printf("\nName:%s",std1.nm);
	printf("\nMarks:%.2f",std1.marks);
	
	// Union
	union Info info1;
	info1.roll=2;
	printf("\n");
	printf("\nUsing Union:");
	printf("\nRoll Number:%d",info1.roll);
	strcpy(info1.nm,"Siya");
	printf("\nName:%s",info1.nm);
    info1.marks=85.3;
	printf("\nMarks:%.2f",info1.marks);
}
