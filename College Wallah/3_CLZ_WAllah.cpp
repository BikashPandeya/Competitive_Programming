#include<bits/stdc++.h>
using namespace std;

void print(vector <int> v){
    for(int i=0;i < v.size() ;i++){
        cout << v[i] << "  ";
    }
}

int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.pop_back(); // Remove last element

    v.insert(v.begin() , 5);
    v.insert(v.begin() + 2, 6); // Insert 6 at index 1
    cout << v.size() << "\n";
    print(v);

    for(auto &it : v){
        cout << it << "\n"; // Range based for loop
    }

    //*********************Sets ******************* */
    // set<int> s;
    // s.insert(12);
    // s.insert(11);
    // s.insert(12);   
    // s.insert(15);
    // s.insert(12);
    // for(auto &it:s){
    //     cout << it << " "; // Set will not allow duplicates and will print in sorted order
    // }
    // cout << "\n";
    // unordered_set<int> st;
    // st.insert(12);
    // st.insert(11);
    // st.insert(12);   
    // st.insert(15);
    // st.insert(12);
    // for(auto &it:st){
    //     cout << it << " "; // Unordered set will not allow duplicates and will not sort
    // }
  
    // cout << "\n";
    // multiset<int> stt;
    // stt.insert(12);
    // stt.insert(11);
    // stt.insert(12);   
    // stt.insert(15);
    // stt.insert(12);
    // for(auto &it:stt){
    //     cout << it << " "; // Multiset will allow duplicates and will print in sorted order
    // }



    //*****************************Maps*************************************** */
    map <int , string > map1;
    map1[1] = "Bikash";
    map1[1] = "Bikash";
   
    map1[100] = "Himal";  
    map1[3] = "Bikash3";  
    map1[3] = "Bikash3";  
    
    for(auto &it : map1){
        cout << it.first << " : " << it.second << "\n"; // Map will print in sorted order of keys
    }
    cout << "\n";



    unordered_map <int , string > umap1;
    umap1[1] = "Bikash";
    umap1[1] = "Bikash";
   
    umap1[100] = "Himal";  
    umap1[3] = "Bikash3";  
    umap1[3] = "Bikash3";  
    
    for(auto &it : umap1){
        cout << it.first << " : " << it.second << "\n"; // Unordered map will not sort the keys
    }
    cout << "\n";




    multimap <int , string > mmap1;
    pair <int ,string > p1 = {1,"Bikash"};
    mmap1.insert(p1);    
    mmap1.insert({100, "Himal"});  
    mmap1.insert({3, "Bikash3"});
    mmap1.insert({3, "Bikash3"});

    mmap1.insert({1, "Bikash"   }); // Multimap will allow duplicates and will print in sorted order of keys
    for(auto &it : mmap1){
        cout << it.first << " : " << it.second << "\n"; 
    }   

    cout << "\n";
    return 0;
}