#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        getchar();
        deque<char>st;
        string s;
        cin>>s;
        for(int j=0; j<s.size(); j++)
        {
            char r=s[j];
            if(st.empty())
            {
                st.push_back(r);
                continue;
            }
            if(st.back()!=r)
            {
                if(r=='R'&&st.back()=='B'||r=='B'&&st.back()=='R')
                {
                    st.pop_back();
                    if(st.empty())
                    {
                        st.push_back('P');
                        continue;
                    }
                    if(st.back()=='P')
                    {
                        st.pop_back();
                    }
                    else
                    {
                        st.push_back('P');
                    }
                }
                else if(r=='R'&&st.back()=='G'||r=='G'&&st.back()=='R')
                {
                    st.pop_back();
                    if(st.empty())
                    {
                        st.push_back('Y');
                        continue;
                    }
                    if(st.back()=='Y')
                    {
                        st.pop_back();
                    }
                    else
                    {
                        st.push_back('Y');
                    }
                }
                else if(r=='B'&&st.back()=='G'||r=='G'&&st.back()=='B')
                {
                    st.pop_back();
                    if(st.empty())
                    {
                        st.push_back('C');
                        continue;
                    }
                    if(st.back()=='C')
                    {
                        st.pop_back();
                    }
                    else
                    {
                        st.push_back('C');
                    }
                }
                else
                {
                    st.push_back(r);
                }
            }
            else
            {
                st.pop_back();
            }
        }
        while(st.size()!=0)
        {
            cout<<st.front();
            st.pop_front();
        }
        cout<<"\n";

    }
}
