#ifndef MATRIX_H
#define MATRIX_H
#include <bits/stdc++.h>
using namespace std;
class Matrix
{
    public:
        Matrix(int row, int col, int num[]);
        Matrix();
        void setRow(int row);
        void setCol(int col);
        void setData(int data[]);
        void setData(valarray<int> data);
        int getRow();
        int getCol();
        int getData(int num);
        valarray<int> getData();
        int getSize();
        void setSize(int siz);
        Matrix operator+  (Matrix mat2);
        Matrix operator-  ( Matrix mat2);
        Matrix operator*  ( Matrix mat2);
        Matrix operator+  ( int scalar);
        Matrix operator-  ( int scalar);
        Matrix operator*  ( int scalar);
        Matrix operator+= ( const Matrix &mat2);
        Matrix operator-= (const Matrix& mat2);
        Matrix operator+= (int scalar);
        Matrix operator-= (int scalar);
        Matrix operator++ (int);
        Matrix operator-- (int);
        bool operator== ( Matrix mat2);
        bool operator!= ( Matrix mat2);
        bool isSquare   ();
        bool isSymetric ();
        bool isIdentity ();
        Matrix transpose();
        ~Matrix();

    protected:

    private:
        valarray<int>data;
        int row,col;
};

#endif // MATRIX_H
