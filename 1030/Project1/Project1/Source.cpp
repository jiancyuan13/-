#include<iostream>
#include <algorithm>
using namespace std;
void change_size(int*& arr, int size) {
    int* new_arr = new int[size * 2];    // 創建一個新的陣列，大小是原來的兩倍
    int* rec = arr;    // 將原陣列的指標存起來
    copy(arr, arr + size, new_arr);    // 將原陣列的內容複製到新陣列中
    delete[] rec;    // 刪除原來的陣列
    arr = new_arr;   // 更新指標，讓 arr 指向新陣列
}
int main(void) {
    int size = 5;
    int* arr = new int[size];    // 動態分配一個整數陣列
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; // 將陣列填充為1,2,3,4,5
    }
    cout << "擴充前:";
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
    change_size(arr, size);    // 擴充陣列
    int newsize = size * 2; // 新陣列的大小是原來的兩倍
    for (int z = size; z < newsize; z++) {
        arr[z] = 0; //將陣列填充為 1,2,3,4,5,0,0,0,0,0
    }
    cout << "擴充後:";
    for (int k = 0; k < newsize; k++) {
        cout << arr[k] << " "; 
    }
    cout << endl;
    delete[] arr;// 刪除動態分配的陣列，釋放內存
}
