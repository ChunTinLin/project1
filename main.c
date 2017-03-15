#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 9
    int power(int X, int Y);
    int power(int X,int Y)
    {
        int i, j;
    for ( i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            if((i == X) && (j == Y))
              printf("%3c", 'D');
            else
              printf("%3c", '.');
            printf("\n");
    }
    }
    int up(int rowIndex)
    {
        if (rowIndex > 0)
          return rowIndex - 1;
        else
          return rowIndex + 8;
    }
    int down(int rowIndex)
    {
        if (rowIndex < N - 1)
          return rowIndex + 1;
        else
          return rowIndex - 8;
    }
    int right(int colIndex)
    {
        if (colIndex < N - 1)
          return colIndex + 1;
        else
          return colIndex - 8;
    }
    int left(int colIndex)
    {
        if (colIndex > 0)
          return colIndex - 1;
        else
          return colIndex + 8;
    }
    void main(void)
{
     int row, col, k=0,a;
     srand((unsigned)time(NULL));
     printf("¿é¤Jªì©l­È");
     scanf("%d %d", &row, &col);
    while (!((row == N-1) && (col == N-1)))
    {
        a=rand()%4;
        switch(a)
        {
            case 0 : row = up(row);
                break;
            case 1 : row = down(row);
                break;
            case 2 : col = right(col);
                break;
            case 3 : col = left(col);
                break;
        }
        system("cls");
        power(row, col);
        printf("This is iteration #%d.\n\n", ++k);
        sleep(100);
    }
}
    void sleep(unsigned int mseconds)
    {
        int goal;
        goal = mseconds + clock();
        while(goal > clock());
    }
