#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Person {
    string name;
    int voted;
};

void pk(vector<Person> &p);
void end(vector<Person> &female, vector<Person> &male);
int cmp(const Person &a, const Person &b);

int main() {
    int n,m;
    cin >> n >> m;
    vector<Person> female(n), male(m);
    for(int i=0;i<n;i++){
        cin >> female[i].name;
        cin >> female[i].voted;
    }
    for(int i=0;i<m;i++){
        cin >> male[i].name;
        cin >> male[i].voted;
    }
    string str;
    while(cin >> str){
        if(str == "PK"){
            cin >> str;
            cout << "PK " << str << endl;
            if(str == "FEMALE")pk(female);
            else pk(male);
        }
        else if(str == "VOTE"){
            int i,j;
            cin >> i >> j;
            female[i].voted++;
            male[j].voted++;
        }
        else if(str == "END"){
            cout << "END" << endl;
            end(female,male);
            break;
        }
    }
}

void pk(vector<Person> &p){
    sort(p.begin(),p.end(),cmp);
    for(int i=0;i<p.size();i++){
        cout << i+1 << ' ' << p[i].name << " " << p[i].voted << endl;
    }
}

int cmp(const Person &a, const Person &b){
    if(a.voted!= b.voted)return a.voted > b.voted;
    else return a.name < b.name;
}

void end(vector<Person> &female, vector<Person> &male){
    sort(female.begin(),female.end(),cmp);
    sort(male.begin(),male.end(),cmp);
    vector<Person> p(female.size()+male.size());
    merge(female.begin(),female.end(),male.begin(),male.end(),p.begin(),cmp);
    for(int i=0;i<p.size();i++){
        cout << i+1 << ' ' << p[i].name << " " << p[i].voted << endl;
    }
}