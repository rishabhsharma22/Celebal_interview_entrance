#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int num;
    vector<int> state;
    int elem;
    int i,j;
    bool abc;
    cin>>num;
    for(i=0;i<num;i++)
        {
            cin>>elem;
            state.push_back(elem);
        }
    for(i = 0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(state[i]==state[j])
            {
                cout<<j-i;
                abc = true;
                goto x;
            }
        }
    }
    if(!abc)
    {
        cout<<0;
    }
    x:;
    return 0;
}
