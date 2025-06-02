#include Q1.h"

Product::Product()
{
	type = "";
	name = "";
	ID = 0;
	price = 0;
	quantity = 0;
	local = "";
}

Clothing::Clothing()
{
	size = "":
	colour = "";
	fabric = "";
}

void Clothing::setSize(string s1) override
{
	size = s1;
}

void Clothing::setColour(string s1) override
{
	colour = s1;
}

void Clothing::setFabric(string s1) override
{
	fabric = s1;
}

string Clothing::getSize() override
{
	return size;
}

string Clothing::getColour() override
{
	return colour;
}

string Clothing::getFabric() override
{
	return fabric;
}

void Clothing::setType(string s1) override
{
	type = s1;
}

void Clothing::setName(string s1) override
{
	name = s1;
}

void Clothing::setID(int s1) override
{
	ID = s1;
}Clothing::Clothing()
{
	size = "":
	colour = "";
	fabric = "";
}

void Clothing::setPrice(float s1) override
{
	price = s1;
}

void Clothing::setQuantity(int s1) override
{
	quantity = s1;
}

void Clothing::setLocal(string s1) override
{
	local = s1;
}

Customer::Customer()
{
	type = "";
	name = "";
	ID = 0;
	email = "";
	address = "";
	c1 = NULL;
}

void Customer::setType(string s1) 
{
	type = s1;
}

void Customer::setName(string s1) 
{
	name = s1;
}

void Customer::setID(int s1) 
{
	ID = s1;
}

void Customer::setCart(Cart* c) 
{
	c1 = c;
}

Cart::Cart()
{
	max = 10;
	p1 = new Product[max];
}

void Cart::operator+=(Product& p)
{
	if (p1[max] != NULL)
		cout<<"Full Cart"<<endl;
	
	for (int i=0; i<max; i++)
	{
		if (p1[i] == NULL)
		{
			p1[i] = p;
			break;
		}
	}
}

void Cart::operator-=(Product& p)
{	
	int count = 0;
	for (int i=0; i<max; i++)
	{
		if (p1[i] == p)
		{
			p1[i] == NULL;
			count++;
		}
	}
	
	if (count == 0)
		cout<<"Item not found"<<endl;
}

void Cart::operator++(Product& p)
{
	for (int i=0; i<max; i++)
	{
		if (p1[i] == p)
		{
			p1[i].quantity++;
		}
	}
}

void Cart::operator--(Product& p)
{
	for (int i=0; i<max; i++)
	{
		if (p1[i] == p)
		{
			p1[i].quantity--;
		}
	}
}

float Cart::operator~()
{
	float total = 0;
	for (int i=0; i<max; i++)
	{
		total += p1[i].price;
	}
return total;
}

ostream& Cart::operator<<(ostream& out, Cart c);
{
	for (int i=0; i<max; i++)
	{
		out<<"Name: "<<p1[i].name<<"\tQuantity: "<<p1[i].quantity<<"\tPrice: "<<p1[i].price<<endl;
	}
return out;
}

Books::Books()
{
	genre = "";
	author = "";
	publisher = "";
	year = 0;
}

void Books::setType(string s1) override
{
	type = s1;
}

void Books::setName(string s1) override
{
	name = s1;
}

void Books::setID(int s1) override
{
	ID = s1;
}
void Books::setPrice(float s1) override
{
	price = s1;
}

void Books::setQuantity(int s1) override
{
	quantity = s1;
}

void Books::setLocal(string s1) override
{
	local = s1;
}

void Books::setGenre(string s1) override
{
	genre = s1;
}
void setAuthor(string s1) override
{
	author = s1;
}

void setPublisher(string s1) override
{
	publisher = s1;
}

void setYear(int s1) override
{
	year = s1;
}

string getGenre() override
{
	return genre;
}

string getAuthor() override
{
	return author;
}

string getPublisher() override
{
	return publisher;
}
int getYear() override
{
	return year;
}

Electronics::Electronics()
{
	brand = "";
	model = "";
	RAM = "";
	storage = 0;
	size = 0;
}

void Electronics::setType(string s1) override
{
	type = s1;
}

void Electronics::setName(string s1) override
{
	name = s1;
}

void Electronics::setID(int s1) override
{
	ID = s1;
}
void Electronics::setPrice(float s1) override
{
	price = s1;
}

void Electronics::setQuantity(int s1) override
{
	quantity = s1;
}

void Electronics::setLocal(string s1) override
{
	local = s1;
}

void setBrand(string s1) override
{
	brand = s1;
}

void setModel(string s1) override
{
model = s1;
}
void setRAM(string s1) override
{RAM = s1;}
void setStorage(int s1) override {storage = s1;}
void setSize(int s1) override {size = s1;}
string getBrand() override {return brand;}
string getModel() override {return model;}
string getRAM() override {return RAM;}
int getStorage() override {return storage;}
int getSize() override {return size;}

System::System()
{
	p1 = new Product;
	e1 = new Electronics;
	b1 = new Books;
	c1 = new Clothing;
	cust = new Customer;
}










