#include "Q2.h"

System::System()
{
	t = new TextElement;
	v = new Vocabulary;
	s = new Sentence;
}

TextElement::TextElement()
{
	input = new char[200];
	type = new char[20];
}

void TextElement::setInput(char* s1)
{
	input = s1;
}

char* TextElement::checkType()
{
	type = "Word";
	
	for (int i=0; i<200; i++)
	{
		if (input[i] = " ")
			type = "Sentence";
	}
	
return type;
}

Vocabulary::Vocabulary()
{
	bank = new char*[200];
	
	for (int i=0; i<200; i++)
		bank[i] = new char[20];
}

void Vocabulary::addWord(char* s1)
{
	if (bank[200] != NULL)
		cout<<"No more space"<<endl;
	
	for (int i=0; i<200; i++)
	{
		if (bank[i] == NULL)
			bank[i] = s1;
	}
}

void Vocabulary::removeWord(char* s1)
{
	for (int i=0; i<200; i++)
	{
		if (bank[i] == s1)
			bank[i] = NULL;
	}
}

Sentence::Sentence()
{
	input = new char[200];
	bank = new char*[200];
	
	for (int i=0; i<200; i++)
		bank[i] = new char[20];
}

char* Sentence::sortLength()
{
	int count = 0;
	for (int i=0; i<200; i++)
	{
		bank[count][i] = input[i];
		if (input[i] == " ")
		{
			count++;
		}
	}
	int count2 = 0;
	int count3 = 0;
	char temp[20];
	for (int i = 0; i<200-1; i++)
	{
		for (int j=0; j<20; j++)
		{
			if (bank[i][j] != "\0")
				count2++;
			if (bank[i+1][j] !="\0")
				count3++;
		}
		
		if (count2 > count3)
		{
			temp = bank[i];
			bank[i] = bank[i+1];
			bank[i+1] = temp;
		}
	}
	
return bank;
}
		
char* Sentence::sortAlpha()
{
	int count = 0;
	for (int i=0; i<200; i++)
	{
		bank[count][i] = input[i];
		if (input[i] == " ")
		{
			count++;
		}
	}
	int count2 = 0;
	int count3 = 0;
	char temp[20];
	for (int i = 0; i<200-1; i++)
	{
		int a = bank[i][0];
		int b = bank[i=1][0];
		
		if (a > b)
		{
			temp = bank[i];
			bank[i] = bank[i+1];
			bank[i+1] = temp;
		}
	}
	
return bank;
}
			
			
void Sentence::token()
{
	int count = 0;
	for (int i=0; i<200; i++)
	{
		bank[count][i] = input[i];
		if (input[i] == " ")
		{
			count++;
		}
	}	

	cout<<"['";
	for (int i=0; i<200; i++)
	{
		cout<<bank[i]<<", "
	}
	cout<<"']"<<endl;
	
}

int main()
{

	char t1[200] = "This is a test kindly verify results of test";
	TextElement text;
	
	text.setInput(t1);
	cout<<text.checkInput;
	
return 0;
}
































	
	

