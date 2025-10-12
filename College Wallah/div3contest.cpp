#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n], c1 = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            int count = 0;
            for (int j = 0; j < c1; j++)
            {
                if (arr[j] == arr[c1])
                {
                    count++;
                }
            }
            mp[arr[i]] = count;
            c1++;
        }
        int peri = 0;
        set<int> s;
        for (auto &it : mp)
        {
            if (it.second % 2 == 0)
            {
                peri += it.second * it.first;
            }
            else if (it.second > 1)
            {
                peri += (it.second - 1) * it.first;
            }
            else
            {
                s.insert(it.first);
            }
        }
        if (s.size() > 0)
        {

            auto it = s.end();
            it--;
            int largest = *it;
            it--;
            int second_largest = *it;
            peri = peri + largest + second_largest;
        }
        cout << peri << endl;
    }
}
