#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int** arr;
    int* swap;
    setlocale(LC_ALL, "ru");
    cout << "введите ширину массива n\n";
    cin >> n;
    cout << "введите высоту массива m\n";
    cin >> m;


    //создание массива
    arr = new int* [n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }  


    //заполнение массива
    cout << "введите элементы массива\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
		}
	}

    //сортировка пузырьком
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i][0] > arr[i+1][0])
        {
            swap = arr[i];
            arr[i] = arr[i+1];
            arr[i + 1] = swap;
        }
    }

    //вывод результата
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
        cout << endl;
	}

    //освобождение памяти
    for (int i = 0; i < n; i++)
        delete[] arr[i];

    delete[] arr;
}
