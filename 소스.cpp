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
	Book()//������
	{
		cout << "å�� ������." << endl;
	}

	Book(const Book& book)
	{
		cout << "å�� �����Ѵ�." << endl;
	}

	~Book()
	{
		cout << "å�� ������." << endl;
	}

	void MakeBook(int Page, bool IsUse, int Name)
	{
		cout << "�� å�� �̸���" << Name << "�̴�." << endl;
		cout << "�������� =" << Page << endl;

		if (IsUse == 1)
		{
			cout << "���������� ���� �߰�å�̴�." << endl;
		}
		else
		{
			cout << "�����̴�." << endl;
		}
	}

	void CheckBook()
	{
		cout <<"å �̸� : " << Name << endl;
		cout << "������ �� : " << Page << endl;
		if (IsUse == 1)
		{
			cout << "���������� ���� �߰�å�̴�." << endl;
		}
		else
		{
			cout << "�����̴�." << endl;
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
		cout << "�ϸ�ũ ����." << endl;
	}

	~BookMark()
	{
		cout << "�ϸ�ũ �Ҹ�." << endl;
	}
};

int main()
{
	Book* book;
	BookMark* bookmark = (BookMark*)book;




	return 0;
}