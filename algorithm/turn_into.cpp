#include <iostream>
#include <vector>

using namespace std;

void normal(int a,int b,vector<vector<int>> m,vector<vector<int>> time){

    for(int i=0;i<a;i++){
        cout << "[";
        for(int j=0;j<b;j++){
            cout << "(" << m[i][j] << "," << time[i][j] << ")" ;
            if(j <b-1){
                cout << ",";
            }
        }
        cout << "]";
        if(i <a-1){
            cout << ",";
        }
        cout << endl;
        
    }    
}

void cut(int a,int b,vector<vector<int>> m,vector<vector<int>> time){
    for(int i=0;i< a;i++){
        cout << "[";
        for(int j=0;j<7;j++){
            cout << "(" << m[i][j] << "," << time[i][j] << ")" ;
            if(j <7-1){
                cout << ",";
            }
        }
        cout << "]";
        if(i <a-1){
            cout << ",";
        }
        cout << endl;
    }   

    cout << endl;

    for(int i=0;i< a;i++){
        cout << "[";
        for(int j=7;j<b;j++){
            cout << "(" << m[i][j] << "," << time[i][j] << ")" ;
            if(j <b-1){
                cout << ",";
            }
        }
        cout << "]";
        if(i <a-1){
            cout << ",";
        }
        cout << endl;
    }       
}

int main()
{
    int a,b;
    cin >> a >> b;
    vector<vector<int>> m(a,vector<int>(b)),time(a,vector<int>(b));
  
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin >> m[i][j];
            cin >> time[i][j];
        }
    }

    normal(a,b,m,time);
    //cut(a,b,m,time);


}