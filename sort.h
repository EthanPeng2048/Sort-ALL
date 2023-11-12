#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 选择排序
inline void selectionSort(vector<long double>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        // 交换arr[i]和arr[minIndex]
        swap(arr[i], arr[min]);
        }
    }
}

// 插入排序
inline void insertionSort(vector<long double>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        long double key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// 冒泡排序
inline void bubbleSort(vector<long double>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// 桶排序
inline void bucketSort(vector<long double>& arr) {
    int n = arr.size();
    long double max = *max_element(arr.begin(), arr.end());
    vector<long double> bucket(max + 1, 0);
    for (int i = 0; i < n; i++) {
        bucket[arr[i]]++;
    }
    int index = 0;
    for (int i = 0; i <= max; i++) {
        for (int j = 0; j < bucket[i]; j++) {
            arr[index++] = i;
        }
    }
}

void shellSort(vector<long double>& arr) {
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            long double temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

#endif
