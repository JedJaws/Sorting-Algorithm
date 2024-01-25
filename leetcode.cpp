#include <iostream>
#include <algorithm>

int main(){

    std::string ans="";
        std::sort(v.begin(),v.end());
        int n=v.size();
        std::string first=v[0],last=v[n-1];
        for(int i=0;i< std::min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }

    return 0;
}