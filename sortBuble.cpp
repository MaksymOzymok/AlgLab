#include<iostream>
#include <array>

void sortBuble(int arr[],int n) {
    bool minimal = true;
    int i = 0;
    int j = 0;
    int tmp;
    while (minimal) {
        minimal = false;
        j++;

        for (int i = 0; i < n - j; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                minimal = true;
            }

        }


    }
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] <<" ";
    }
}

int main()
{
    const int n = 6;
    int arr[n];
    for (int i = 0;i < n; i++){
        std::cin>>arr[i];
    }
    sortBuble(arr, 6 );

}