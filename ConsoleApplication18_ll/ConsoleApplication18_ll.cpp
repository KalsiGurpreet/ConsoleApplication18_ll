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
	(val)->value = *(values);
	(val + 1)->value = *(values + 1);
	(val + 2)->value = *(values + 2);
	(val + 3)->value = *(values + 3);
	(val + 4)->value = *(values + 4);
	(val + 4)->value = *(values + 5);
	(val + 6)->value = *(values + 6);
	(val + 7)->value = *(values + 7);
	(val + 8)->value = *(values + 8);
	(val + 9)->value = *(values + 9);

	(val)->pnext = (val + 1);
	(val + 1)->pnext = (val + 2);
	(val + 2)->pnext = (val + 3);
	(val + 3)->pnext = (val + 4);
	(val + 4)->pnext = (val + 5);
	(val + 5)->pnext = (val + 6);
	(val + 6)->pnext = (val + 7);
	(val + 7)->pnext = (val + 8);
	(val + 8)->pnext = (val + 9);
	(val + 9)->pnext = NULL;


	pcurrentvalue = pfirstvalue;

	while (pcurrentvalue != NULL)
	{
		printf("value is %d\n", pcurrentvalue->value);
		pcurrentvalue = pcurrentvalue->pnext;
	}

	//free(pfirstvalue);
	return 0;
}