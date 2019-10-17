#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void insertionsort(int *a,int co);
int bubblesort(int *a,int co);
void selectionsort(int *a,int co);
int main() 
{
	int a[1000],n;
	int i,ch,k;
	printf("Enter the size of array:");
	scanf("%d",&n);
    printf("Enter the values in the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n\n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n\nEnter the type of searching technique to be used");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1:bubblesort(a,n);
    	break;
    	case 2:selectionsort(a,n);
		break;
		case 3:insertionsort(a,n);
		break;
		default:printf("Invalid Choice");
	}
	return 0;
}
