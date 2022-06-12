#include "terminal.h"
int main(){
    string todo;
    while(1){
        changemode();
        getline(cin,todo);
        if(todo=="version"){
            version();
        }
        else if(todo=="sudo -i"){
            admin=true;
        }
        else if(todo=="sudo"){
            cout<<"em";
        }
        else if(todo=="exit"){
            if(admin==true){
                admin=false;
            }
            else if(admin==false){
                ocexit();
            }
        }
        else if(todo=="time"||todo=="date"){
            gettime();
        }
        else if(todo=="su"){
            cout<<"em";
        }
        else if(todo=="su root"){
            admin=true;
        }
        else{
            cout<<"Ocean:Command not found '"<<todo<<"'..."<<endl;
        }
    }
    return 0;
}