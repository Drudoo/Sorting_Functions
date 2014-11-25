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
//  createArrays.h
//  HandIn5
//
//  Created by Frederik Vanggaard on 10/18/12.
//
//  Contact: contact@drudoo.com
//  
//


/*----------------------------------
 
    How to use createArrays
 
 createArrays contains 4 functions.
 Each function requires two parameters.
 The first is a char or int array (depending on the function).
 The second is the length of the array.

 randomNumberArray - creates an array of random numbers (from 0 to size) and returns the array.
 numberArray - creates an array of input numbers and returns the array.
 
 randomCharArray - creates an array of random letters and returns the array.
 charArray - creates an array of input letters and returns the array.
 
 ----------------------------------*/

#ifndef __HandIn5__createArrays__
#define __HandIn5__createArrays__

#include <iostream>
#include <time.h>


void randomNumberArray(int array[], int size);
void numberArray(int array[], int size);

void randomCharArray(char array[], int size);
void charArray(char array[], int size);

#endif /* defined(__HandIn5__createArrays__) */
