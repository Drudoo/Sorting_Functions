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
//  sortingFunctions.cpp
//  HandIn5
//
//  Created by Frederik Vanggaard on 10/18/12.
//
//  Contact: contact@drudoo.com
//  
//

#include "sortingFunctions.h"


//-------------------------------------------------------------------SWAP functions-----------------------------------------------------------------------------------//
void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapChar(char &a, char &b) {
    char temp;
    temp = a;
    a = b;
    b = temp;
}

//-------------------------------------------------------------------BubbleSort functions-----------------------------------------------------------------------------------//

void sortNumHighToLow(int array[], int size) {
    
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if (array[i] < array[j]) {
                swap(array[i], array[j]);
            }
        }
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }

}
void sortNumLowToHigh(int array[], int size) {
    
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if (array[i] > array[j]) {
                swap(array[i], array[j]);
            }
        }
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    
}
void sortCharHighToLow(char array[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if (array[i] < array[j]) {
                swapChar(array[i], array[j]);
            }
        }
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}
void sortCharLowToHigh(char array[], int size) {
    
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if (array[i] > array[j]) {
                swapChar(array[i], array[j]);
            }
        }
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    
}

//-------------------------------------------------------------------InsertionSort functions-----------------------------------------------------------------------------------//

void insertionNumHighToLow(int array[], int size) {
    
    for (int i = 0; i < size; i++) {
        int temp, place;
        temp = array[i];
        place = i-1;
        while ((place >= 0) && (array[place] < temp)) {
            array[place+1] = array[place];
            place--;
        }
        
        array[place+1] = temp;
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}
void insertionNumLowToHigh(int array[], int size) {

    for (int i = 0; i < size; i++) {
        int value, place;
        value = array[i];
        place = i;
        while (place > 0 && array[place-1] > value) {
            array[place] = array[place-1];
            place--;
        }
        array[place] = value;
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}
void insertionCharHighToLow(char array[], int size) {
    for (int i = 0; i < size; i++) {
        int temp, place;
        temp = array[i];
        place = i-1;
        while ((place >= 0) && (array[place] < temp)) {
            array[place+1] = array[place];
            place--;
        }
        
        array[place+1] = temp;
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}
void insertionCharLowToHigh(char array[], int size) {
    for (int i = 0; i < size; i++) {
        int value, place;
        value = array[i];
        place = i;
        while (place > 0 && array[place-1] > value) {
            array[place] = array[place-1];
            place--;
        }
        array[place] = value;
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

//-------------------------------------------------------------------SelectionSort functions-----------------------------------------------------------------------------------//

void selectionNumHighToLow(int array[], int size) {
    
    for (int i = 0; i < size-1; i++) {
        int max;
        max = i;
        for (int j = i+1; j < size; j++) {
            if (array[j] > array[max]) {
                max = j;
            }
        }
        
        if (max !=i) {
            swap(array[i], array[max]);
        }
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}
void selectionNumLowToHigh(int array[], int size) {
    for (int i = 0; i < size-1; i++) {
        int min;
        min = i;
        for (int j = i+1; j < size; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        
        if (min !=i) {
            swap(array[i], array[min]);
        }
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}
void selectionCharHighToLow(char array[], int size) {
    for (int i = 0; i < size-1; i++) {
        int max;
        max = i;
        for (int j = i+1; j < size; j++) {
            if (array[j] > array[max]) {
                max = j;
            }
        }
        
        if (max !=i) {
            swapChar(array[i], array[max]);
        }
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}
void selectionCharLowToHigh(char array[], int size) {
    for (int i = 0; i < size-1; i++) {
        int min;
        min = i;
        for (int j = i+1; j < size; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        
        if (min !=i) {
            swapChar(array[i], array[min]);
        }
    }
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

//-------------------------------------------------------------------QuickSort functions-----------------------------------------------------------------------------------//

void quickSort_displayNumLowToHigh(int array[], int first, int last) {
    int size = last+1;

    quickSortNumLowToHigh(array, first, last);
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}
void quickSort_displayNumHighToLow(int array[], int first, int last) {
    int size = last+1;
    
    quickSortNumHighToLow(array, first, last);
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}
void quickSort_displayCharHighToLow(char array[], int first, int last) {
    int size = last+1;
    
    quickSortCharHighToLow(array, first, last);
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}
void quickSort_displayCharLowToHigh(char array[], int first, int last) {
    int size = last+1;
    
    quickSortCharLowToHigh(array, first, last);
    
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

int splitNumLtHArray(int array[], int pivot, int first, int last) {
    int left = first;
    int right = last;
    while (left < right) {
        while (pivot < array[right] && right > left) {
            right--;
        }
        swap(array[left], array[right]);
        while (pivot >= array[left] && left < right) {
            left++;
        }
        swap(array[right], array[left]);
    }
    return left;
}
int splitNumHtLArray(int array[], int pivot, int first, int last) {
    int left = first;
    int right = last;
    while (left < right) {
        while (pivot >= array[right] && right > left) {
            right--;
        }
        swap(array[left], array[right]);
        while (pivot < array[left] && left < right) {
            left++;
        }
        swap(array[right], array[left]);
    }
    return left;
}
int splitCharHtLArray(char array[], int pivot, int first, int last) {
    int left = first;
    int right = last;
    while (left < right) {
        while (pivot >= array[right] && right > left) {
            right--;
        }
        swapChar(array[left], array[right]);
        while (pivot < array[left] && left < right) {
            left++;
        }
        swapChar(array[right], array[left]);
    }
    return left;
}
int splitCharLtHArray(char array[], int pivot, int first, int last) {
    int left = first;
    int right = last;
    while (left < right) {
        while (pivot < array[right] && right > left) {
            right--;
        }
        swapChar(array[left], array[right]);
        while (pivot >= array[left] && left < right) {
            left++;
        }
        swapChar(array[right], array[left]);
    }
    return left;
}

void quickSortNumLowToHigh(int array[], int first, int last) {
    int pivotPoint = array[first];
    int splitPoint;
    
    if (last > first) {
        splitPoint = splitNumLtHArray(array, pivotPoint, first, last);
        
        //array[splitPoint] = pivotPoint;
        //std::cout << "first" << std::endl;
        quickSortNumLowToHigh(array, first, splitPoint-1);
        //std::cout << "last" << std::endl;
        quickSortNumLowToHigh(array, splitPoint+1, last);
    }
}
void quickSortNumHighToLow(int array[], int first, int last) {
    int pivotPoint = array[first];
    int splitPoint;
    
    if (last > first) {
        splitPoint = splitNumHtLArray(array, pivotPoint, first, last);
        
        array[splitPoint] = pivotPoint;
        quickSortNumHighToLow(array, first, splitPoint-1);
        quickSortNumHighToLow(array, splitPoint+1, last);
    }
}
void quickSortCharHighToLow(char array[], int first, int last) {
    int pivotPoint = array[first];
    int splitPoint;
    
    if (last > first) {
        splitPoint = splitCharHtLArray(array, pivotPoint, first, last);
        
        array[splitPoint] = pivotPoint;
        quickSortCharHighToLow(array, first, splitPoint-1);
        quickSortCharHighToLow(array, splitPoint+1, last);
    }
}
void quickSortCharLowToHigh(char array[], int first, int last) {
    int pivotPoint = array[first];
    int splitPoint;
    
    if (last > first) {
        splitPoint = splitCharLtHArray(array, pivotPoint, first, last);
        
        array[splitPoint] = pivotPoint;
        quickSortCharLowToHigh(array, first, splitPoint-1);
        quickSortCharLowToHigh(array, splitPoint+1, last);
    }
}

//-------------------------------------------------------------------BinaryTreeSort functions-----------------------------------------------------------------------------------//

void insertNumHighToLow(TreeNodeNum* &root, int newData) {
    if (root == NULL) {
        root = new TreeNodeNum;
        root->data = newData;
        root->left = NULL;
        root->right = NULL;
        return;
    }
    else if (newData < root->data) {
        insertNumHighToLow(root->left, newData);
    } else {
        insertNumHighToLow(root->right, newData);
    }
}
void insertCharLowToHigh(TreeNodeChar* &root, char newData) {
    if (root == NULL) {
        root = new TreeNodeChar;
        root->data = newData;
        root->left = NULL;
        root->right = NULL;
        return;
    }
    else if (newData > root->data) {
        insertCharLowToHigh(root->left, newData);
    } else {
        insertCharLowToHigh(root->right, newData);
    }
}
void insertCharHighToLow(TreeNodeChar* &root, char newData) {
    if (root == NULL) {
        root = new TreeNodeChar;
        root->data = newData;
        root->left = NULL;
        root->right = NULL;
        return;
    }
    else if (newData < root->data) {
        insertCharHighToLow(root->left, newData);
    } else {
        insertCharHighToLow(root->right, newData);
    }
}
void insertNumLowToHigh(TreeNodeNum* &root, int newData) {
    if (root == NULL) {
        root = new TreeNodeNum;
        root->data = newData;
        root->left = NULL;
        root->right = NULL;
        return;
    }
    else if (newData > root->data) {
        insertNumLowToHigh(root->left, newData);
    } else {
        insertNumLowToHigh(root->right, newData);
    }
}

void printTreeNumHighToLow(TreeNodeNum* node) {
    if (node !=NULL) {
        printTreeNumHighToLow(node->right);
        std::cout << node->data << " ";
        printTreeNumHighToLow(node->left);
    }
}
void printTreeNumLowToHigh(TreeNodeNum* node) {
    if (node !=NULL) {
        printTreeNumLowToHigh(node->right);
        std::cout << node->data << " ";
        printTreeNumLowToHigh(node->left);
    }
}
void printTreeCharHighToLow(TreeNodeChar* node) {
    if (node !=NULL) {
        printTreeCharHighToLow(node->right);
        std::cout << node->data << " ";
        printTreeCharHighToLow(node->left);
    }
}
void printTreeCharLowToHigh(TreeNodeChar* node) {
    if (node !=NULL) {
        printTreeCharLowToHigh(node->right);
        std::cout << node->data << " ";
        printTreeCharLowToHigh(node->left);
    }
}

void binSortNumLowToHigh(int array[], int size) {
    TreeNodeNum* root;
    root = NULL;
    
    for (int i = 0; i < size; i++) {
        insertNumLowToHigh(root, array[i]);
    }
    
    printTreeNumLowToHigh(root);
}
void binSortNumHighToLow(int array[], int size) {
    TreeNodeNum* root;
    root = NULL;
    
    for (int i = 0; i < size; i++) {
        insertNumHighToLow(root, array[i]);
    }
    
    printTreeNumHighToLow(root);
}
void binSortCharLowToHigh(char array[], int size) {
    TreeNodeChar* root;
    root = NULL;
    for (int i = 0; i < size; i++) {
        insertCharLowToHigh(root, array[i]);
    }
    printTreeCharLowToHigh(root);
}
void binSortCharHighToLow(char array[], int size) {
    TreeNodeChar* root;
    root = NULL;
    for (int i = 0; i < size; i++) {
        insertCharHighToLow(root, array[i]);
    }
    printTreeCharHighToLow(root);
}
