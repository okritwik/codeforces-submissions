#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int a, b, c;
    while (t--){
    cin>>a>>b>>c;
    if (a+1==b && b+1==c){
    cout<<"yes
";
        }
    else {
    cout<<"NO
";
        }
    }
    return 0;
}