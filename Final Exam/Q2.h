#include<iostream>
using namespace std;



class TextElement
{
private: 

char* input;
char* type;

public:

TextElement();
void setInput(char* s1);
char* checkType();

};

class Vocabulary
{

private:

char** bank;

public:

Vocabulary();
void addWord(char* s1);
void removeWord(char* s1);

};

class Sentence
{

public:

char* input;
char** bank;

Sentence();
virtual char* sortLength();
virtual char* sortAlpha();
virtual void token();

};

class System
{

private:

TextElement* t;
Vocabulary* v;
Sentence* s;

public:

System();

};


	


































