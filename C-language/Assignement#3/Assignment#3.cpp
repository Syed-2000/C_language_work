#include<stdio.h>
main()
{
	int row1, col1, row2,col2;
	start:
	printf("Enter rows and column of first array:\n");
	scanf("%d%d", &row1, &col1);
	
	int arr1[row1][col1];
	
	
	printf("Enter elements of array 1:\n");
	
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEnter rows and column of first array:\n");
	scanf("%d%d", &row2, &col2);

	int arr2[row2][col2];
	
	printf("Enter elements of array 2:\n");
	for(int i=0;i<row2;i++)
	{
		for(int j=0;j<col2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}
	
	
	
	printf("Elements of array 1\n");
	
	
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("Elements of array 2\n");
	
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}	
	
	
	
	
	
	
	int arr3[col1][row1], temp=0;
	if(col1==row2)
	{
		printf("\nMatrix multiplication is possible\n");
		for(int i=0;i<row1;i++)
		{
			for(int j=0;j<col2;j++)
			{
				temp=0;
				for(int k=0;k<row1;k++)
				{
					temp = temp + arr1[i][k]*arr2[k][j];	
				}
				arr3 [i][j] =temp;
			}
		}
		for(int i = 0; i<row2;i ++)
	{
		for(int j =0 ; j< col1 ;j++)
		{
			printf("%d \t",arr3[i][j]);
			
		}
		printf("\n");
	}		
		
		
		
	}
	else
	{
		printf("\nMatrix multiplication is not possible\n");
		goto start;
	}
	
	
	
	
	
	
	
	
	
	
	
		
}
