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

int find_ind(const vector <int>& mas, int ind)
{
	int i = ind;
	int number = mas[i];
	while (i > 0)
	{
		if (number >= mas[i - 1])
			return i;
		i--;
	}
	return i;
}

void itc_add_sort(vector <int>& mas)
{
	for (int i = 0; i < mas.size() - 1; i++)
	{
		print_vec(mas);
		int j = i + 1;
		int num = mas[j];
		int ind = find_ind(mas, j);
		if (ind != j)
		{
			mas.erase(mas.begin() + j);
			mas.insert(mas.begin() + ind, num);
		}
	}
	print_vec(mas);
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
	itc_add_sort(mas);
	return 0;
}
