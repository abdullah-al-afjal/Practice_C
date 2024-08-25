#include<stdio.h>

#define MAX_TERMS 101

typedef struct
{
    int row;
    int col;
    int value;
}element ;
   void print_sparse_matrix(element *sparse_matrix)
{
    int i;

    printf("Row Col Value\n");
    for (i = 0; i < sparse_matrix[0].value + 1; i++)
    {
        printf("%3d%3d%3d\n", sparse_matrix[i].row,sparse_matrix[i].col, sparse_matrix[i].value);
    }
}
   void create_sparse_matrix(int matrix[5][5], int rows, int cols, element *sparse_matrix)
{
    int i, j, k;

    k = 1;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                sparse_matrix[k].row = i;
                sparse_matrix[k].col = j;
                sparse_matrix[k].value = matrix[i][j];
                k++;
            }
        }
    }

    sparse_matrix[0].row = rows;
    sparse_matrix[0].col = cols;
    sparse_matrix[0].value = k - 1;
}

int main()
{
    int matrix[][10] ={
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0},
        {5 ,2 ,1 ,3 ,5}

    };

    element sparse_matrix[MAX_TERMS];

    create_sparse_matrix(matrix, 5, 5, sparse_matrix);

    print_sparse_matrix(sparse_matrix);

   getch();
}
