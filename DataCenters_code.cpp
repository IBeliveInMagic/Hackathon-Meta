#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,Q,cx,cy,x,y,d,count = 0;
    int p2, p1;
    vector<pair<int,int>> DataCenters;
    
    pair<int,int> A , B , C;
    
    cin >> N >> Q;
    
    for(int i = 0 ; i < N ; i++){
        cin >> cx >> cy;
        DataCenters.push_back( make_pair(cx,cy) );
    }

    for(int i = 0 ; i < Q ; i++){
        cin >> x >> y >> d;
        
        A = make_pair(x+d,y);
        B = make_pair(x,y);
        C = make_pair(x,y+d);
        
        count = 0;
        
        for(int j = 0 ; j < N ; j++){
            
            p1 = DataCenters[j].first + DataCenters[j].second;
            p2 = A.first + A.second;
            
            if(DataCenters[j].first >= B.first){
                if(DataCenters[j].second >= B.second){
                    if(p1 <= p2){
                        count = count + 1;
                    }
                }
            }
        }
        
        cout << count << endl;
        
    }
    
    return 0;
}
