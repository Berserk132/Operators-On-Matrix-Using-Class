// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 1 - Problem 2
// Program: CS213-2018-A1-T1-P2
// Purpose: Skeleton code for the student to start working
// Author:  Dr. Mohammad El-Ramly
// Date:    10 August 2018
// Version: 1.0


//Abdulrahman mohamed hassan Ahmed Sayed Ibrahim Ashraf Samir Ali
//20170150 20170021 20170053
//G1 G1 G2
#include <bits/stdc++.h>
#include"Matrix.cpp"
using namespace std;

inline ostream &operator<< (ostream &out , Matrix mat){
    for(int i=0;i<mat.getSize();++i){
        if (i%mat.getCol()==0 && i!=0 ) out<<endl;    //endl if its the last element in the row
        out<<mat.getData(i)<<" ";
    }
    return out;
}

inline istream& operator>> (istream& in, Matrix& mat)
{
    int row,col;
    valarray<int>data;
    cout<<"enter rows number : ";
    cin>>row;
    mat.setRow(row);
    cout<<"enter columns number : ";
    cin>>col;
    mat.setCol(col);
    mat.setSize(row*col);
    data.resize(row*col);
    cout<<"enter your matrix \n";
    for (int i=0;i<mat.getSize();i++)
    {
        in >> data[i];
    }
    mat.setData(data);
    return in;
}

int main()
{
  int data1 [] = {1,2,3,4,5,6,7,18};
  int data2 [] = {13,233,3,4,5,6,7,8};
  int data3 [] = {1,2,3,4,5,6,7,18};
  int data4 [] = {1,0,0,
                  0,1,0,
                  0,0,1};
  Matrix mat1(4,2,data1), mat2(2,4,data2), mat3(2,4,data3) ;
  Matrix mat4;
  mat4.setRow(3);
  mat4.setCol(3);
  mat4.setSize(3*3);
  mat4.setData(data4);
  cout<<"mat1\n"<<mat1<<"\nmat2\n"<<mat2<<"\nmat3\n"<<mat3<<"\nmat4\n"<<mat4<<endl;
  cout<<"3+2\n"<<(mat3+mat2)<<endl;
  mat3+=mat2;
  cout<<"3+=2\n"<<mat3<<endl;
  cout<<"1*2\n"<<mat1*mat2<<endl;
  mat1++;
  cout<<"1++\n"<<mat1<<endl;
  mat1--;
  cout<<"1--\n"<<mat1<<endl;
  cout<<"4 square\n"<<mat4.isSquare()<<endl;
  cout<<"4 identity\n"<<mat4.isIdentity()<<endl;
  cout<<"4 trans\n"<<mat4.transpose()<<endl;
  cout<<"4 symmetric\n"<<mat4.isSymetric()<<endl;

  cout<<"3 square\n"<<mat3.isSquare()<<endl;
  cout<<"3 identity\n"<<mat3.isIdentity()<<endl;
  cout<<"3 trans\n"<<mat3.transpose()<<endl;
  cout<<"3 symmetric\n"<<mat3.isSymetric()<<endl;


  return 0;

}
