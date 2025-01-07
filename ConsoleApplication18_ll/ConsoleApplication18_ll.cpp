#include<stdio.h>
#include<stdlib.h>

struct ELEMENT
{
	int value;
	struct ELEMENT* pnext;
	struct ELEMENT* p_str;   // pointer pointing to type struct ELEMENT.
	int* p;                  // if alone pointer is declared, it will point to type int or char as defined.
};

int main(void)
{
	struct ELEMENT* pfirstvalue, * pcurrentvalue;
	struct ELEMENT val[10];


	int values[10] = { 2,4,5,6,7,8,9,1,3,0 };
	int i = 0;


	struct ELEMENT *x = (struct ELEMENT*)malloc(sizeof(struct ELEMENT));

	for (i = 0; i < 10; i++)
	{
		(val + i)->p_str = (val + i);  // assigning memory location same as structure val[0].
	}
	
	pfirstvalue = val;
	
	// assigning the values.
	for (i = 0; i < 10; i++)
	{
		(val + i)->value = *(values + i);
	}
	// assigning the next position.
	for (i = 0; i < 9; i++)
	{
		(val + i)->pnext = ((val + 1) + i);
	}
	(val + 9)->pnext = NULL;


	pcurrentvalue = pfirstvalue;
	printf("size is %llu\n", sizeof(struct ELEMENT));
	printf("size of int is %llu\n", sizeof(int));
	
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
	for (i = 0; i < 10; i++)
	{
		printf("structure pointer val[%d] :%p\n", i, val[i].p_str);
	}
	for (i = 0; i < 10; i++)
	{
		printf("pnext pointer val[%d] %p\n", i+1, val[i].pnext);
	}

	free(x);
	printf("Memory is freed");
	return 0;
}
