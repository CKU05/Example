#include<iostream>
#include<string>
#include<cassert>

using namespace std;

int add(string numbers){
    if(numbers.empty()){
        return 0;
    }
    return stoi(numbers);
}

int main(){
    assert(add("")==0);
    assert(add("1")==1);

    cout<<"all test cases passed"<<endl;
    return 0;
}