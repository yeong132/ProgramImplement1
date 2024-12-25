#include <iostream>
#include <string>

using namespace std;

// 다형성이 적용되지 않은 Lion과 Wolf 클래스
class Lion
{
public:
	Lion(string word) :m_word(word) {}
	void bark() { cout << "Lion" << " " << m_word << endl; }
private:
	string m_word;
};

class Wolf
{
public:
	Wolf(string word) :m_word(word) {}
	void bark() { cout << "Wolf" << " " << m_word << endl; }

private:
	string m_word;
};

void print(Lion lion)
{
	lion.bark();
}

void print(Wolf wolf)
{
	wolf.bark();
}
int main()
{
	Lion lion("ahaaaaaa!");
	Wolf wolf("ohhhhh");

	print(lion);
	print(wolf);

	return 0;
}
