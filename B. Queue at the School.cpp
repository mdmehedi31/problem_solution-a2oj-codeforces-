#include<bits/stdc++.h>


using namespace std;

int main()
{

    int str;
    string strVal;
    int n;
    cin >> str >>n;
    cin>>strVal;
    char temp;
    while(n>0)
    {

        for(int i=0; i<strVal.size(); i++)
        {

            if(strVal[i]=='B' && strVal[i+1]!='B' && i+1<strVal.size())
            {

                temp=strVal[i];
                strVal[i]=strVal[i+1];
                strVal[i+1]=temp;

                i++;
            }
        }
        n--;
    }

    cout<<strVal;
    return 0;
}
