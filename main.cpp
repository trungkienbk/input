#include <iostream>
#include <vector>
#include <string.h>
#include <cstring>
using namespace std;
 std::vector<std::string> wave(std::string y){
    int n=y.length();
    vector<string> arr;
    int pos_Up=0;
    while(pos_Up<n){
       if(y.at(pos_Up)==' '){
           pos_Up++;
       } else {
           y.at(pos_Up)=y.at(pos_Up)-32;
           arr.push_back(y);
           y.at(pos_Up)=y.at(pos_Up)+32;
           pos_Up++;
       }
    }
    cout<<"arr[] ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return arr;
}
static std::string factors(int n){
     string res="";
     int dem;
    for(int i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            dem++;
            n /= i;
        }
        if(dem){
            if(dem > 1) {
                res=res+("("+to_string(i)+"**"+to_string(dem)+")");
              //  cout<<"("<<i;
               // cout << "**" << dem<<")";
            } else {
                res=res+"("+to_string(i)+")";
              //  cout <<"("<<i<<")";
            }
        }
    }
    return res;
 }
std::string greet(const std::string& name, const std::string& owner) {
    if(name==owner) {
        return "Hello boss";
    } else {
        return "Hello guest";
    }
}
int main(){
     int n,m;
     cin>>n>>m;
     int **arr;
     arr=new int*[n];
     for(int i=0;i<n;i++){
         arr[i]=new int[m];
     }
/* int *arr_test=new int[5];
    int** readArray()
    {
        int **ar = new int*[10];
        for(int i = 0; i<10; i++)
            ar[i] = new int[10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>ar[i][j];
                if(ar[i][j]==0){
                    j=10;
                    for(int k=j;k<10;k++){
                        ar[i][k]=0;
                    }
                }
            }
        }
        return ar;
    }
*/
}