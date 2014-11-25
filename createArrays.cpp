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
//  createArrays.cpp
//  HandIn5
//
//  Created by Frederik Vanggaard on 10/18/12.
//
//  Contact: contact@drudoo.com
//  
//

#include "createArrays.h"


void randomNumberArray(int array[], int size) {
    srand( (unsigned int) time(NULL));
    for ( int i=0; i<size; i++) {
        array[i] = rand()%size;
    }
}

void numberArray(int array[], int size) {
    std::cout << "Enter your " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        int num;
        std::cin >> num;
        array[i] = num;
    }
}

void randomCharArray(char array[], int size) {
    
    srand( (unsigned int) time(NULL));
    for ( int i=0; i<size; i++) {
        array[i] = (char)(rand() % 26 + 'a');
    }
    
}

void charArray(char array[], int size) {
    std::cout << "Enter your " << size << " letters: ";
    for (int i = 0; i < size; i++) {
        char c;
        std::cin >> c;
        array[i] = c;
    }
}



