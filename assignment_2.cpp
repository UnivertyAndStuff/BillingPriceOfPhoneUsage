#include <iostream>

using  namespace std;

float price;
float distance;
int duration;

string x;
int y;
string z;

float total = price * duration;
float t[3] = {total, total, total};
int sum = 0;



// this function holds the details of the subcribers
void details(string subcriberName, int phoneNumber, string international){
    cout << subcriberName << endl;
    cout << phoneNumber << endl;
    cout << international << endl;
}

int main(){
    float total[3];

    // the for loops is use to loop through the 10 subcribers
    for (int i = 0; i < 3; i++){
        sum += t[i];

        cout << "Enter name: " << endl;
        cin >> x;
        cout << "Enter phone number: " << endl;
        cin >> y;
        cout << "Are you international(Y/N): " << endl;
        cin >> z;
  
        details(x, y, z);

       
        cout << "Enter distnace: " << endl;
        cin >> distance;
        cout << "Enter duration: " << endl;
        cin >> duration;

        // this is for the people who eneter yes
        if(z == "Y"){
            if (distance < 25){
                price = 0.55;
                cout << "Your total price is RM" << total << endl;
            }else if (distance >= 25 and distance < 75){
                price = 0.85;
                cout << "Your total price is RM" << total << endl;
            }else if (distance >= 75 and distance < 300){
                price = 1.20;
                cout << "Your total price is RM" << total << endl;
            }else if (distance >= 300 and distance <= 1000){
                price = 2.20;

                cout << "Your total price is RM" << total << endl;
            }else{
                price = 3.20;
                cout << "Your total price is RM" << total << endl;
            } 
        // this is for the people who enter No 
        }else if (z == "N"){
            if (distance < 25){
                price = 0.35;
                cout << "Your total price is RM" << total << endl;
            }else if (distance >= 25 and distance < 75){
                price = 0.65;
                cout << "Your total price is RM" << total << endl;
            }else if (distance >= 75 and distance < 300){
                price = 1.00;
                cout << "Your total price is RM" << total << endl;
            }else if (distance >= 300 and distance <= 1000){
                price = 2.00;
                cout << "Your total price is RM" << total << endl;
            }else{
                price = 3.00;
                cout << "Your total price is RM" << total << endl;
            } 
        }
    }
    // this is to output the total price of the 10 subs
    cout << "Total is RM" << sum << endl;
}