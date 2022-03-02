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

void itc_bubble_sort(vector <int>& mas)
{
    for (int i = 0; i < mas.size(); i++)
    {
        for (int j = 1; j < mas.size() - i; j++)
        {
            if (mas[j - 1] > mas[j])
            {
                swap(mas[j - 1], mas[j]);
            }
            print_vec(mas);
        }
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
    itc_bubble_sort(mas);
    return 0;
}
