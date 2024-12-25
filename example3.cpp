#include <iostream>
#include <string>

using namespace std;

// 다형성이 적용된 코드!
class Animal
{
public:
	Animal() {}
	virtual void bark() {};
};

class Lion : public Animal
{
public:
	Lion(string word) :m_word(word) {}
	void bark() { cout << "Lion" << " " << m_word << endl; }
private:
	string m_word;
};

class Wolf : public Animal
{
public:
	Wolf(string word) :m_word(word) {}
	void bark() { cout << "Wolf" << " " << m_word << endl; }

private:
	string m_word;
};

class Dog : public Animal
{
public:
	Dog(string word) :m_word(word) {}
	void bark() { cout << "Dog" << " " << m_word << endl; }

private:
	string m_word;
};

void print(Animal* animal)
{
	animal->bark();
}

int main()
{
	Lion lion("ahaaaaaa!");
	Wolf wolf("ohhhhh");
	Dog dog("oooooooooooooops");

	print(&lion);
	print(&wolf);
	print(&dog);

	return 0;
}
