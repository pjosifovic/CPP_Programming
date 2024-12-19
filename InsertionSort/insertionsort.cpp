#include <iostream>
#include <fstream>
#include <chrono>
#include <iomanip> // Include this header for std::fixed and std::setprecision

// Function declarations
void insertionSort(int array[], int n);
void print(int arr[], int arrSize);

static const int DEFAULT_SIZE = 100;

void insertionSort(int array[], int n)
{
    for (size_t unsorted = 1; unsorted < n; unsorted++)
    {
        int nextItem = array[unsorted];
        int loc = unsorted;
        while((loc > 0) && (array[loc - 1] > nextItem))
        {
            array[loc] = array[loc - 1];
            loc--;
        }
        array[loc] = nextItem;
    }
}

int main() 
{
    // reading from file
    std::ifstream in("insort.txt");
    std::streambuf *cinbuf = std::cin.rdbuf();
    std::cin.rdbuf(in.rdbuf());

    std::ofstream out("outsort.txt");
    std::streambuf *coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(out.rdbuf());

    int array[DEFAULT_SIZE];
    for (size_t i = 0; i < DEFAULT_SIZE; i++)
    {
        std::cin >> array[i];
    }

    int newArray[DEFAULT_SIZE];

    for (size_t i = 0; i < DEFAULT_SIZE; i++)
    {
        // copy old array
        newArray[i] = array[i];
    }

    auto start = std::chrono::high_resolution_clock::now();
    insertionSort(newArray, DEFAULT_SIZE);
    auto end = std::chrono::high_resolution_clock::now();
    
    std::chrono::duration<double> elapsed = end - start;
    
    std::cout << "Insertion sort" << std::endl;
    std::cout << std::fixed << std::setprecision(6); // Set fixed format and precision
    std::cout << "Time: " << elapsed.count() << " seconds" << std::endl;

    // print newArray
    print(newArray, DEFAULT_SIZE);

    // restore original buffers
    std::cin.rdbuf(cinbuf);
    std::cout.rdbuf(coutbuf);

    return 0;
}

// print function
void print(int arr[], int n)
{
    std::cout << "Array: [";
    for (size_t i = 0; i < n; i++)
    {
        std::cout << arr[i];
        if (i < n - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    std::cout << "================================" << std::endl;
}
