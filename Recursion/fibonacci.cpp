#include <iostream>
#include <unordered_map>

using namespace std;

#define VANSH_BDAY 5
#define DHRUV_BDAY 9

unordered_map<int, int> mem;

int fibo_mem(int n){
    if(n == 0)
        return VANSH_BDAY;
    if(n == 1)
        return DHRUV_BDAY;
    if(mem[n] != 0)
        return mem[n];
    
    mem[n] = fibo_mem(n-1) + fibo_mem(n-2);
    
    return mem[n];
}


int fibo(int n){
    if(n == 0)
        return VANSH_BDAY;
    if(n == 1)
        return DHRUV_BDAY;
    
    return fibo(n-1) + fibo(n-2);
}

int main(void){
    cout << fibo(20) << endl;
    return 0;
}

// 5 9 14 23 37 ...
// 0 1 2  3  4