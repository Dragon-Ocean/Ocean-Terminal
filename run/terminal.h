#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<sstream>
using namespace std;
bool admin=false;
void version(){
    cout<<"Ocean Terminal 1.0.0 By Dragon Ocean"<<endl;
}
void ocexit(){
    exit(EXIT_SUCCESS);
}
void changemode(){
    if(admin==false){
        cout<<"ocean@ocean $ ";
    }
    else if(admin==true){
        cout<<"root@ocean $ ";
    }
}
void gettime(){
    time_t nowtime=time(NULL);
    tm* tm_t=localtime(&nowtime);
    stringstream nowtimes;
    nowtimes<<tm_t->tm_year+1900<<"-"<<tm_t->tm_mon+1<<"-"<<tm_t->tm_mday<<" "<<tm_t->tm_hour<<":"<<tm_t->tm_min<<":"<<tm_t->tm_sec;
    cout<<nowtimes.str()<<endl;
}