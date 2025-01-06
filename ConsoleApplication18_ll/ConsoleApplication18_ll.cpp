#include<stdio.h>
#include<stdlib.h>

struct ELEMENT
{
	int value;
	struct ELEMENT* pnext;
};



int main(void)
{
	struct ELEMENT* pfirstvalue, * plastvalue, * pcurrentvalue;
	struct ELEMENT val[10];


	int values[10] = { 2,4,5,6,7,8,9,1,3,0 };
	int i = 0;


	//pfirstvalue = (struct ELEMENT*)malloc(sizeof(struct ELEMENT));

	pfirstvalue = val;
	plastvalue = val + 9;

	for (i = 0; i < 10; i++)
	{
		(val + i)->value = *(values + i);
	}
	
	for (i = 0; i < 9; i++)
	{
		(val + i)->pnext = ((val + 1) + i);
	}
	(val + 9)->pnext = NULL;


	pcurrentvalue = pfirstvalue;
	printf("size is %lu\n", sizeof(struct ELEMENT));
	printf("size of int is %lu\n", sizeof(int));
	
	printf("First 5 values\n");
	for(i=0;i<5;i++)
	{
	    printf("%d\n", val[i].value);
	}
	printf("First 7 values\n");
	for(i=0;i<7;i++)
	{
	    printf("%d\n", val[i].value);
	}

	//free(pfirstvalue);
	return 0;
}
