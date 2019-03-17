#include <iostream>
#include <array>

int main(){
    const int n = 6;
    int i;
    int j;
    int a[n];
    for(i= 0;i<n;i++){
        std::cin>>a[i];
    }
    for(i = 0;i < n; i++){
        for(int j = i;j > 0 && a[j-1]>a[j];j--){
            std::swap(a[j-1],a[j]);
        }
    }
    for(i = 0;i<n;i++){
        std::cout<<a[i]<<" ";
    }
}