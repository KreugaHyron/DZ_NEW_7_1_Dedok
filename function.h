#pragma once
#ifndef FUNCTION_H
#define FUNCTION_H
#define INTEGER
// #define DOUBLE
// #define CHAR
#ifdef INTEGER
using DataType = int;
#define Show showInt
#elif defined DOUBLE
using DataType = double;
#define Show showDouble
#elif defined CHAR
using DataType = char;
#define Show showChar
#endif

void FillArray(DataType* array, int size);
void ShowArray(DataType* array, int size);
DataType FindMin(DataType* array, int size);
DataType FindMax(DataType* array, int size);
void SortArray(DataType* array, int size);
void EditValue(DataType* array, int index, DataType newValue);
void Show();
#endif