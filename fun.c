#include <stdio.h>
#include <stdlib.h>
void bubblesort(int *a,int co)
{
	int j,i,temp,c,k;
	for(i=0;i<co;i++)
	{
		for(j=0;j<(co-i);j++)
		{
			//printf("%d   %d\n",i,j);
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n\nArray after sorting is:\n");
	for(i=0;i<co;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n\n");
}
void selectionsort(int *a,int co)
{
	int j,i,temp,c;
	for(i=0;i<co;i++)
	{
		for(j=i+1;j<co;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n\nArray after sorting is:\n");
	for(i=0;i<co;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n\n");
}
void insertionsort(int *a,int co)
{
	int j,i,temp,c,k;
	for(i=0;i<co;i++)
	{
		for(j=i+1;j<co;j++)
		{
			if(a[i]>a[j])
			{
				for(k=j;k>=i+1;k--)
				{
				temp=a[k];
				a[k]=a[k-1];
				a[k-1]=temp;
			}
			}
		}
	}
	printf("\n\nArray after sorting is:\n");
	for(i=0;i<co;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n\n");
}
