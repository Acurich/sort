#include <iostream>
#include <vector>

using namespace std;

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void print_vec(const vector <int>& mas)
{
	for (int i = 0; i < mas.size(); i++)
	{
		cout << mas[i];
		if (i < mas.size() - 1)
			cout << " ";
	}
	cout << endl;
}

void itc_shaker_sort(vector <int>& mas)
{
	print_vec(mas);
	bool dir = true;
	int i = mas.size() - 1;
	int j = 0;
	while (i != 0)
	{
		bool changed = false;
		for (int x = 0; x < i; x++)
		{
			if (dir)
				j++;
			else
				j--;
			if (mas[j - 1] > mas[j])
			{
				swap(mas[j - 1], mas[j]);
				changed = true;
			}
			print_vec(mas);
		}
		dir = !dir;
		i--;
		if (!changed)
			break;
	}
}

int main()
{
	int n;
	cin >> n;
	vector <int> mas(n);
	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;
		mas[i] = number;
	}
	itc_shaker_sort(mas);
	return 0;
}
