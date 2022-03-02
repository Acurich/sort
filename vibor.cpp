#include<iostream>
#include<vector>

using namespace std;

void print(const vector<int>& mas) {
    for (int i = 0; i < mas.size() - 1; i++) {
        cout << mas[i] << " ";
    }
    cout << mas[mas.size() - 1] << endl;
}

int main() {
    int n, nums;
    cin >> n;
    vector<int> mas;
    for (int i = 0; i < n; i++) {
        cin >> nums;
        mas.push_back(nums);
    }
    for (int i = 0; i < mas.size(); i++) {
        int min = i;
        for (int j = i; j < mas.size(); j++) {
            if (mas[j] < mas[min]) min = j;

        }
        if (min != i) swap(mas[i], mas[min]);
        print(mas);
    }
    return 0;
}
