#include <iostream>

using namespace std;

void swap (int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}


void selectionSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int minimum_index = step;

        for (int i = step + 1; i < size; i++)
        {
            if (array[i] < array[minimum_index])
            {
                minimum_index = i;
            }
        }
        swap(&array[minimum_index], &array[step]);
    }
}

void print (int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}


int main()
{
    int array[] = {5,6,1,4,3,2}, size = sizeof(array)/sizeof(array[0]);

    selectionSort(array, size);
    print(array, size);


    return 0;
}
