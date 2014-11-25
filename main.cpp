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
//  main.cpp
//  HandIn5
//
//  Created by Frederik Vanggaard on 10/18/12.
//

#include <iostream>
#include "sortingFunctions.h"
#include "createArrays.h"
using namespace std;

int main() {
    int SIZE;
    int choice;
    do {
        
        cout << "Welcome to this package program.\n"
             << "You have five different functions to use.\n"
             << "Choose 1-6\n"
             << "1: bubble sort\n"
             << "2: insertion sort\n"
             << "3: selection sort\n"
             << "4: quick sort\n"
             << "5: binary tree sort\n"
             << "6: exit\n";
        
        int bChoice, bNChoice, bLChoice;
        char bLRChoice, bCRChoice;
        
        int insertionNumberOrLetter, insertionCharHighOrLow;
        int insHighOrLow;
        char insertionRandom;
        
        int selectionNumberOrLetter, selHighOrLow, selectionCharHighOrLow;
        char selectionRandom;
        
        int quickNumberOrLetter, quickHighOrLow, quickCharHighOrLow;
        char quickRandom;
        
        int binNumberOrLetter, binHighOrLow, binCharHighOrLow;
        char binRandom;
        
        cin >> choice;
        
        switch (choice) {
            case 1: //------------------------------------------------------------------------------BUBBLE-----------------------------------------------------------------------------//
                
                cout << "Do you want to sort numbers or letters?\n"
                     << "1: numbers\n"
                     << "2: letters\n";
                
                cin >> bChoice;
                switch (bChoice) {
                    case 1: {
                        
                        cout << "Choose the length of your array: ";
                        cin >> SIZE;

                        int array[SIZE];
                        
                        cout << "Do you want random numbers?(y/n): ";
                        cin >> bLRChoice;
                        switch (bLRChoice) {
                            case 'y':
                                randomNumberArray(array, SIZE);
                                break;
                                
                            case 'n':
                                numberArray(array, SIZE);
                                break;
                                
                            default:
                                break;
                        }
                        

                        
                        cout << "How do you want your numbers sorted?\n"
                             << "1: Low to High\n"
                             << "2: High to Low\n";
                        cin >> bNChoice;
                        cout << "Your numbers sorted: ";
                        
                        
                        switch (bNChoice) {
                            case 1:
                                sortNumLowToHigh(array, SIZE);
                                break;
                                
                            case 2:
                                sortNumHighToLow(array, SIZE);
                                break;
                                
                            default:
                                break;
                        }
                        
     
                        break;
                    }
                    case 2: {
                        cout << "Choose the length of your array: ";
                        cin >> SIZE;
                        
                        char array[SIZE];
                        
                        cout << "Do you want random letters?(y/n): ";
                        cin >> bCRChoice;
                        switch (bCRChoice) {
                            case 'y':
                                randomCharArray(array, SIZE);
                                break;
                                
                            case 'n':
                                charArray(array, SIZE);
                                break;
                                
                            default:
                                break;
                        }
                        
                        
                        cout << "How do you want your letters sorted?\n"
                        << "1: Low to High\n"
                        << "2: High to Low\n";
                        cin >> bLChoice;
                        cout << "Your letters sorted: ";
                        
                        
                        switch (bLChoice) {
                            case 1:
                                sortCharLowToHigh(array, SIZE);
                                break;
                                
                            case 2:
                                sortCharHighToLow(array, SIZE);
                                break;
                                
                            default:
                                break;
                        }
                        
                        break;
                    }
                    default:
                        break;
                }
                
                break;
                
            case 2:   //------------------------------------------------------------------------------INSERTION-----------------------------------------------------------------------------//
                cout << "Do you want to sort numbers or letters?\n"
                     << "1: numbers\n"
                     << "2: letters\n";
                
                cin >> insertionNumberOrLetter;
                switch (insertionNumberOrLetter) {
                    case 1: {
                        cout << "Choose the length of your array: ";
                        cin >> SIZE;
                        
                        int array[SIZE];
                        
                        cout << "Do you want random numbers?(y/n): ";
                        cin >> insertionRandom;
                        switch (insertionRandom) {
                            case 'y':
                                randomNumberArray(array, SIZE);
                                break;
                                
                            case 'n':
                                numberArray(array, SIZE);
                                break;
                            default:
                                break;
                        }
                        
                        cout << "How do you want your numbers sorted?\n"
                             << "1: Low to High\n"
                             << "2: High to Low\n";
                        
                        cin >> insHighOrLow;
                        cout << "Your numbers sorted: ";
                        
                        
                        switch (insHighOrLow) {
                            case 1:
                                insertionNumLowToHigh(array, SIZE);
                                break;
                                
                            case 2:
                                insertionNumHighToLow(array, SIZE);
                                break;
                                
                            default:
                                cout << "What is this sorcery!" << endl;
                                break;
                        }
                        
                        break;
                        
                    }
                    case 2: {
                        cout << "Choose the lenght of your array: ";
                        cin >> SIZE;
                        
                        char array[SIZE];
                        cout << "Do you want random letters?(y/n): ";
                        cin >> insertionRandom;
                        switch (insertionRandom) {
                            case 'y':
                                randomCharArray(array, SIZE);
                                break;
                            case 'n':
                                charArray(array, SIZE);
                                break;
                            default:
                                break;
                        }
                        
                        cout << "How do you want your letters sorted?\n"
                             << "1: Low to High\n"
                             << "2: High to Low\n";
                        cin >> insertionCharHighOrLow;
                        cout << "Your chars sorted: ";
                        
                        
                        switch (insertionCharHighOrLow) {
                            case 1:
                                insertionCharLowToHigh(array, SIZE);
                                break;
                            case 2:
                                insertionCharHighToLow(array, SIZE);
                                break;
                                
                            default:
                                break;
                        }
                        
                        break;
                        
                    }
                    default:
                        break;
                }
                
                break;
                
            case 3:   //------------------------------------------------------------------------------SELECTION-----------------------------------------------------------------------------//
                cout << "Do you want to sort numbers or letters?\n"
                     << "1: numbers\n"
                     << "2: letters\n";
                
                cin >> selectionNumberOrLetter;
                switch (selectionNumberOrLetter) {
                    case 1: {
                        cout << "Choose the length of your array: ";
                        cin >> SIZE;
                        int array[SIZE];
                        
                        cout << "Do you want random numbers?(y/n): ";
                        cin >> selectionRandom;
                        switch (selectionRandom) {
                            case 'y':
                                randomNumberArray(array, SIZE);
                                break;
                            case 'n':
                                numberArray(array, SIZE);
                                break;
                            default:
                                break;
                        }
                        
                        cout << "How do you want your numbers sorted?\n"
                        << "1: Low to High\n"
                        << "2: High to Low\n";
                        
                        cin >> selHighOrLow;
                        cout << "Your numbers sorted: ";
                        
                        switch (selHighOrLow) {
                            case 1:
                                selectionNumLowToHigh(array, SIZE);
                                break;
                            case 2:
                                selectionNumHighToLow(array, SIZE);
                            default:
                                break;
                        }
                        
                        break;
                    }
                    case 2: {
                        cout << "Choose the length of your array: ";
                        cin >> SIZE;
                        char array[SIZE];
                        cout << "Do you want random letters?(y/n): ";
                        cin >> selectionRandom;
                        switch (selectionRandom) {
                            case 'y':
                                randomCharArray(array, SIZE);
                                break;
                            case 'n':
                                charArray(array, SIZE);
                                break;
                            default:
                                break;
                        }
                        
                        cout << "How do you want your letters sorted?\n"
                             << "1: Low to High\n"
                             << "2: High to Low\n";
                        cin >> selectionCharHighOrLow;
                        cout << "Your chars sorted: ";
                        
                        switch (selectionCharHighOrLow) {
                            case 1:
                                selectionCharLowToHigh(array, SIZE);
                                break;
                            case 2:
                                selectionCharHighToLow(array, SIZE);
                                break;
                            default:
                                break;
                        }
                        
                        break;
                    }
                    default:
                        break;
                }
                
                
                break;
                
            case 4:   //------------------------------------------------------------------------------QUICK-----------------------------------------------------------------------------//
                cout << "Do you want to sort numbers or letters?\n"
                     << "1: numbers\n"
                     << "2: letters\n";
                
                cin >> quickNumberOrLetter;
                switch (quickNumberOrLetter) {
                    case 1: {
                        cout << "Choose the length of your array: ";
                        cin >> SIZE;
                        int array[SIZE];
                        
                        cout << "Do you want random numbers?(y/n): ";
                        cin >> quickRandom;
                        switch (quickRandom) {
                            case 'y':
                                randomNumberArray(array, SIZE);
                                break;
                            case 'n':
                                numberArray(array, SIZE);
                                break;
                            default:
                                break;
                        }
                        
                        cout << "How do you want your numbers sorted?\n"
                             << "1: Low to High\n"
                             << "2: High to Low\n";
                        
                        cin >> quickHighOrLow;
                        cout << "Your numbers sorted: ";
                        
                        switch (quickHighOrLow) {
                            case 1:
                                quickSort_displayNumLowToHigh(array, 0, SIZE-1);
                                break;
                            case 2:
                                quickSort_displayNumHighToLow(array, 0, SIZE-1);
                            default:
                                break;
                        }
                        
                        break;
                    }
                    case 2: {
                        cout << "Choose the length of your array: ";
                        cin >> SIZE;
                        char array[SIZE];
                        cout << "Do you want random letters?(y/n): ";
                        cin >> quickRandom;
                        switch (quickRandom) {
                            case 'y':
                                randomCharArray(array, SIZE);
                                break;
                            case 'n':
                                charArray(array, SIZE);
                                break;
                            default:
                                break;
                        }
                        
                        cout << "How do you want your letters sorted?\n"
                             << "1: Low to High\n"
                             << "2: High to Low\n";
                        cin >> quickCharHighOrLow;
                        cout << "Your letters sorted: ";
                        
                        switch (quickCharHighOrLow) {
                            case 1:
                                quickSort_displayCharLowToHigh(array, 0, SIZE-1);
                                break;
                            case 2:
                                quickSort_displayCharHighToLow(array, 0, SIZE-1);
                                break;
                                
                            default:
                                break;
                        }
                        
                        break;
                    }
                    default:
                        break;
                }
                break;
                
            case 5:  //------------------------------------------------------------------------------BINARYTREE-----------------------------------------------------------------------------//
                
                cout << "Do you want to srot numbers or letters?\n"
                     << "1: numbers\n"
                     << "2: letters?\n";
                
                cin >> binNumberOrLetter;
                switch (binNumberOrLetter) {
                    case 1: {
                        cout << "Choose the length of your array: ";
                        cin >> SIZE;
                        int array[SIZE];
                        cout << "Do you want random numbers?(y/n): ";
                        cin >> binRandom;
                        switch (binRandom) {
                            case 'y':
                                randomNumberArray(array, SIZE);
                                break;
                            case 'n':
                                numberArray(array, SIZE);
                                break;
                            default:
                                break;
                        }
                        
                        cout << "How do you want your numbers sorted?\n"
                             << "1: Low to Hight\n"
                             << "2: High to Low\n";
                        cin >> binHighOrLow;
                        cout << "Your numbers sorted: ";
                        switch (binHighOrLow) {
                            case 1:
                                binSortNumLowToHigh(array, SIZE);
                                break;
                            case 2:
                                binSortNumHighToLow(array, SIZE);
                                break;
                            default:
                                break;
                        }
                        break;
                    }
                    case 2: {
                        cout << "Choose the length of your array: ";
                        cin >> SIZE;
                        char array[SIZE];
                        cout << "Do you want random letters?(y/n): ";
                        cin >> binRandom;
                        switch (binRandom) {
                            case 'y':
                                randomCharArray(array, SIZE);
                                break;
                            case 'n':
                                charArray(array, SIZE);
                                break;
                            default:
                                break;
                        }
                        
                        cout << "How do you want your letters sorted?\n"
                             << "1: Low to High\n"
                             << "2: High to Low\n";
                        cin >> binCharHighOrLow;
                        cout << "Your letters sorted: ";
                        switch (binCharHighOrLow) {
                            case 1:
                                binSortCharLowToHigh(array, SIZE);
                                break;
                            case 2:
                                binSortCharHighToLow(array, SIZE);
                                break;
                            default:
                                break;
                        }
                        break;
                    }
                    default:
                        break;
                }
                break;
                
            case 6:
                cout << "\nExiting...";
                break;
            default:
                cout << "\nChoose 1-6";
                break;
        }
        cout << endl << endl << endl;
    
    } while (choice !=6);
}



