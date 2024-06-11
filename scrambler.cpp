#include<bits/stdc++.h>
using namespace std;

random_device rd;  // a seed source for the random number engine
mt19937 gen(rd()); // mersenne_twister_engine seeded with rd()
uniform_int_distribution<> distrib(0, 35);

string moves[36]={"LB2", "UB2", "BO" ,"FI", "RB2", "DB2", "LI" ,"UR2", "BR2" ,"FR2", "RO", "DR2", "LF2", "UF2", "BI", "FO", "RF2", "DF2" ,"LU2"
,"UO", "BU2" ,"FU2", "RU2", "DI", "LO", "UL2", "BL2", "FL2", "RI" ,"DL2" ,"LD2", "UI" ,"BD2", "FD2", "RD2", "DO"};

int main(){
    
    FILE * plik = fopen("scramble.hsc","w+");
    fwrite("# Hyperspeedcube puzzle log \n--- \nversion: 1 \npuzzle: \n  Rubiks4D: \n    layer_count: 3 \n",1,88,plik);
    fwrite("state: 2 \ntwist_count: \n  ATM: 0\n  ETM: 0\n  STM: 0\n  BTM: 0\n  OBTM: 0\n  QSTM: 0\n  QBTM: 0\n  QOBTM: 0\ntwists: >\n  ",1,113,plik);

    for(int i=0;i<45;i++){
        int ity= distrib(gen);
        fwrite((moves[ity]).c_str(),1,moves[ity].length(),plik);
        fwrite(" ",1,1,plik);
    }
    fclose(plik);

    return 0;


}