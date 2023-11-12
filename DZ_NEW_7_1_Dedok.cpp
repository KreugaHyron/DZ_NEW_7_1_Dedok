#include <iostream>
#include "function.h"
using namespace std;
int main()
{
    //я не понимаю почему выскакивает ошибка LNK2019,если можете объясните пожалуйста что это за ошибка и как её устранить
    const int size = 5;
    DataType array[size];
    FillArray(array, size);
    ShowArray(array, size);
    cout << "Min element: " << FindMin(array, size) << "\n";
    cout << "Max element: " << FindMax(array, size) << "\n";
    SortArray(array, size);
    cout << "Sorted array: ";
    ShowArray(array, size);
    EditValue(array, 2, 100);
    cout << "Edited array: ";
    ShowArray(array, size);
    Show();
    return 0;
}