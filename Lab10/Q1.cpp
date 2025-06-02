#include "Q1.h"

//ALL FUNCTIONS MADE BUT MAIN REMAINING

Matrix::Matrix()
{
	rows = 0;
	col = 0;
	mat = 0;

}

Matrix::Matrix(int r, int c)
{
	rows = r;
	col = c;

	mat = new int*[rows];

	for (int i=0; i<rows; i++)
		mat[i] = new int[col];

	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<col; j++)
			mat[i][j] = j;
	}
}

void Matrix::operator=(const Matrix& m1)
{
	rows = m1.rows;
	col = m1.col;

	mat = new int*[rows];

	for (int i=0; i<rows; i++)
		mat[i] = new int[col];

	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<col; j++)
			mat[i][j] = m1.mat[i][j];
	}
}

bool Matrix::operator==(const Matrix& m1)
{
	int count1 = 0, count2 = 0;

	if (rows != m1.rows || col != m1.col)
		return 0;

	for (int i=0; i<rows; i++)
	{
		count1 = 0;

		for (int j=0; j<col; j++)
		{
			if (mat[i][j] == m1.mat[i][j])
			{
				count1++;
				continue;
			}
			else
				break;
		}

		if (count1 == col)
			count2++;
	}

	if (count2 == rows)
		return 1;

return 0;
}

Matrix Matrix::operator+(int x)
{
	Matrix m2;
	m2.rows = rows;
	m2.col = col;
	m2.mat = new int*[rows];

	for (int i=0; i<m2.rows; i++)
		m2.mat[i] = new int[m2.col];

	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<col; j++)
		{
			m2.mat[i][j] = mat[i][j];
			m2.mat[i][j] += x;
		}
	}

return m2;
}

Matrix Matrix::operator-(int x)
{
	Matrix m2;
	m2.rows = rows;
	m2.col = col;
	m2.mat = new int*[rows];

	for (int i=0; i<m2.rows; i++)
		m2.mat[i] = new int[m2.col];

	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<col; j++)
		{
			m2.mat[i][j] = mat[i][j];
			m2.mat[i][j] -= x;
		}
	}

return m2;
}

Matrix Matrix::operator+(Matrix m1)
{
	if (rows != m1.rows || col != m1.col)
	{
		cout<<"Sizes dont match\n";
		return *this;
	}

	Matrix m2;
	m2.rows = rows;
	m2.col = col;
	m2.mat = new int*[rows];

	for (int i=0; i<rows; i++)
		m2.mat[i] = new int[m2.col];

	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<col; j++)
		{
			m2.mat[i][j] = mat[i][j];
			m2.mat[i][j] += m1.mat[i][j];
		}
	}

return m2;
}
Matrix Matrix::operator-(Matrix m1)
{
	if (rows != m1.rows || col != m1.col)
	{
		cout<<"Sizes dont match\n";
		return *this;
	}

	Matrix m2;
	m2.rows = rows;
	m2.col = col;
	m2.mat = new int*[rows];

	for (int i=0; i<m2.rows; i++)
		m2.mat[i] = new int[m2.col];

	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<col; j++)
		{
			m2.mat[i][j] = mat[i][j];
			m2.mat[i][j] -= m1.mat[i][j];
		}
	}

return m2;
}

void Matrix::Display()
{
	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<col; j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}

}

Matrix::~Matrix()
{
	for (int i=0; i<rows; i++)
		delete [] mat[i];

	delete [] mat;
}



Item::Item()
{
	name = "";
	num = 0;
	rate = 0;
}

Item::Item(string itemName, int quantity, int Prate)
{
	name = itemName;
	num = quantity;
	rate = Prate;
}

Item Item::operator++()
{
	num += 1;
	return *this;
}
Item Item::operator--()
{
	--num;
	return *this;
}
Item Item::operator++(int x)
{
	Item copy(name, num, rate);

	num += 5;
	return copy;
}
Item Item::operator--(int x)
{
	Item copy(name, num, rate);

	num += 5;
	return copy;
}

Item Item::operator+=(int n)
{
	num += n;
	return *this;
}
Item Item::operator-=(int n)
{
	num += n;
	return *this;
}

void Item::operator+(const Item& item)
{
	if (name != item.name)
	{
		cout<<"Name no Match\n";
		return;
	}

	num += item.num;
}

int Item::operator~()
{
	return num*rate;
}

void Item::operator!()
{
	cout<<"Item Name: "<<name<<endl<<"Quantity: "<<num<<endl<<"Price per Unit: "<<rate<<endl;
}

ShoppingCart::ShoppingCart()
{
	price = 0;
	size = 0;
	list = 0;
}
ShoppingCart::ShoppingCart(Item* items, int total, int current)
{
	price = total;
	size = current;

	list = new Item [size];

	for (int i=0; i<size; i++)
		list[i] = items[i];
}
void ShoppingCart::operator+=(Item i)
{
	int count = size;
	count++;
	Item* temp = new Item[count];

	for (int i=0; i<size; i++)
		temp[i] = list[i];

	temp[count-1] = i;
	delete [] list;
	list = temp;
	size++;

}
/*void ShoppingCart::operator-=(string s)
{
	for (int i=0; i<size; i++)
	{
		if (list[i].name == s)


	}
}*/
int ShoppingCart::operator~()
{
	int total=0;

	for (int i=0; i<size; i++)
	{
		total += ~list[i];
	}
	return total;
}
void ShoppingCart::operator!()
{
	for (int i=0; i<size; i++)
	{
		!list[i];
	}
}

int main()
{
	cout<<"Question 1\n";

	Matrix m1(2,2);
	Matrix m2(2,2);
	Matrix m3;

	cout<<"Matrix 1:"<<endl;
	m1.Display();

	cout<<"Matrix 2:"<<endl;
	m2.Display();

	cout<<"After = operator"<<endl;
	m1 = m2;
	m1.Display();

	cout<<"Are the matrices equal?\n";
	if (m1 == m2)
		cout<<"yes\n";
	else
		cout<<"no\n";

	cout<<"Scalar addition\nM1 + 1\n";
	m3 = m1 + 1;
	m3.Display();

	cout<<"Scalar Subtraction\nM1 - 4\n";
	m3 = m1 - 4;
	m3.Display();

/*	cout<<"Matrix addition\nM1 + M2\n";
	m3 = m1 + m2;
	m3.Display();

	cout<<"Matrix subtraction\nM1 - M2\n";
	m3 = m1 - m2;
	m3.Display();
*/
return 0;
}
