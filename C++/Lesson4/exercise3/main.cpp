#include <iostream>
#include <cstring>
using namespace std;
// 在此处补充你的代码

class Array2{
private:
	int row;
	int col;
	int **array2D;
public:
	Array2(int i=0, int j=0)
	{
		if (i == 0 || j == 0)
		{
			array2D = NULL;
		}
		else
		{
			row=i;
			col=j;
			array2D = new int *[row];
			for( int i=0; i<row; i++ )
			{
				array2D[i] = new int [col] ;
			}
		}
	}
//	Array2()
//	{
//		array2D=NULL;
//		row=0;
//		col=0;
//	}

	Array2(Array2 &a)
	{
		if(!a.array2D)
		{
			array2D=NULL;
			row=0;
			col=0;
			return;
		}
		else
		{
			array2D = new int *[a.row];
			for (int i = 0; i < a.row; i++) {
				array2D[i] = new int[a.col];
				memcpy(array2D[i], a.array2D[i], sizeof(int)*col);
			}
			row = a.row;
			col = a.col;
		}
	}

	~Array2()
	{
		if (array2D)
		{
			for(int i =0; i < row; i++)
			{
				delete [] array2D[i];
			}
			delete[] array2D;
		}
	}

	int* operator[](int l)
	{
		return array2D[l];
	}

	int operator()(int i, int j)
	{
		return array2D[i][j];
	}

	Array2& operator=(const Array2& a)
	{
		if(array2D==a.array2D)
		{
			return *this;
		}

		if (a.array2D == NULL)
		{
			if (array2D)
			{
				for (int i = 0; i < row; i++)
				{
					delete[] array2D[i];
				}
				delete[] array2D;
			}
			array2D = NULL;
			row = 0;
			col = 0;
			return *this;
		}

		if (row < a.row || col < a.col)
		{
			if (array2D)
			{
				for (int i = 0; i < row; i++)
				{
					delete[] array2D[i];
				}
				delete[] array2D;
			}
			array2D = new int*[a.row];
			for (int k = 0; k < a.row; k++)
			{
				array2D[k] = new int[a.col];
				memcpy(array2D[k], a.array2D[k], sizeof(int)*a.col);
			}
			row = a.row;
			col = a.col;
			return *this;
		}
	}
};


int main() {
    Array2 a(3,4);
    int i,j;
    for(  i = 0;i < 3; ++i )
        for(  j = 0; j < 4; j ++ )
            a[i][j] = i * 4 + j;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;
    b = a;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}