#include <stdio.h>


// function that allocates a two-dimensional array of ints of a specified size.
// (The rows parameter is how many rows in the array, and cols is how many columns per row.)
int **alloc_2d(int rows, int cols)
{
	// !!! IMPLEMENT ME
	// (solution is about 5 lines of code)
    int **array_size ;

    array_size = (int **) malloc(rows* sizeof(int*));

    for(int i = 0; i < rows; i++)
    {
     array_size[i] = (int *) malloc(cols* sizeof(int)); 
    } 
    return array_size;
}

void alloc_2d_example(void)
{
	int **my_array = alloc_2d(5, 10);

	// First array index is row, second is column:
	my_array[2][3] = 3490;

	// The same array access could be made with pointer arithmetic:
	*(*(my_array+2)+3) = 3490;

	// By the C spec, the array notation and pointer arithmetic notation
	// are 100% equivalent.
	
	printf("my_array[2][3] = %d\n", my_array[2][3]);
}

int main()
{
    alloc_2d_example();
    return 0;
 }




