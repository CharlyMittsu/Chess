
#include <iostream>
#include <string>
#include <vector>
using namespace std;


void affiche(vector<string> _tableau){
    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            cout << _tableau[(8*i)+j]<<"";

        }
        cout << endl;

    } 
}

int main(){

    
    vector<string> plateau = {};
    for (int j = 0;j<8;j++){
        for (int i = 0; i < 8; i++) {
            if (j%2 != 0) {
                if (i%2 != 0) {
                    plateau.push_back("[ ]");
                } else {plateau.push_back("[■]");}
            }else{
                if (i%2 != 0) {
                    plateau.push_back("[■]");
                } else {plateau.push_back("[ ]");}
            }
        }
    }
        

    affiche(plateau);
    
    

    return 0;
}