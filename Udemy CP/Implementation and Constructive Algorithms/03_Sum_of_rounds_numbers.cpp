        #include<bits/stdc++.h>
        using namespace std;    

        int main(){
            int t;
            cin >> t;
            while(t--){
                int k=0;
                string n;
                vector<string>num;
                cin >> n;
                for(int i = 0 ; i< n.size() ; i++){
            
                    if(n[i] != '0'){
                        k++;
                        string round = string(1, n[i]); // single digit
                        round += string(n.size()- i - 1, '0'); // add trailing zeros
                        num.push_back(round);

                    }
                }
                cout << k << "\n";
                for(auto &it : num){
                    cout << it << " ";
                }
                cout << "\n";
            }
            return 0;
        }