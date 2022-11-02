
#include <iostream>

using namespace std;

int main()  
{
    int n, m;

 // stolbc(n) 
    cout << "VVedite kolichestvo stolbcov\n";
    cin >> n;

//stroki(m) 
    cout << "Vvedite kolichestvo strok\n";
    cin >> m;


    //инициализация массива
    int** Mas = new int* [n];
    for (int i = 0; i < n; ++i)
        Mas[i] = new int[m];


  //ввод элементов
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Vvedite znachenie v " << i + 1 << " stolbec i v " << j + 1 << " stroku\n";
            cin >> Mas[i][j];
        }
    }

      //вывод массива
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << Mas[i][j] << " ";
        }
        cout << "\n";
    }

    //создание счетчика
    int counter = 0;

    //выполнение основного задания
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((Mas[i][j - 1] > Mas[i][j]) && (Mas[i][j + 1] < Mas[i][j]))
            {
                counter++;
                cout << Mas[i][j] << "\n";
            }
            
        }
    }


    //вывод 
    cout << "Kolichestvo elementov podhodashih usloviy- " << counter;

  
}

