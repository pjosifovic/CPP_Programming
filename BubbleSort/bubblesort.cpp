// bubble sort implementation

#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

// Function declarations
void swap(int& a, int& b);
void bubbleSort(int array[], int n);
void print(int arr[], int arrSize);

const int DEFAULT_SIZE = 1000;

// Swapping values between 2 variables
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;    
}

// Bubble sort algorithm
void bubbleSort(int array[], int n)
{
    bool sorted = false;
    int pass = 1;
    while(!sorted && (pass < n))
    {
        sorted = true;
        for(int index = 0; index < n - pass; index++)
        {
            int nextIndex = index + 1;
            if(array[index] > array[nextIndex])
            {
                swap(array[index], array[nextIndex]);
                sorted = false;
            }
        }
        pass++;
    }
}

// Main function
int main()
{
    ifstream in("insort.txt");
    streambuf *cinbuf = cin.rdbuf();
    cin.rdbuf(in.rdbuf());

    ofstream out("outsort.txt");
    streambuf *coutbuf = cout.rdbuf();
    cout.rdbuf(out.rdbuf());

    int array[DEFAULT_SIZE];
    for(int i = 0; i < DEFAULT_SIZE; i++)
    {
        cin >> array[i];
    }

    int newArray[DEFAULT_SIZE];
    clock_t t1, t2;

    for (int i = 0; i < DEFAULT_SIZE; i++)
    {
        newArray[i] = array[i];
    }

    t1 = clock();
    bubbleSort(newArray, DEFAULT_SIZE);
    t2 = clock();

    cout << "Bubble sort" << endl;
    cout << "Time: " << (double)(t2 - t1) / CLOCKS_PER_SEC << " seconds" << endl;

    // Call print function to display so rted array
    print(newArray, DEFAULT_SIZE);

    // Restore original buffers
    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);

    return 0;
}

// Print function definition
void print(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n================================" << endl;
}
