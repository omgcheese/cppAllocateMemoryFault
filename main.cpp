//
//  main.cpp
//  cppAllocateMemory
//
//  Created by Jinwook Lee on 2016-01-25.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#include <iostream>
using namespace std;

char* allocateMemory(){
    char str[20] = "Hello world.";
    return str;
    //The array str is a local variable, it is deallocated automatically when the execution flow leaves the function allocate Memory. There fore, the retuned memory to pString in the function test is actually invalid and its content is somewhat random.
}

int main() {
    
    char* pString = allocateMemory();
    printf("pString is %s.\n", pString);
    
    return 0;
}
