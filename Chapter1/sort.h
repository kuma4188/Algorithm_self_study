#pragma once
#ifndef SORT_H
#define SORT_H

#include <vector>
using namespace std;

// 예시로 정렬 함수 하나 선언
void selection_sort(int N, int arr[]);
void insert_sort(int N, int arr[]);
void bubble_sort(int N, int arr[]);
void bubble_sort_optimized(int N, int arr[]);
void quick_sort(vector<int>& arr);
void merge_sort(vector<int>& arr);
void heap_sort(vector<int>& arr);

#endif
