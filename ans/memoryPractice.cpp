#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

//Where is each variable (m, j, k, x, y, z, v) located in memory? (Stack vs Heap vs Static)
//When does each variable get destroyed? What is the scope of each variable?
int m = 1;//static, til end of execution

void bar(int j){ //stack, til end of function
    cout<<"Number: "<<j<<" | ";
}

void foo(int k){ //stack, til end of function
    bar(k);
    cout<<k<<endl;
}

int main(){
    int x = 5; //stack, til end of main
    int y = 6; //stack, til end of main

    int *z = new int(7); //heap, until delete is called
    int *v = new int(8); //heap, until delete is called

    delete z;
}