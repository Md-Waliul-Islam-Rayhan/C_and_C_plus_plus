#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num, count = 0, x=0;
        cin >> num;

        char ch[num];

        for (size_t i = 0; i < num; i++)
        {
            string s;

            cin >> s;

            ch[i] = s[0];
        }

        sort(ch, ch + num);


        for (size_t i = 0; i < num; i++)
        {
            if (ch[i] == ch[i + 1])
            {
                count++;
                if (count >= 2)
                {
                    cout<<ch[i]<<endl;
                    count=0;
                }
                else{
                    count=0;
                }
            }
        }
        if (x!=0)
        {
            cout<<"impossible"<<endl;
        }
        
    }
}
