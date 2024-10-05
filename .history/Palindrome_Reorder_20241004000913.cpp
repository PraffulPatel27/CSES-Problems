#include<bits/stdc++.h>
using namespace std;
    int sum1=0;
    int sum2=0;
    vector<int>vec1;
    vector<int>vec2;
void findAns1(int n){
   
    while(n!=0){
       if(sum2>sum1){
        vec1.push_back(n);
        sum1+=n;
        n--;
       }else{
        vec2.push_back(n);
        sum2+=n;
        n--;
       }
    }
}
bool find(int n){
    int sum=((n*(n+1))/2);
    if(sum&1){
        return "NO";
    }else{
        findAns1(n);
    }
}
int main()
{
    int n;
    cin>>n;
    if(find(n)){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;  
        cout<<vec1.size()<<endl;
        int i=0;
        while(i<vec1.size()){
            cout<<vec1[i]<<" ";
            i++;
        }
        cout<<endl;
        cout<<vec2.size()<<endl;
        i=0;
        while(i<vec2.size()){
            cout<<vec2[i]<<" ";
            i++;
        }
    }
    


    return 0;
}