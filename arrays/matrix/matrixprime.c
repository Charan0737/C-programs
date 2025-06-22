#include<stdio.h>
int main()
{
	int i, j, m, n, count, num;

	printf("Enter the size of matrix (rows and columns): ");
	scanf("%d%d", &m, &n);

	int A[m][n];

	printf("Enter %dX%d values to store in matrix:\n", m, n);
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	for(i = 0; i < m; i++)
	{
		count = 0;  // Reset prime count for each row
		for(j = 0; j < n; j++)
		{
			num = A[i][j];
			int isPrime = 1;
			if(num <= 1)
				isPrime = 0;
			else
			{
				for(int k = 2; k <= num/2; k++)
				{
					if(num % k == 0)
					{
						isPrime = 0;
						break;
					}
				}
			}
			if(isPrime)
				count++;
		}
		printf("Number of prime numbers in row %d: %d\n", i + 1, count);
	}
}

