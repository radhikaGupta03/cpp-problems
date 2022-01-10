//Part-c
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    map<int, string> mp;

    //Initializing map
    mp[1] = "hii";
    mp[2] = "hello";
    mp[3] = "Thank You";

    //Inserting in random order
    mp.insert(pair<int, string>(5, "Radhika"));
    mp.insert(pair<int, string>(4, "Welcome"));
    mp.insert(pair<int, string>(6, "Bye"));

    //Iterating and printing elements
    map<int, string>::iterator itr;
    cout << "\nThe map is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    //Finding key
    int key = 6;
    if (mp.find(key) != mp.end())
        cout << "Key found" << endl;
    else
        cout << "Key value is not present" << endl;

    //Assigning the elements from map1 to map2
    map<int, string> mp2(mp.begin(), mp.end());

    //Removing elements with key = x
    int x;
    x = mp2.erase(4);
    cout << "\nmp2.erase(4) : ";
    cout << x << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    //Size and MaxSize of map
    cout << "Size of map is : " << mp.size() << endl;
    cout << "Max. Size of map is : " << mp.max_size() << endl;

    //Checking if a map is empty or not
    if (mp.empty())
        cout << "Map is empty";
    else
        cout << "Map is not empty";

    //Clearing a map
    mp.clear();
    mp2.clear();

    return 0;
}