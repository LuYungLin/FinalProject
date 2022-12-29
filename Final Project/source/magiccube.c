#include <stdio.h>
#include<stdlib.h>\

int Input(int i)
{
	if (i==1)
	{
		return 'h';
	}
	else if (i==0)
	{
		return 'X';
	}
	else if (i == 2)
	{
		return 'O';
	}
}

int main(void)
{
	char a[15][15] = {0};
	int i, j, step=0, l,row,column, d;	

	while (1)
	{
		system("cls");
		printf("請輸入你要選擇的行與列1~15\n");
		//scanf("%d%d", &row, &column);
		
		if (step % 2 == 0)
		{
			scanf("%d%d", &row, &column);
			if (a[row - 1][column - 1] != 0)
			{				
				printf("請在下一次\n"); 				
			}
			else
			{
				a[row - 1][column - 1] = 1;
				step++;

			}			
		}
		else 
		{
			scanf("%d%d", &row, &column);
			if (a[row - 1][column - 1] != 0)
			{
				printf("請在下一次\n");
			}
			else
			{			
				a[row - 1][column - 1] = 2;
				step++;
			}
		}	
		for (i = 0; i < 15; i++)
		{
			for (j = 0; j < 15; j++)
			{
				Input(a[i][j]);
				printf(" %d", a[i][j]);
			}
			printf("\n");
		}
		system("pause");
	}

}
/*

win1=a[row-5][column-1]== a[row - 4][column-1] == a[row - 3][column-1] == a[row - 2][column-1] == a[row - 1][column-1]
win2=a[row - 4][column-1] == a[row - 3][column-1] == a[row - 2][column-1] == a[row - 1][column-1] == a[row][column-1]
win3=[row - 3][column-1] == a[row - 2][column-1] == a[row - 1][column-1] == a[row][column-1] == a[row+1][column-1]
win4=a[row - 2][column-1] == a[row - 1][column-1] == a[row][column-1] == a[row + 1][column-1] == a[row + 2][column-1]
win5=a[row - 1][column-1] == a[row][column-1] == a[row + 1][column-1] == a[row + 2][column-1] == a[row + 3][column-1]
*/