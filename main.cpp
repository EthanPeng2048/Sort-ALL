#include <iostream>
#include <vector>
#include <algorithm>
#include "sort.h"
using namespace std;

const string sortAllIcon[6] = {
    "__________               _____        _______ ______ ______ ",
    "____  ___/______ __________  /_       ___    |___  / ___  / ",
    "_______ \\ _  __ \\__  ___/_  __/       __  /| |__  /  __  /  ",
    "______/ / / /_/ /_  /    / /_         _  ___ |_  /____  /___",
    "__/____/  \\____/ /_/     \\__/         /_/  |_|/_____//_____/",
    "_____________________________________________________________"
};

int main() {
    for (int printRows = 0; printRows <= 5; printRows++){
        cout << sortAllIcon[printRows] << endl;
    }
    cout << "Alpha 0.0.3" << endl;

    int choice;
    cout << "选择排序算法：" << endl;
    cout << "1. 选择排序" << endl;
    cout << "2. 插入排序" << endl;
    cout << "3. 冒泡排序" << endl;
    cout << "4. 桶排序" << endl;
    cout << "输入算法编号：" ;
    cin >> choice;
    if (choice == 1 || choice == 2 || choice == 3 || choice == 5){
    } else if (choice == 4) {
        cout << "您选择了桶排序，请不要输入小数！" << endl;
    } else {
        cout << "无效的选择" << endl;
        system("pause");
        return 1;
    }
    int n;
    cout << "输入要排序的数据个数：";
    cin >> n;
    vector<long double> arr(n); // 使用 vector 存储输入的数据
    cout << "输入要排序的数据（空格隔开数据）：" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    switch (choice) {
        case 1:
            selectionSort(arr);
            break;
        case 2:
            insertionSort(arr);
            break;
        case 3:
            bubbleSort(arr);
            break;
        case 4:
            bucketSort(arr);
            break;
        case 5:
            shellSort(arr);
            break;
        default:
            break;
    }

    cout << "排序好的数据：" << endl;
    for (int i = 0; i < n-1; i++) {
        cout << arr[i] << " , ";
    }
    cout << arr[n - 1];
    cout << endl;
    system("pause");
    return 0;
}
