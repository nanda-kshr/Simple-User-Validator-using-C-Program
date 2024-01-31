#include<iostream>
#include<string>
using namespace std;

class userValidator{
    private:
        string uName, pWord;
        int reg;
        
    public:
        userValidator(string n,string p){
            uName = n;
            pWord = p;
        }
        void addRegNo(int r){
            reg = r;
        }
        void displayDet(string pos){
            if(pos=="user"){
                cout<<"\nUsername "<<uName<<endl;
                cout<<"Register Number "<<reg<<endl;
            }else if(pos == "admin"){
                cout<<"\nUsername "<<uName<<endl;
                cout<<"Register Number "<<reg<<endl;
                cout<<"Password "<<pWord<<endl;
            }else{
                cout<<"Error role not found";
            }
        }

};

int main(){

    while(1){
        cout<<"\nEnter your name : ";
        string name,pass,rpass,role;
        cin>>name;
        cout<<"\nEnter a password : ";
        cin>>pass;
        cout<<"\nReEnter the password : ";
        cin>>rpass;
        if(pass!=rpass){
            cout<<"Wrong password";
            continue;
        }
        userValidator user(name,pass);
        cout<<"\nEnter your Register Number : ";
        int reg;
        cin>>reg;
        user.addRegNo(reg);
        cout<<"\nEnter use role (user/admin): ";
        cin>>role;
        user.displayDet(role);
        
    }
    return 0;
}