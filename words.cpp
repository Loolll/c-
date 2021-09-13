#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool exists(vector<auto> arr, auto object){
    return find(arr.begin(), arr.end(), object)!=arr.end();
}

int main(){
    vector<string> words;
    for(string temp; cin>>temp;){
        words.push_back(temp);
    }

    vector<string> blocked{"black", "women"};
    sort(words.begin(), words.end());

    for(string word:words){
        if(exists(blocked, word)){
            cout<<"NOOO ";
        }
        else{
            cout<<word<<" ";
        }
    }
    cout<<endl;
}