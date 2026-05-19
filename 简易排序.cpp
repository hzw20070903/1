#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
     for(i=0;i<n-1;i++)
        for (j = 0; j < n-i-1; j++) { // 最后i个元素已经有序
            if (arr[j] > arr[j+1]) { // 如果前面的元素比后面大，则交换（升序）
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("冒泡排序结果: ");
    for (int i=0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

