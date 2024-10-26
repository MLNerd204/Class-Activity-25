#include "address.hpp"
#include "customer.hpp"

#include <iostream>
#include <string>

Address address;

int main() {
    Customer customer;

    cout<<"Enter customer ID: ";
    cin>>customer.id;
    cin.ignore();

    cout<<"Enter customer name: ";
    getline(cin, customer.name);

    cout<<"Enter customer email: ";
    getline(cin, customer.email);
    
    cout<<"Enter customer address:\n";
    cout<<"Street address: ";
    getline(cin, address.street);
    
    cout<<"City: ";
    getline(cin, address.city);
    
    cout<<"Zip Code: ";
    getline(cin, address.zipCode);

    cout<<"\nCustomer Details:\n";
    cout<<"ID: "<< customer.id<<"\n";
    cout<<"Name: "<< customer.name<<"\n";
    cout<<"Email: "<<customer.email<< "\n";
    cout << "Address: " << address.street << ", "
                  <<address.city<< ", "
                  <<address.zipCode<<endl;

    return 0;
}


