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

void itc_comb_sort(vector <int>& mas)
{
    int dist = (int)(mas.size() / 1.247);
    while (dist != 0)
    {
        int i_end = dist;
        while (i_end < mas.size())
        {
            int i_bek = i_end - dist;
            if (mas[i_end] < mas[i_bek])
            {
                swap(mas[i_end], mas[i_bek]);
                print_vec(mas);
            }
            i_end++;
        }
        dist = (int)(dist / 1.247);
    }
}

int main()
{
    int n;
    cin >> n;
    vector <int> mas(n);
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        mas[i] = num;
    }
    itc_comb_sort(mas);
    return 0;
}
