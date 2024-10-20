#include<vector>
#include<stdexcept>
#include<iostream>
using namespace std ;
void testFonction(const vector<int>& params){
    cout<<"fonction appelee avec "<<params.size()<<" parametres"<<endl;
}
int main()
{
    try{
        for(size_t i=1; ;i*=3){
            vector<int>params(i,1);
            testFonction(params);
        }
    }catch (const bad_alloc& e){
        cout<<"error :"<<e.what()<<endl;
    }
    return 0;
}