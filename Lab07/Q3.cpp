#include<iostream>
#include<cstring>
using namespace std;

class AccountCategory
{
private:

int accountId;
string accountName;

public:

AccountCategory()
{
	accountId = 0;
	accountName = "";
}

AccountCategory(int id, string name)
{
	accountId = id;
	accountName = name;
}

void setAccountId(int id)
{
	accountId = id;
}

void setAccountName(string name)
{
	accountName = name;
}

int getAccountId()
{
	return accountId;
}

string getAccountName()
{
	return accountName;
}
};


class BankAccount
{
private:

string depositorName;
string accountNumber;
AccountCategory accountCat;
long balance;

public:

BankAccount()
{
	depositorName = "";
	accountNumber = "";
	accountCat = {0, ""};
	balance = 0;
}

BankAccount(string name, string accNum, AccountCategory accCat, long bal)
{
	depositorName = name;
	accountNumber = accNum;
	accountCat = accCat;;
	balance = bal;
}

bool depositAmount(long amountToDeposit)
{
	int amount;
	cout<<"Verify Amount, re-enter\n";
	cin>>amount;
	
	if (amount == amountToDeposit)
	{
		balance += amountToDeposit;
		return 1;
	}
	else
		return 0;
}

bool withdrawAmount(long amountToWithdraw)
{
	if (amountToWithdraw <= balance)
	{
		balance -= amountToWithdraw;
		return 1;
	}
	else
		return 0;
}

long getAmount()
{
return balance;
}
};


int main()
{
	AccountCategory accCat(0, "");
	BankAccount acc1("", "", accCat, 10000);
	acc1.depositAmount(500);
	acc1.withdrawAmount(20000);
	acc1.withdrawAmount(5000);
	cout<<"Balance: "<<acc1.getAmount();
return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
