#include <iostream>
#include"Matrix.h"
using namespace std;

class MatrixCalculator
{
public:
	MatrixCalculator(int s)
	{
		int choice;
		int x, y;
		cout << "welcom to mohamed Matrix Calculator\n";
		cout << "-----------------------------------\n\n";
		cout << "1- Perform Matrix Addition\n";
		cout << "2- Perform Matrix Subtraction\n";
		cout << "3- Perform Matrix Multiplication\n";
		cout << "4- Matrix Transpose\n";
		cin >> choice;
		switch (s) {
		case 1:
			if (choice == 1) {
				cout << "enter first matrix order\n";
				cin >> x >> y;
				cout << "enter first matrix elements\n";
				Matrix<int> mat1(x, y);
				cin >> mat1;
				cout << "enter second matrix order\n";
				cin >> x >> y;
				cout << "enter second matrix elements\n";
				Matrix<int> mat2(x, y);
				cin >> mat2;
				if (mat1.getRows() != mat2.getRows() || mat1.getCols() != mat2.getCols())
					cout << "can't do this operation with two different order matrices\n";
				else { cout << "\n" << mat1 + mat2; }
			}
			else if (choice == 2) {
				cout << "enter first matrix order\n";
				cin >> x >> y;
				cout << "enter first matrix elements\n";
				Matrix<int> mat1(x, y);
				cin >> mat1;
				cout << "enter second matrix order\n";
				cin >> x >> y;
				cout << "enter second matrix elements\n";
				Matrix<int> mat2(x, y);
				cin >> mat2;
				if (mat1.getRows() != mat2.getRows() || mat1.getCols() != mat2.getCols())
					cout << "can't do this operation with two different order matrices\n";
				else { cout << "\n" << mat1 - mat2; }
			}
			else if (choice == 3) {
				cout << "enter first matrix order\n";
				cin >> x >> y;
				cout << "enter first matrix elements\n";
				Matrix<int> mat1(x, y);
				cin >> mat1;
				cout << "enter second matrix order\n";
				cin >> x >> y;
				cout << "enter second matrix elements\n";
				Matrix<int> mat2(x, y);
				cin >> mat2;
				if (mat1.getCols() != mat2.getRows())
					cout << "can't do multiplication operation while colomns of the first matrix dosenot equale the rows of the second matrix\n";
				else { cout << "\n" << mat1 * mat2; }
			}
			else if (choice == 4) {
				cout << "enter matrix order\n";
				cin >> x >> y;
				Matrix<int> mat(x, y);
				cout << "enter matrix elements\n";
				cin >> mat;
				cout << "\n" << mat.transpose();
			}
			break;
		case 2:
			if (choice == 1) {
				cout << "enter first matrix order\n";
				cin >> x >> y;
				cout << "enter first matrix elements\n";
				Matrix<float> mat1(x, y);
				cin >> mat1;
				cout << "enter second matrix order\n";
				cin >> x >> y;
				cout << "enter second matrix elements\n";
				Matrix<float> mat2(x, y);
				cin >> mat2;
				if (mat1.getRows() != mat2.getRows() || mat1.getCols() != mat2.getCols())
					cout << "can't do this operation with two different order matrices\n";
				else { cout << "\n" << mat1 + mat2; }
			}
			else if (choice == 2) {
				cout << "enter first matrix order\n";
				cin >> x >> y;
				cout << "enter first matrix elements\n";
				Matrix<float> mat1(x, y);
				cin >> mat1;
				cout << "enter second matrix order\n";
				cin >> x >> y;
				cout << "enter second matrix elements\n";
				Matrix<float> mat2(x, y);
				cin >> mat2;
				if (mat1.getRows() != mat2.getRows() || mat1.getCols() != mat2.getCols())
				cout << "can't do this operation with two different order matrices\n";
				else { cout << "\n" << mat1 - mat2; }
			}
			else if (choice == 3) {
				cout << "enter first matrix order\n";
				cin >> x >> y;
				cout << "enter first matrix elements\n";
				Matrix<float> mat1(x, y);
				cin >> mat1;
				cout << "enter second matrix order\n";
				cin >> x >> y;
				cout << "enter second matrix elements\n";
				Matrix<float> mat2(x, y);
				cin >> mat2;
				if (mat1.getCols() != mat2.getRows())
					cout << "can't do multiplication operation while colomns of the first matrix dosenot equale the rows of the second matrix\n";
				else { cout << "\n" << mat1 * mat2; }
			}
			else if (choice == 4) {
				cout << "enter matrix order\n";
				cin >> x >> y;
				Matrix<float> mat(x, y);
				cout << "enter matrix elements\n";
				cin >> mat;
				cout << "\n" << mat.transpose();
			}
			break;
		case 3:
			if (choice == 1) {
				cout << "enter first matrix order\n";
				cin >> x >> y;
				cout << "enter first matrix elements\n";
				Matrix<double> mat1(x, y);
				cin >> mat1;
				cout << "enter second matrix order\n";
				cin >> x >> y;
				cout << "enter second matrix elements\n";
				Matrix<double> mat2(x, y);
				cin >> mat2;
				if (mat1.getRows() != mat2.getRows() || mat1.getCols() != mat2.getCols())
					cout << "can't do this operation with two different order matrices\n";
				else { cout << "\n" << mat1 + mat2; }
			}
			else if (choice == 2) {
				cout << "enter first matrix order\n";
				cin >> x >> y;
				cout << "enter first matrix elements\n";
				Matrix<double> mat1(x, y);
				cin >> mat1;
				cout << "enter second matrix order\n";
				cin >> x >> y;
				cout << "enter second matrix elements\n";
				Matrix<double> mat2(x, y);
				cin >> mat2;
				if (mat1.getRows() != mat2.getRows() || mat1.getCols() != mat2.getCols())
					cout << "can't do this operation with two different order matrices\n";
				else { cout << "\n" << mat1 - mat2; }
			}
			else if (choice == 3) {
				cout << "enter first matrix order\n";
				cin >> x >> y;
				cout << "enter first matrix elements\n";
				Matrix<double> mat1(x, y);
				cin >> mat1;
				cout << "enter second matrix order\n";
				cin >> x >> y;
				cout << "enter second matrix elements\n";
				Matrix<double> mat2(x, y);
				cin >> mat2;
				if (mat1.getCols() != mat2.getRows())
					cout << "can't do multiplication operation while colomns of the first matrix dosenot equale the rows of the second matrix\n";
				else { cout << "\n" << mat1 * mat2; }
			}
			else if (choice == 4) {
				cout << "enter matrix order\n";
				cin >> x >> y;
				Matrix<double> mat(x, y);
				cout << "enter matrix elements\n";
				cin >> mat;
				cout << "\n" << mat.transpose();
			}
			break;
		}

	}
};

int main()
{
	int x;
	cout << "enter 1 for integer 2 for float 3 for double\n";
	cin >> x;
	MatrixCalculator mat(x);
}