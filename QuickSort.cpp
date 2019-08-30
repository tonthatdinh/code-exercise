#include <iostream>

using namespace std;


int partition_arr(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j ++){
        //If current element is smaller than the pivot
        if (arr[j] < pivot){
            i ++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high){
    if (low < high){
        int pivot = partition_arr(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main()
{
/*    int n;
    cin >> n;
    for(int i = 0; i < n; i ++) cin >> a[i];
*/
    int arr[] = {1, 8, 3, 9, 4, 5, 7};
    quickSort(arr, 0, 6);
    for(int i = 0; i < 6; i ++)
        cout << arr[i] << " ";
    return 0;
}
