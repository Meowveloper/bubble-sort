#include <iostream>

void sort (int array[], int size);
int main ()
{
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int sizeOfArray = sizeof(array) / sizeof(array[0]);

    sort(array, sizeOfArray);


    for(int item : array)
    {
        std::cout << item << " ";
    }
    std::cout << '\n';
    return 0;
}

void sort (int array[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }

    }
    

}