//*****************************************************************************************************
//      Sorting and Searching Student Names
//
//      This program reads in a list of student names from a file, allows the user to search for a
//      specific name using linear search and binary search, sorts the names in ascending and
//      descending order using bubble sort and selection sort, and displays the sorted lists and
//      search results.
//
//      Other files required:
//        1.  StudentNames.txt - contains the names of 10 students
//
//*****************************************************************************************************

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//*****************************************************************************************************


//*****************************************************************************************************

int main() {
   
}

//*****************************************************************************************************
/*

---------------------------------
        Student Names
---------------------------------
        1  Smith, John
        2  Song, Mona
        3  Jones, Trevor
        4  Li, Na
        5  Zhang, Xiu Ying
        6  Saleem, Mohammad
        7  Lloyd, Arthur
        8  Jones, Rhys
        9  Evans, Olivia
        10  Davies, Emily

Find a Students place in the list.
Enter Student name (e.g., last name, first name):
Ragland, Nicholas
-1
Name Not Found


---------------------------------
 Student Names: Ascending Order
---------------------------------
        1  Davies, Emily
        2  Evans, Olivia
        3  Jones, Rhys
        4  Jones, Trevor
        5  Li, Na
        6  Lloyd, Arthur
        7  Saleem, Mohammad
        8  Smith, John
        9  Song, Mona
        10  Zhang, Xiu Ying
-1
Name Not Found


---------------------------------
 Student Names: Descending Order
---------------------------------
        1  Zhang, Xiu Ying
        2  Song, Mona
        3  Smith, John
        4  Saleem, Mohammad
        5  Lloyd, Arthur
        6  Li, Na
        7  Jones, Trevor
        8  Jones, Rhys
        9  Evans, Olivia
        10  Davies, Emily
-1
Name Not Found


---------------------------------
 Student Names: Ascending Order
---------------------------------
        1  Davies, Emily
        2  Evans, Olivia
        3  Jones, Rhys
        4  Jones, Trevor
        5  Li, Na
        6  Lloyd, Arthur
        7  Saleem, Mohammad
        8  Smith, John
        9  Song, Mona
        10  Zhang, Xiu Ying

Find another Students place in the ascending list.
Enter Student name (e.g., last name, first name):
Ragland, Nicholas
-1
Name Not Found


---------------------------------
 Student Names: Descending Order
---------------------------------
        1  Zhang, Xiu Ying
        2  Song, Mona
        3  Smith, John
        4  Saleem, Mohammad
        5  Lloyd, Arthur
        6  Li, Na
        7  Jones, Trevor
        8  Jones, Rhys
        9  Evans, Olivia
        10  Davies, Emily
-1
Name Not Found

*****************************************************************************************************

---------------------------------
        Student Names
---------------------------------
        1  Smith, John
        2  Song, Mona
        3  Jones, Trevor
        4  Li, Na
        5  Zhang, Xiu Ying
        6  Saleem, Mohammad
        7  Lloyd, Arthur
        8  Jones, Rhys
        9  Evans, Olivia
        10  Davies, Emily

Find a Students place in the list.
Enter Student name (e.g., last name, first name):
Smith, John

Name Found: 1


---------------------------------
 Student Names: Ascending Order
---------------------------------
        1  Davies, Emily
        2  Evans, Olivia
        3  Jones, Rhys
        4  Jones, Trevor
        5  Li, Na
        6  Lloyd, Arthur
        7  Saleem, Mohammad
        8  Smith, John
        9  Song, Mona
        10  Zhang, Xiu Ying

Name Found: 8


---------------------------------
 Student Names: Descending Order
---------------------------------
        1  Zhang, Xiu Ying
        2  Song, Mona
        3  Smith, John
        4  Saleem, Mohammad
        5  Lloyd, Arthur
        6  Li, Na
        7  Jones, Trevor
        8  Jones, Rhys
        9  Evans, Olivia
        10  Davies, Emily

Name Found: 3


---------------------------------
 Student Names: Ascending Order
---------------------------------
        1  Davies, Emily
        2  Evans, Olivia
        3  Jones, Rhys
        4  Jones, Trevor
        5  Li, Na
        6  Lloyd, Arthur
        7  Saleem, Mohammad
        8  Smith, John
        9  Song, Mona
        10  Zhang, Xiu Ying

Find another Students place in the ascending list.
Enter Student name (e.g., last name, first name):
Song, Mona

Name Found: 9


---------------------------------
 Student Names: Descending Order
---------------------------------
        1  Zhang, Xiu Ying
        2  Song, Mona
        3  Smith, John
        4  Saleem, Mohammad
        5  Lloyd, Arthur
        6  Li, Na
        7  Jones, Trevor
        8  Jones, Rhys
        9  Evans, Olivia
        10  Davies, Emily

Name Found: 2

*/