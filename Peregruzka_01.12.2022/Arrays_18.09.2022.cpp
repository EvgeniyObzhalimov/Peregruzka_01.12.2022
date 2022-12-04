#include<iostream>
#include<iomanip>

int max(int mass[], int size) {
	int max = 0;
	max = mass[0];
	for (int i = 0; i < size; i++) 
		if (mass[i] > max) {
			max = mass[i];
		}
	return max;
	
}

double max(double mass[], double size) {
	double max = 0;
	max = mass[0];
	for (int i = 0; i < size; i++)
		if (mass[i] > max) {
			max = mass[i];
		}
	return max;

}

int max(int mass[][3], const int hight, const int lenght) {
	int max = 0;
	max = mass[0][0];
	for (int i = 0; i < hight; i++) {
		for (int j = 0; j < lenght; j++) 
		{
			if (mass[i][j] > max) 
			{
			max = mass[i][j];
			}
		}
	}
		
	return max;
}
double max(double mass[][3], const int hight, const int lenght) {
	double max = 0;
	max = mass[0][0];
	for (int i = 0; i < hight; i++) {
		for (int j = 0; j < lenght; j++)
		{
			if (mass[i][j] > max)
			{
				max = mass[i][j];
			}
		}
	}

	return max;
}
void print2d(double mass[3][3], int hight, int lenght) {
	
	for (int i = 0; i < hight; i++) {
		for (int j = 0; j < lenght; j++) {
		std::cout << "[" << mass[i][j] << "]";
		}
		std::cout << "\n";
	}
	
}
void print3d(int mass[3][3][3], int hight, int lenght, int widht) 
{

	for (int i = 0; i < hight; i++)
		{
		
		for (int j = 0; j < lenght; j++) {
			
			for (int z = 0; j < lenght; j++) {
				
			std::cout <<  "[" << mass[i][j][z] << "]";
			}
		std::cout << "\n";
		}
	std::cout << "\n";
	}

}

int max(int mass[3][3][3], int hight, int lenght, int widht)
{
	int max = 0;
	max = mass[0][0][0];

	for (int i = 0; i < hight; i++)
	{
		
		for (int j = 0; j < lenght; j++) {
		
			for (int z = 0; j < lenght; j++) {

				if (mass[i][j][z] > max)
				{
					max = mass[i][j][z];
				}
			}
		
		}
		
	}
	return max;
}

double max(double mass[3][3][3], int hight, int lenght, int widht)
{
	double max = 0;
	max = mass[0][0][0];

	for (int i = 0; i < hight; i++)
	{

		for (int j = 0; j < lenght; j++) {

			for (int z = 0; j < lenght; j++) {

				if (mass[i][j][z] > max)
				{
					max = mass[i][j][z];
				}
			}

		}

	}
	return max;
}

int max(int a, int b) {
	int max = a;
	if (a < b)
		max = b;
	return max;
	}


int main() {
	setlocale(LC_ALL, "Russian");
	int a = 1001;
	int b = 1010;
	int arr[5]{ 12,22,3,44,3 };
	double arr2[5]{ 12.22,22.11,333.1,44.21,3.23 };

	int matrix[3][3]{ {1,2,3},{4,8,3} };
	double matrix2[3][3]{ {12.2,44.3,66.3},{11.3,14.5,77.2} };
	int matrix3[3][3][3]
	{
		{
		{{1}},{{867}},{{9765}}
		},
		{
		{{3}},{{8}},{{3}}
		},
		{
		{{1}},{{74}},{{3}}
		}	
	};

	double matrix4[3][3][3]
	{
		{
		{{1.3}},{{867.34}},{{9765.34}}
		},
		{
		{{3.543}},{{8.78}},{{3.5}}
		},
		{
		{{1.432}},{{74.34}},{{3.45}}
		}
	};

	std::cout << "show max element of single array: "<<"\n";
	std::cout <<"single max "<< max(arr, 5) << "\n";
	std::cout << "double max "<<max(arr2, 5) << "\n";
	std::cout << "matrix max " << max(matrix, 3,3) << "\n";
	std::cout << "matrix double max " << max(matrix, 3, 3) << "\n";
	std::cout << "matrix double print "; std::cout << "\n";
	print2d(matrix2,3,3);
	std::cout << "matrix tripple print "; std::cout << "\n";
	print3d(matrix3, 3, 3,3);
	std::cout << "matrix tripple max "<<max(matrix3,3,3,3); std::cout << "\n";
	std::cout << "matrix tripple double max " << max(matrix4, 3, 3, 3); std::cout << "\n";
	std::cout << "single max " << max(a, b) << "\n";





	return 0;


}


