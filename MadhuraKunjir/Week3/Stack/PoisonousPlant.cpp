#include <bits/stdc++.h>
#include <stack>

using namespace std;

// Complete the poisonousPlants function below.
void poisonousPlants(vector<int> p) {
   
     stack<int> abc;
     vector<int> :: iterator it;
     it = p.begin();
     int n = p.size();
     int flag = 0;
     int count = 0;
     int psuhVal;
     cout<<"im in"<<endl;
     while(!abc.empty() || (abc.empty() && flag == 0)){
         if(flag == 1){
             abc.pop();
         }
         flag = 0;
            int k = p.size();
            for(int i=0;i<k;i++){
                if(!abc.empty()){
                if(abc.top() < p[0]){
                    psuhVal = abc.top();
                    abc.pop();
                }
                else{
                    p.push_back(p[0]);
                    psuhVal = abc.top();
                    abc.pop();
                }
                }
                if(psuhVal != p[0]){
                abc.push(p[0]);
                }
                if(flag == 0){
                    p.push_back(p[0]);
                }
                p.erase(it); 
                         flag = 1;
            }

            count += 1;
     }
     cout<<count;

}
int main(){
    vector<int> a = {3,6,2,7,5};
    poisonousPlants(a);
    return 0;
}