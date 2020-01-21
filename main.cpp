#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main() {
    string total;
    string response;
    int intTotal = 0;
    //ifstream idonationTotal("/Users/chriscivetta/Documents/School/Option 2 - C++ /DonationRecord/donation_total.txt");
    ifstream idonationTotal("../donation_total.txt");
        if (idonationTotal.is_open()) {
            getline(idonationTotal, total);
            cout << "Total: " + total << endl;
        } else {
            cerr << "File did not open" << endl;
        }
    idonationTotal.close();
    cout<<"Enter donations"<<endl;
    getline(cin, response);
    response = response.substr(response.find(" ")+1);
    intTotal = stoi(total) + stoi(response);
    //ofstream odonationTotal("/Users/chriscivetta/Documents/School/Option 2 - C++ /DonationRecord/donation_total.txt", ofstream::trunc);
    ofstream odonationTotal("../donation_total.txt", ofstream::trunc);
    odonationTotal<<intTotal<<endl;
    cout<<"New Total: " + to_string(intTotal)<<endl;
    return 0;
}