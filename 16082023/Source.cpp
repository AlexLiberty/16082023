#include<stack>
#include<iostream>
#include<vector>
#include<set>//дерево бінарне
#include<map>//бінарне дерево асіціотивне
#include<string>
#include <algorithm>
#include "Car.h"
#include "Windows.h"

using namespace std;

//int main()
//{
//stack<int,vector<int>>st;
//st.push(13);
//st.push(5);
//st.push(10);
//st.push(6);
//st.push(7);
//st.emplace(9);
//
//auto container = st._Get_container();
//cout << container[2];
//for (auto el:container)
//{
//	cout << el<<" ";
//}
//container.push_back(77);
//cout << endl;
//
//while (!st.empty())
//{
//	cout << st.top() << " ";
//	st.pop();
//}
//
//cout << endl;
//
//
//
//cout << endl;
//
//return 0;
//}

//int main()
//{
//	/*set<int>set1;*/ //не показує у set якщо є повтори
//	multiset<int>set1;//через мультісет у бінарному дереві показує всі елементи у тому числі дубльовані
//	set1.emplace(100);
//	set1.emplace(-11);
//	set1.emplace(13);
//	set1.emplace(-11);//не показує у set якщо є повтори
//	set1.erase(100);//видалення, якщо вказуєм 101 помилка не показується
//	set<int>::iterator it;
//	for (it = begin(set1); it != end(set1); ++it)
//	{
//		cout << *it << " ";//не показує у set
//	}
//	auto res = set1.find(10);
//	cout << endl;
//	if (res == set1.end())
//	{
//		cout << "not found";
//	}
//	else
//	{
//		cout << *res;
//	}

//return 0;
//}


//int main()
//{
//	map<string, float>ourMap;
//	pair<string, char>p1 = { "Bogdan",7.8f };
//	ourMap.insert(p1);
//	ourMap.insert(make_pair<string, float>("Ivan", 8.7));
//	ourMap.emplace("Oleg", 10);
//	for (auto el : ourMap)
//	{
//		cout << el.first << ":"<<el.second<<endl;
//	}
//	
//return 0;
//
//}

//////////////////////////////////////////////////////////////////

//void print(int num)
//{
//	cout << num << " ";//var1
//}

//int main()
//{
//	vector < int>vec = { 1,2,3,4,5,-10 };
//	//for_each(vec.begin(), vec.end(), print);//var1
//	for_each(vec.begin(), vec.end(), [](int c){ cout << c << " "; });//var2
//
//	return 0;
//}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<Car> cars;
    cars.emplace_back("Авто 1", 2010, 25000.00);
    cars.emplace_back("Авто 2", 2011, 12000.00);
    cars.emplace_back("Авто 3", 2023, 15000.00);
    cars.emplace_back("Авто 4", 2023, 45000.00);

    auto minCar = min_element(cars.begin(), cars.end(), [](const Car& car1, const Car& car2) 
        {
        return car1.getPrice() < car2.getPrice();
        });

    auto maxCar = max_element(cars.begin(), cars.end(), [](const Car& car1, const Car& car2) 
        {
        return car1.getPrice() < car2.getPrice();
        });

    cout << "Найменше за ціною: " << minCar->getName() << " - " << minCar->getPrice() <<" грн. " << "\n";
   cout << "Найбільше за ціною: " << maxCar->getName() << " - " << maxCar->getPrice() <<" грн. " << "\n";

	return 0;
}
