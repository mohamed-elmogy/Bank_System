#include<iostream>
using namespace std;
template<class T>
class Matrix
{
private:
	int Rows;
	int Cols;
	T** matrix;
public:
	Matrix(int Rows, int Cols) {
		this->Rows = Rows;
		this->Cols = Cols;
		matrix = new T * [Rows];
		for (int i = 0;i < Rows;i++)
		{
			matrix[i] = new T[Cols];
		}
		for (int i = 0;i < this->Rows;i++)
		{
			for (int j = 0;j < this->Cols;j++)
				matrix[i][j] = NULL;
		}
	}
	int getRows()
	{
		return this->Rows;
	}
	int getCols()
	{
		return this->Cols;
	}
	T getElem(int i, int j)
	{
		return matrix[i][j];

	}
	void AddElem(int i, int j, T element)
	{
		matrix[i][j] = element;
	}
	Matrix operator+(Matrix mat)
	{

			for (int i = 0;i < Rows;i++)
			{
				for (int j = 0;j < Cols;j++)
				{
					mat.AddElem(i, j, (mat.getElem(i, j) + matrix[i][j]));
				}
			}

			return mat;
	}
	Matrix operator-(Matrix mat)
	{

			for (int i = 0;i < Rows;i++)
			{
				for (int j = 0;j < Cols;j++)
				{
					mat.AddElem(i, j, -(mat.getElem(i, j) - matrix[i][j]));
				}
			}

			return mat;
	}
	Matrix operator *(Matrix mat)
	{
			Matrix<T> MAT(this->Rows, mat.getCols());
			for (int i = 0;i < this->Rows;i++)
			{
				for (int j = 0;j < mat.getCols();j++)
				{
					for (int k = 0;k < this->Cols;k++)
					{
						MAT.AddElem(i, j, MAT.getElem(i, j) + matrix[i][k] * mat.getElem(k, j));
					}
				}
			}
			return MAT;
	}
	Matrix  transpose()
	{
		Matrix<T> Mat(this->Cols, this->Rows);
		for (int i = 0;i < this->Rows;i++)
		{
			for (int j = 0;j < this->Cols;j++)
			{
				Mat.AddElem(j, i, this->matrix[i][j]);
			}
		}
		return Mat;
	}
	friend ostream& operator<<(ostream& out, const Matrix& mat)
	{
		for (int i = 0;i < mat.Rows;i++)
		{
			for (int j = 0;j < mat.Cols;j++)
			{
				out << mat.matrix[i][j] << " ";
			}
			out << endl;
		}
		return out;
	}
	friend istream& operator>>(istream& in, Matrix& mat)
	{
		T temp;
		for (int i = 0;i < mat.getRows();i++)
		{
			for (int j = 0;j < mat.getCols();j++)
			{
				in >> temp;
				mat.AddElem(i, j, temp);
			}
		}
		return in;
	}
};
