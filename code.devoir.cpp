#include<vector>
#include<stdexcept>
#include<iostream>
using namespace std ;
void test(const vector<int>& params){
    cout<<params.size()<<" parametres"<<endl;
}
int main()
{
    try{
        for(size_t i=1; ;i*=3){
            vector<int>params(i,1);
            test(params);
        }
    }catch (const bad_alloc& e){
        cout<<"erreur :"<<e.what()<<endl;
    }
    return 0;
}
