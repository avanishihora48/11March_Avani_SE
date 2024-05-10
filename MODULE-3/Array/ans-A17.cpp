#include<stdio.h>
#include<string.h>

//structure
struct Id{
	int id;
	char nm[20];

};

//union
union Data{
	int id;
	char nm[20];
};

//structure
int main()
{
	struct Id id;
	id.id = 123;
	strcpy(id.nm,"Riya");
	printf("Using structure:");
	printf("\nId:%d",id.id);
	printf("\nName:%s",id.nm);

	
	printf("\n");
	
//union

    union Data data;
    data.id = 459;
    printf("\nUsing union:");
    printf("\nId:%d",data.id);
    strcpy(data.nm,"Mansi");
    printf("\nName:%s",data.nm);
   
}
