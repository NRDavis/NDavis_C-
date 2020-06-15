/* 
File name:				matricies.h
Author:					Nathan Davis
Date:					5.19.2020
*/




template <typename T>
class matrix{
	private:
		int rows;
		int columns;
		T *array;
	
	public:
		matrix();																			// default constructor
		matrix(int r = 4, int c = 4, T *a = 0);	// Empty matrix constructor
		matrix(matrix &item);															// copy constructor
		
		
		int numRow();
		int numCol();
		void set(int row, int col, T value);
		T get(int row, int col);
		
		//operator*(matrix &item);
};