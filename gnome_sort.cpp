#include <iostream>

using namespace std;

void gnome_sort(int arr[], int size){


    int i = 0;
    while(i < size){
        if(i == 0)
        i++;
        if(arr[i] >= arr[i - 1])
        i++;
        else{
            swap(arr[i], arr[i - 1]);
            i--;
        }
    }
    
    cout <<"Sorted array is: " <<endl;
    for(int i = 0; i < size; i++){
        cout <<arr[i] <<" ";
    }

    return;
}

int main(){

    int test_arr1[] = {10, 3, 5, 7, 9, 2, 4, 6, 1};
    int size = sizeof(test_arr1) / sizeof(test_arr1[0]);

    gnome_sort(test_arr1,size);

    return 0;
}