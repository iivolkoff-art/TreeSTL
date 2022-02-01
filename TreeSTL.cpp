#include <iostream> 
#include <set>

using namespace std;


class Tree
{
private:
    set<int> m_s;
    int m_size;
    int m_searchnum;
    int m_delnum;
    int m_addnum;

public:
    void create()
    {
        cout << "Введите размер дерева: ";
        cin >> m_size;

        for (int i = 0; i < m_size; i++)
        {
           m_s.insert(rand() % 100);
        }
    }

    void search()
    {
        cout << "Введите искомое число дерева: ";
        cin >> m_searchnum;

        if (m_s.find(m_searchnum) != m_s.end())
        {
            cout << m_searchnum << " Есть такое число" << endl;
        }
        else
        {
            cout << m_searchnum << " Нет такого числа" << endl;
        }
    }

    void print()
    {
        cout << "Само дерево" << endl;

        for (auto& item : m_s)
        {
            cout << item << endl;
        }
    }

    void del()
    {
        cout << "Введите число, которое хотите удалить: ";
        cin >> m_delnum;
        m_s.erase(m_delnum);
    }

    void add()
    {
        cout << "Введите число, которое хотите добавить: ";
        cin >> m_addnum;
        m_s.insert(m_addnum);
    }
};


int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    Tree tree1;

    tree1.create();
    tree1.search();
    tree1.print();
    tree1.add();
    tree1.del();
    tree1.print();
}