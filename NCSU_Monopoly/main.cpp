#include <iostream>
// we're going to create a series of modularized functions useful in a monopoly game
using namespace std;

struct property
{
    char name[20];  // string variable for a name
    int price;
    int costPerNight;
};
// we're going to define a template class to handle


struct player
{
    char player_name[30];   // we allow the player to have a name of 29 characters + null char
    property *collection;  // we allocate an undefined array of properties
    int numOfProperties;    // we have a int field to track the number of properties each player has
};


void propertyInfo(property place)
{
        cout << "\tname:\t"<< place.name <<"\n\tprice:\t"<< place.price<<"\n\tRent:\t"<< place.costPerNight<< "\n" <<endl;
        return;
}


void playerInfo(player name)
{
    cout <<"\tName: "<< name.player_name <<"\n\tProperty: "<< name.collection->name <<"\n\tAsset Num: "<< name.numOfProperties<<"\n"<<endl;
    return;
}


// explicit specialization for trading properties
void Swap(player &p1, player &p2)
{
    property *temp = p1.collection;         // we allocate a temp ptr to a property
    p1.collection = p2.collection;
    p2.collection = temp;

    return;
}


// generic template function to swap two items, could be integers or structs
template <typename T>
void Swap(T &a, T &b)
{
    //cout << "\tname: "<< a.name << "\n\tprice: " << a.price <<"\n\tRent: "<< a.costPerNight <<endl;
    T temp = a; // we save
    //cout << "\tname: "<< temp.name << "\n\tprice: " << temp.price <<"\n\tRent: "<< temp.costPerNight <<endl;
    a = b;
    //cout << "\tname: "<< a.name << "\n\tprice: " << a.price <<"\n\tRent: "<< a.costPerNight <<endl;
    b = temp;
    //cout<<"\n"<<endl;
    //cout << "\tname: "<< a.name << "\n\tprice: " << a.price <<"\n\tRent: "<< a.costPerNight <<endl;
    //cout << "\tname: "<< b.name << "\n\tprice: " << b.price <<"\n\tRent: "<< b.costPerNight <<endl;
    //cout <<"\n\n"<<endl;
}


int main()
{
    // we allocate two properties to simulate when we players trade properties
    property Belltower = {"Bell Tower", 1000, 20};
    property Talley = {"Talley", 500, 0};

    player Nathan = {"Nathan", &Belltower, 1};
    player Rhea = {"Rhea", &Talley, 1};

    cout << "Pre-Property-Swap"<<endl;
    playerInfo(Nathan);
    playerInfo(Rhea);

    cout << "Post-Property-Swap"<<endl;
    Swap(Nathan, Rhea);
    playerInfo(Nathan);
    playerInfo(Rhea);

    return 0;
}
