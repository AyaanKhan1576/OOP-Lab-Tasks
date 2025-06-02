#include<iostream>
using namespace std;

class System
{
private:

Product* p1;
Product* e1;
Product* c1;
Product* b1;
Customer* cust;

public:

System();
setCustomer(Customer* cust1);

};

class Product
{

public:
string type;
string name;
int ID;
float price;
int quantity;
string local;

Product();
virtual void setType(string s1);
virtual void setName(string s1);
virtual void setID(int s1);
virtual void setPrice(float s1);
virtual void setQuantity(int s1);
virtual void setLocal(string s1);
virtual void setSize(string s1);
virtual void setColour(string s1);	
virtual void setFabric(string s1);
virtual string getSize();
virtual string getColour();
virtual string getFabric();
virtual void setGenre(string s1);
virtual void setAuthor(string s1);
virtual void setPublisher(string s1);
virtual void setYear(int s1);
virtual string getGenre();
virtual string getAuthor();
virtual string getPublisher();
virtual int getYear();
virtual void setBrand(string s1);
virtual void setModel(string s1);
virtual void setRAM(string s1);
virtual void setStorage(int s1);
virtual void setSize(int s1);
virtual string getBrand();
virtual string getModel();
virtual string getRAM();
virtual int getStorage();
virtual int getSize();

};

class Clothing : public Product
{
private:

string size;
string colour;
string fabric;

public:

Clothing();
void setType(string s1) override;
void setName(string s1) override;
void setID(int s1) override;
void setPrice(float s1) override;
void setQuantity(int s1) override;
void setLocal(string s1) override;
void setSize(string s1) overridvoid Clothing::setType(string s1) override
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
e;
void setColour(string s1) override;
void setFabric(string s1) override;
string getSize() override;
string getColour() override;
string getFabric() override;

};

class Customer
{
public:

string type;
string name;
string email;
string address;
Cart* c1;
int ID;

Customer();
void setType(string s1);
void setName(string s1);
void setID(int s1);
void setCart(Cart *c);
};

class Cart()
{

private:
int max;
Product* p1;

public:

Cart();
void operator+=(Product& p);
void operator-=(Product& p);
Product& operator++(Product& p);
Product& operator--(Product& p);
float operator~();
ostream& operator<<(ostream& out, Cart c);

};

class Books : public Product
{
private:

string genre;
string author;
string publisher;
int year;

public:

Books();
void setType(string s1) override;
void setName(string s1) override;
void setID(int s1) override;
void setPrice(float s1) override;
void setQuantity(int s1) override;
void setGenre(string s1) override;
void setAuthor(string s1) override;
void setPublisher(string s1) override;
void setYear(int s1) override;
string getGenre() override;
string getAuthor() override;
string getPublisher() override;
int getYear() override;

};

class Electronics : public Product
{
private:

string brand;
string model;
string RAM;
int storage;
int size

public:

Electronics();
void setType(string s1) override;
void setName(string s1) override;
void setID(int s1) override;
void setPrice(float s1) override;
void setQuantity(int s1) override;
void setBrand(string s1) override;
void setModel(string s1) override;
void setRAM(string s1) override;
void setStorage(int s1) override;
void setSize(int s1) override;
string getBrand() override;
string getModel() override;
string getRAM() override;
int getStorage() override;
int getSize() override;

};


























