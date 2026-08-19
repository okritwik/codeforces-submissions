#include<iostream>
#include<vector>
using namespace std;
void result(){
    int num;
    cin>>num;
    vector<int> a(num);
    bool is_67= false;
    
    for (int i=0; i<num; i++)
    {
        cin>>a[i];
        if (a[i]==67)
        is_67 = true;
    }
    if (is_67){
        cout<<" YES "<<endl;
    }
    else 
    cout<<" NO "<<endl;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    result();
 
    return 0;
}