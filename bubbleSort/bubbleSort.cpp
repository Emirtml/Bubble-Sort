
#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>


using namespace std;

int main()
{

    ifstream input("input.txt");
    ofstream oinput("input.txt");
    ofstream output("outout.txt");

    int size,temp;
    cout << "siralanacak sayi adedi" << endl;
    cin >> size;

    int* array = new int[size]; // dinamik dizi , (dinamik bellek kullanımı)

    srand(time(0));

    for (int i = 0; i < size; i++) {
        oinput << rand() % 1000000 << endl;
    }
    oinput.close();

    for (int j = 0; j < size; j++) {   // input dosyasını diziye aktarma.
        input >> array[j];
    }
    input.close();

    // bubble sort
    for (int p = 0; p < size; p++) {
        for (int k = 0; k < size - 1; k++) {
            if (array[k] > array[k + 1]) {
                //swap(array[k], array[k + 1]);
                temp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = temp;
            }
        }
    }

    for (int x = 0; x < size; x++) {
        output << array[x] << endl;
    }
    output.close();

    delete[] array; // 
    return 0;
}

