#include<iostream>
#include<cstring>
using namespace std;

class Matrix
{
private:

int rows;
int col;
int **mat;

public:

Matrix();
Matrix(int r, int c);
void operator=(const Matrix& m1);
bool operator==(const Matrix& m1);
Matrix operator+(int x);
Matrix operator-(int x);
Matrix operator+(Matrix m1);
Matrix operator-(Matrix m1);
void Display();
~Matrix();
};

class Item
{
private:

string name;
int num;
int rate;

public:

Item();
Item(string itemName, int quantity, int Prate);
Item operator++();
Item operator--();
Item operator++(int x);
Item operator--(int x);
Item operator+=(int n);
Item operator-=(int n);
void operator+(const Item& item);
int operator~();
void operator!();
};

class ShoppingCart
{
private:

Item* list;
int price;
int size;

public:

ShoppingCart();
ShoppingCart(Item* items, int total, int current);
void operator+=(Item i);
void operator-=(string s);
int operator~();
void operator!();

};



