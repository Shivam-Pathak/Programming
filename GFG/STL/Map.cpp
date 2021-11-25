#include <bits/stdc++.h>
using namespace std;

//Only Unique Key will be inserted otherwise not get inserted
//Any type of key or value can be take as input

void solve(){
    int n;
    cin>>n;
    map<string,int> result;
    for(int i=0;i<n;i++)
    {
        string name;
        int marks;
        cin>>name>>marks;
        result.insert({name,marks});
    }  

    //Assigning the values of result to result 2
     map<string, int> result2(result.begin(), result.end());

    //Remove element with Key rahul
    result2.erase("rahul");

    //Check if the key is Present in map or Not (Return 1 or 0)
    if(result.count("Shivam"))
        cout<<"Present"<<endl;
    else
        cout<<"Not Present"<<endl;
    
    //Print Element of map
    cout<<endl<<"----- Result 1 ----"<<endl;
    for(auto itr = result.begin();itr!=result.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }

    //Insert element in Result 2
    result2.emplace("piyush",50);

    cout<<"----- Result 2 ----"<<endl;
    for(auto itr = result2.begin();itr!=result2.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }

    
}
  
int main()
{
    #ifndef Online_Judge
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int tc=1;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}