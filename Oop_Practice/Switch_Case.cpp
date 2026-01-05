//problems on switch case

#include<iostream>
using namespace std;

void choose_date(int day){
    switch(day){
        case 1: cout<<"this is: monday"; break;
        case 2: cout<<"this is: tuesday";break;
        case 3: cout<<"this is: wednesday";break;
        case 4: cout<<"this is: thursday";break;
        case 5: cout<<"this is: friday";break;
        case 6: cout<<"this is: saturday";break;
        case 7: cout<<"this is: sunday";break;
         default: cout << "Invalid day!";
        
         
    }
}
enum city{
    mumbai=1,
    delhi,
    chennai,
    kolkata,
    hydarabad,
    bangluru,
    noida
};

void choose_city(city ct){
    switch(ct){
        case mumbai:cout<<"mumvai"; break;
        case delhi: cout<<"delhi"; break;
        case chennai : cout<<"chennai"; break;
        case kolkata:  cout<<"kolkata"; break;
        case hydarabad : cout<<"hydarabad"; break;
        case bangluru: cout<<"bangluru"; break;
        case noida:  cout<<"noida";
    }
}

 
int main(){
    // int d;
    // cout<<"enter the day "<<endl;
    // cin>>d;
    // choose_date(d);
    
    int x;
    cout<<"enter the city: "<<endl;
    cin>>x;
    choose_city((city)x);
    
    return 0;
}