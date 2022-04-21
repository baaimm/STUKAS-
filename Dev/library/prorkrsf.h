#include<iostream>
#include<string>
#include"input.h"
int Stuka5::prorkrsf(int x, int i){
    if(i < 0){
        return i;
    }
    else{
        jmlhsks += b[i];
        tot += sks * b[i];
        return prorkrsf(x,(i-1));
    }
}