// The MIT License (MIT)

// Copyright (c) 2012 Frederik Vanggaard

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//
//  sortingFunctions.h
//  HandIn5
//
//  Created by Frederik Vanggaard on 10/18/12.
//
//  Contact: contact@drudoo.com
//  
//

/*----------------------------------
 How to use sortingFunctions

 BubbleSort, InsertionSort, SelectionSort:
     Each function requires two parameters.
     The first is the array of char or numbers (depending on the function).
     The second is the length of the array.
     Every time a function is finished it prints the sorted array out.
     None of the functions are returning values.
 
 QuickSort:
    Each function requires three parameters.
    The first is the array of chars or numbers (depending on the function).
    The second is spilt point, usually 0 (can be "first + (last-first)/2", "(last-first)/2" can cause overflow)
    The third is the size of the array-1
    Every time a function is finished it prints the sorted array out.
    None of the functions are returning values.

 BinaryTreeSort:
    Each function requires two parameters.
    The first is the array of char or numbers (depending on the function).
    The second is the length of the array.
    Every time a function is finished it prints the sorted array out.
    None of the functions are returning values.
 
 //--------------------------------
 
 
 ------BubbleSort------
 sortNumHighToLow - sorts ints from the highest to the lowest.
 sortNumLowToHigh - sorts ints from the lowest to the highest.
 sortCharHighToLow - sorts chars from the highest to the lowest.
 sortCharLowToHigh - sorts chars from the lowest to the highest.
 
 
 ------InsertionSort------
 insertionNumHighToLow - sorts ints from the highest to the lowest.
 insertionNumLowToHigh - sorts ints from the lowest to the highest.
 insertionCharHighToLow - sorts chars from the highest to the lowest.
 insertionCharLowToHigh - sorts chars from the lowest to the highest.
 
 
 ------SelectionSort------
 selectionNumHighToLow - sorts ints from the highest to the lowest.
 selectionNumLowToHigh - sorts ints from the lowest to the highest.
 selectionCharHighToLow - sorts chars from the highest to the lowest.
 selectionCharLowToHigh - sorts chars from the lowest to the highest.
 
 
 ------QuickSort------
 
 quickSort_displayNumHighToLow - sorts ints from the highest to the lowest.
 quickSort_displayNumLowToHigh - sorts ints from the lowest to the highest.
 quickSort_displayCharHighToLow - sorts chars from the highest to the lowest.
 quickSort_displayCharLowToHigh - sorts chars from the lowest to the highest.
 
 
 ------BinaryTreeSort------

 binNumHighToLow - sorts ints from the highest to the lowest.
 binNumLowToHigh - sorts ints from the lowest to the highest.
 binCharHighToLow - sorts chars from the highest to the lowest.
 binCharLowToHigh - sorts chars from the lowest to the highest.
 
 ----------------------------------*/


#ifndef __HandIn5__sortingFunctions__
#define __HandIn5__sortingFunctions__

#include <iostream>

void swap(int &a, int &b); //Used to swap two integers
void swapChar(char &a, char &b); //Used to swap two chars


// ------BubbleSort------

void sortNumHighToLow(int array[], int size);
void sortNumLowToHigh(int array[], int size);
void sortCharHighToLow(char array[], int size);
void sortCharLowToHigh(char array[], int size);


// ------InsertionSort------

void insertionNumHighToLow(int array[], int size);
void insertionNumLowToHigh(int array[], int size);
void insertionCharHighToLow(char array[], int size);
void insertionCharLowToHigh(char array[], int size);


// ------SelectionSort------

void selectionNumHighToLow(int array[], int size);
void selectionNumLowToHigh(int array[], int size);
void selectionCharHighToLow(char array[], int size);
void selectionCharLowToHigh(char array[], int size);


// ------QuickSort------

void quickSort_displayNumLowToHigh(int array[], int first, int last);
void quickSort_displayNumHighToLow(int array[], int first, int last);
void quickSortNumLowToHigh(int array[], int first, int last);
void quickSortNumHighToLow(int array[], int first, int last);
int splitNumLtHArray(int array[], int pivot, int first, int last);
int splitNumHtLArray(int array[], int pivot, int first, int last);

void quickSort_displayCharLowToHigh(char array[], int first, int last);
void quickSort_displayCharHighToLow(char array[], int first, int last);
void quickSortCharLowToHigh(char array[], int first, int last);
void quickSortCharHighToLow(char array[], int first, int last);
int splitCharLtHArray(char array[], int pivot, int first, int last);
int splitCharHtLArray(char array[], int pivot, int first, int last);


// ------BinaryTreeSort------

struct TreeNodeNum {
    int data;
    TreeNodeNum* left;
    TreeNodeNum* right;
};
struct TreeNodeChar {
    char data;
    TreeNodeChar* left;
    TreeNodeChar* right;
};

void insertNumHighToLow(TreeNodeNum* &root, int newData);
void insertCharHighToLow(TreeNodeChar* &root, char newData);
void insertNumLowToHigh(TreeNodeNum* &root, int newData);
void insertCharLowToHigh(TreeNodeChar* &root, char newData);

void printTreeNumHighToLow(TreeNodeNum* node);
void printTreeCharHighToLow(TreeNodeChar* node);
void printTreeNumLowToHigh(TreeNodeNum* node);
void printTreeCharLowToHigh(TreeNodeChar* node);

void binSortNumLowToHigh(int array[], int size);
void binSortNumHighToLow(int array[], int size);
void binSortCharLowToHigh(char array[], int size);
void binSortCharHighToLow(char array[], int size);

#endif /* defined(__HandIn5__sortingFunctions__) */
