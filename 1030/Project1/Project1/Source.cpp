#include<iostream>
#include <algorithm>
using namespace std;
void change_size(int*& arr, int size) {
    int* new_arr = new int[size * 2];    // �Ыؤ@�ӷs���}�C�A�j�p�O��Ӫ��⭿
    int* rec = arr;    // �N��}�C�����Цs�_��
    copy(arr, arr + size, new_arr);    // �N��}�C�����e�ƻs��s�}�C��
    delete[] rec;    // �R����Ӫ��}�C
    arr = new_arr;   // ��s���СA�� arr ���V�s�}�C
}
int main(void) {
    int size = 5;
    int* arr = new int[size];    // �ʺA���t�@�Ӿ�ư}�C
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; // �N�}�C��R��1,2,3,4,5
    }
    cout << "�X�R�e:";
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
    change_size(arr, size);    // �X�R�}�C
    int newsize = size * 2; // �s�}�C���j�p�O��Ӫ��⭿
    for (int z = size; z < newsize; z++) {
        arr[z] = 0; //�N�}�C��R�� 1,2,3,4,5,0,0,0,0,0
    }
    cout << "�X�R��:";
    for (int k = 0; k < newsize; k++) {
        cout << arr[k] << " "; 
    }
    cout << endl;
    delete[] arr;// �R���ʺA���t���}�C�A���񤺦s
}
