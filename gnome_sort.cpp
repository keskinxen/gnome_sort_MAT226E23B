#include <iostream>

using namespace std;

void gnome_sort(int arr[], int size){


    int i = 0;
    while(i < size){
        if(i == 0)
        i++;
        if(arr[i] >= arr[i - 1])// If the current element is greater or equal to the previous element, move to the next index
        i++;
        else{ // Else the current element must be smaller than the previous element, swap them and move back to the previous index
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

    int test_arr1[] = {10, 3, 5, 7, 9, 8, 2, 4, 6, 1};
    int size = sizeof(test_arr1) / sizeof(test_arr1[0]);

    gnome_sort(test_arr1,size);

    return 0;
}
