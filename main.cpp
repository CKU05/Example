#include<iostream>
#include<string>
#include<cassert>
#include <sstream>

using namespace std;

int add(string numbers){
    if(numbers.empty()){
        return 0;
    }
    stringstream ss(numbers);
    string num;
    int sum = 0;

    while (getline(ss, num, ',')) {
        sum += stoi(num);
    }

    return sum;
}

int main(){
    assert(add("")==0);
    assert(add("1")==1);
    assert(add("1,2")==3);

    cout<<"all test cases passed"<<endl;
    return 0;
}