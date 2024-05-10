#include<stdio.h>
int main()
{
	// increasing..
	
	int a[5],b[5],i,j,temp;
	printf("Enter array 1 elements:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter array 2 elements:\n");
	for(i=0;i<5;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		if(b[i]>b[j]){
			    temp=b[i];
				b[i]=b[j];
				b[j]=temp;
		    }
		}
	}
	
	printf("increasing order of array 1:");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("increasing order of array 2:");
	for(i=0;i<5;i++){
		printf("%d ",b[i]);
    }
	printf("\n");
	// decreasing..
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
		}
		if(b[i]<b[j]){
			    temp=b[i];
				b[i]=b[j];
				b[j]=temp;
		}
	}
}
    printf("\ndecreasing order of array 1:");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\ndecreasing order of array 2:");
	for(i=0;i<5;i++){
			for(i=0;i<5;i++){
		    printf("%d ",b[i]);
		}
	}
}

