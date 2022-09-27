#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, x, last, N, valor=0, sum = 0;
    char M[9][9];
    vector<int> v;
    
    cin >> N;
    
    for(int t = 0 ; t < N ; t++){
        
        for(i = 0; i < 9 ; i++){
            for(j = 0; j< 9 ; j++){
                
                cin >> M[i][j];
            }
        }
        
       /** for(i = 0; i < 9 ; i++){
            for(j = 0; j< 9 ; j++){
                
                cout << M[i][j] << " ";
            }
            cout << endl;
        }*/
        
       // cout << endl;
        
        for(i = 0; i < 9; i++){
            
            if(M[i][i] != 46){
                x = (int)M[i][i] - 48;
                v.push_back(x);
            }
        }
        
        
        for(i = 1, j = 8; i < 9; i++, j--){
            
            if(M[i][j] != 46){
                x = (int)M[i][j] - 48;
                v.push_back(x);
            }
        }
        
        
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
            
                if(M[i][j] != 46){
                    x = (int)M[i][j] - 48;
                    v.push_back(x);
                }
                
            }
        }
        
        
      /**  for(i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }    */
        
        sort(v.begin(), v.end());
      //  cout << endl;
        
        last = v[0];
        for(i = 1; i < v.size(); i++){
            
            if(v[i] == last){
                v.erase(v.begin()+i);
                i--;
            }else{
                last = v[i];
            }
        }
        
    /**    for(i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }*/
        
        for(i = 0; i <= v.size();i++){
            if(v[i] == valor){
                valor++;
            }else{
                sum += valor;
                break;
            }
        }        
        
        v.clear();
        valor = 0;
        
     //   cout << endl;
     //   cout << sum << endl;
    }
    cout << sum << endl;

    return 0;
}
