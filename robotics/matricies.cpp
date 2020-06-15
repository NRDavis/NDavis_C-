#ifndef MATRICIES_H
#define MATRICIES_H "matricies.h"
/* 
File name:				matricies.cpp
Author:					Nathan Davis
Date:					5.19.2020
*/

template <typename T>
matrix::matrix(){
	rows = 4;					// default to 4 rows
	columns = 4;				// default to 4 columns
	*array[][] = new T[rows][columns];
	int i = 0;
	int j = 0;
	while(i < 4){
		while(j < 4){
			array[i][j] = (T)0;		// Type casting this to be zero/null
			j++;
		}
		i++;
	}
}

template <typename T>
matrix::matrix(int r = 4, int c = 4, T *a[][] = 0){
	rows = r;
	columns = c;
	*array[][] = new T[rows][columns]; 
	int i = 0;
	int j = 0;
	while(i < rows){
		while(j < columns){
			array[i][j] = a[i][j];
			j++;
		}
		i++;
	}
}

template <typename T>
matrix::matrix(matrix &item){
	rows = item.numRow();
	columns = item.numCol();
	*array[][] = new T[rows][columns];
	
	int i = 0;
	int j = 0;
	while(i < rows){
		while(j < columns){
			*array[i][j] = item.get(i,j);
			j++;
		}
		i++;
	}
	

}	




int matrix::numRow(){
	return rows;
}

int matrix::numCol(){
	return columns;
}

void matrix::set(int row, int col, T value){
	array[row][column] = value;
	return;
}

template <typename T>
T matrix::get(int row, int col){
	return array[row][column];
}



#endif