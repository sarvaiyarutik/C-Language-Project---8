

#include <stdio.h>

void findsum(int *ptr, int row)
{

    for (int i = 0; i < row; i++)
    {
        printf("%d\n",(*ptr) * (*ptr) * (*ptr));

        ptr++;
    }

    for (int i = 0; i < row; i++)
    {
        printf("%d\n",(*ptr) * (*ptr) * (*ptr));

        ptr++;
    }
    

}

int main()
{

    int row;

    printf("Enter array size:");
    scanf("%d", &row);

    int array[row][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("Enter array element [%d][%d]:", i,j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\n Cube of the element:\n");

    findsum(&array[0][0], row);

    return 0;
}