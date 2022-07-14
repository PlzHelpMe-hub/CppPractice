#include <iostream>
#include <vector>

using namespace std;

class Book
{

public:
	int Page = 200;
	bool IsUse = 1;
	int Name = 11111;

public:
	Book()//생성자
	{
		cout << "책을 만들자." << endl;
	}

	Book(const Book& book)
	{
		cout << "책을 복사한다." << endl;
	}

	~Book()
	{
		cout << "책을 찢었다." << endl;
	}

	void MakeBook(int Page, bool IsUse, int Name)
	{
		cout << "이 책의 이름은" << Name << "이다." << endl;
		cout << "페이지는 =" << Page << endl;

		if (IsUse == 1)
		{
			cout << "누군가에게 사용된 중고책이다." << endl;
		}
		else
		{
			cout << "새삥이다." << endl;
		}
	}

	void CheckBook()
	{
		cout <<"책 이름 : " << Name << endl;
		cout << "페이지 수 : " << Page << endl;
		if (IsUse == 1)
		{
			cout << "누군가에게 사용된 중고책이다." << endl;
		}
		else
		{
			cout << "새삥이다." << endl;
		}
	}
};

class BookMark : public Book
{
public:
	int MarkPoint;
public:
	BookMark()
	{
		cout << "북마크 생성." << endl;
	}

	~BookMark()
	{
		cout << "북마크 소멸." << endl;
	}
};

int main()
{
	Book* book;
	BookMark* bookmark = (BookMark*)book;




	return 0;
}