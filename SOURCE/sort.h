#include <iostream>
#include <fstream>
#include <cmath>
#include <time.h>
#include<stdlib.h>
#include<string.h>
using namespace std; 

void GenerateData(int a[], int n, int dataType);
int ConvertToNum(int i, char* argv[]);
int CharSortToNum(const char* ss);
void Sorting_Algorithm(int* a, int n, int SortMode, unsigned long long& count_compare);
void Sorting_Algorithm_runtime(int* a, int n, int SortMode);

//HEAP SORT
void Heapify_Original(int* arr, int n, int i);
void HeapSort_Original(int* arr, int n);
void Heapify(int* a, int n, int i, unsigned long long& count_compare);
void HeapSort_CountCompare(int* a, int n, unsigned long long& count_compare);

//BUBBLE SORT
void BubbleSort_Original(int* a, int n);
void BubbleSort_CountCompare(int* a, int n, unsigned long long& count_compare);

//FLASH SORT
void FlashSort_Original(int* a, int n);
void FlashSort_CountCompare(int* a, int n, unsigned long long& count_compare);

//SELECTION SORT
void SelectionSort_Original(int* a, int n);
void SelectionSort_CountCompare (int* a, int n, unsigned long long& countCompare);

//MERGE SORT
void Merge_Original(int* a, int left, int mid, int right);
void MergeSortFunc_Original(int* a, int left, int right);
void MergeSort_Original(int* a, int n);
void Merge(int* a, int left, int mid, int right, unsigned long long& count_compare);
void MergeSortFunc(int* a, int left, int right, unsigned long long& count_compare);
void MergeSort_CountCompare(int* a, int n, unsigned long long& count_compare);

//SHAKER SORT
void shakerSort_CountCompare(int* a, int n, unsigned long long& count_compare);
void shakerSort_Original(int* a, int n);

//SHELL SORT
void shellSort_original(int* arr, int n);
void shellSort_CountCompare(int* a, int n, unsigned long long& count_compare);

//INSERTION SORT
void insertionSort_Original(int a[], int n);
void insertionSort_CountCompare(int a[], int n, unsigned long long& count_compare);

//RADIX SORT
int getMax_Original(int* arr, int n);
void countSort_Original(int* arr, int n, int exp);
void radixSort_Original(int* arr, int n);
int getMax(int* arr, int n, unsigned long long& count_compare);
void countSort(int* arr, int n, int exp, unsigned long long& count_compare);
void radixSort_CountCompare(int* arr, int n, unsigned long long& count_compare);

//QUICK SORT
void QuickSortFunc_Original(int* a, int low, int high);
void QuickSort_Original(int* a, int n);
void QuickSortFunc(int* a, int low, int high,unsigned long long& count_compare);
void QuickSort_CountCompare(int* a, int n, unsigned long long& count_compare);

//COUNTTING SORT
void countingSort_original(int* arr, int n);
void countingSort_CountCompare(int* input, int n, unsigned long long& count_compare);




//PRINT AND WRITE
void printArray(int arr[], int n);
int* Copy_arr(int* a, int n);
void PrintSortingMode(int SortMode);
void ReadFile_ModeA(char* file_input[3], int* a, int n);
void Write_FileOutput(int* a, int n);
void Write_File(int* a, int n, string fileName);
void PrintCMD(int Output_Param, float running_time, unsigned long long count_compare);
void Print_CommandLine4(float running_time_1, float running_time_2, unsigned long long& count_compare_1, unsigned long long& count_compare_2);
int ReadFileandReturnModeA(char* file_input[3]);
int ReadFileandReturnModeC(char* file_input[4]);
void ReadFile_ModeC(char* file_input[4], int* a, int n);

//COMMAND LINE
void Command_line1(int argc, char* argv[]);
void Command_line3(int argc, char* argv[]);
void Command_line2(int argc, char* argv[]);
void Command_line4(int argc, char* argv[]);
void Command_line5(int argc, char* argv[]);
