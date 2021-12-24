#include<iostream>
#include <ctime>
using namespace std;

long long int fibonacci(long long int);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}



long long int fibonacci(long long int z){
    if(z == 0){
        return 0;

    }
    else if(z == 1)
    {
        return 1;
    }
    else if(z >1)
    {
        return fibonacci(z-1) + fibonacci(z-2);
    }
    else{
        return 0;
    }
}