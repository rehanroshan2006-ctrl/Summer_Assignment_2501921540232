// PRODUCT OF DIGIT 
#include <iostream>
using namespace std;
int main(){
    int n,product = 1;
    cout << "Enter a no";
    cin>>n;

    while (n > 0) {
        product =product * (n %10) ;
        n = n/10;}
    
    cout << "Product of digts = " << product ;
    return 0 ;
}