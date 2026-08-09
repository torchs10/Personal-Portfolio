/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
using namespace std;
typedef char matrix[11][14];
void disegnaTris(matrix _mTris){
        _mTris[0][0]=' ';
        _mTris[0][1]='\t';
        _mTris[0][2]='1';
        _mTris[0][3]='\t';
        _mTris[0][4]=' ';
        _mTris[0][5]='\t';
        _mTris[0][6]='2';
        _mTris[0][7]='\t';
        _mTris[0][8]=' ';
        _mTris[0][9]='\t';
        _mTris[0][10]='3';
        _mTris[0][11]='\t';
        _mTris[0][12]=' ';    
        _mTris[0][0]=' ';
        _mTris[1][0]=' ';
        _mTris[2][0]='1';
        _mTris[3][0]=' ';
        _mTris[4][0]=' ';
        _mTris[5][0]='2';
        _mTris[6][0]=' ';
        _mTris[7][0]=' ';
        _mTris[8][0]='3';
        _mTris[9][0]=' ';
 
    for(int r=1;r<10;r++){
        _mTris[r][1]='|';
        _mTris[r][2]='\t';
        _mTris[r][3]='*';
        _mTris[r][4]='\t';
        _mTris[r][5]='|';
        _mTris[r][6]='\t';
        _mTris[r][7]='*';
        _mTris[r][8]='\t';
        _mTris[r][9]='|';
        _mTris[r][10]='\t';
        _mTris[r][11]='*';
        _mTris[r][12]='\t';
        _mTris[r][13]='|';
    }
}
void visualizzaTris(matrix _mTris){
    system("clear");
    for(int r=0;r<10;r++){
        for(int c=0;c<14;c++){
            cout<<_mTris[r][c];
        }
        cout<<endl;
    }
}
void acquisisciIdentitaGiocatori(string& g1, string& g2, char& s1,char& s2){
    cout<<"Chi è il primo giocatore?";
    cin>>g1;
    do{
        cout<<"Con quale simbolo giochi (O oppure X):";
        cin>>s1;
        if((s1!='O')&&(s1!='X')){
            cout<<"scelta non valida"<<endl;
        }
    }while((s1!='O')&&(s1!='X'));
    cout<<"Chi è il secondo giocatore?";
    cin>>g2;
    do{
    cout<<"Con quale simbolo giochi (O oppure X):";
        cin>>s2;
        if(((s2!='O')&&(s2!='X'))||(s2==s1)){
            cout<<"scelta non valida"<<endl;
        }
    }while(((s2!='O')&&(s2!='X'))||(s2==s1));
}
int acquisisciGiocata(string nome){
    int riga;
    int colonna;
    int selettore;
    cout<<"Giocatore "<<nome<<"(r,c):"<<endl;
    cout<<"riga\t----->:";
    cin>>riga;
    cout<<"colonna\t----->:";
    cin>>colonna;
    if((riga==1)&&(colonna==1)){
        selettore=4;
    }else if((riga==1)&&(colonna==2)){
        selettore=8;
    }else if((riga==1)&&(colonna==3)){
        selettore=12;
    }else if((riga==2)&&(colonna==1)){
        selettore=7;
    }else if((riga==2)&&(colonna==2)){
        selettore=11;
    }else if((riga==2)&&(colonna==3)){
        selettore=15;
    }else if((riga==3)&&(colonna==1)){
        selettore=10;
    }else if((riga==3)&&(colonna==2)){
        selettore=14;
    }else if((riga==3)&&(colonna==3)){
        selettore=18;
    }else{
        cout<<"Scelta non gestita"<<endl;
    }
    return selettore;
}
bool verificaVincitore(matrix _mTris,
                         string _Identita1,
                         string _Identita2,
                         char _simboloI1,
                         char _simboloI2,
                         string& _nVincitore){
int vincitore=-1;
bool bVincitore=false;
string nomeVincitore="nessuno";
//verifica dell'esistenza di un mTris    
    if((_mTris[2][3]==_mTris[5][7])&&(_mTris[5][7]==_mTris[8][11])
        &&(_mTris[2][3]!='*')&&(_mTris[5][7]!='*')&&(_mTris[8][11]!='*')
    ){
        vincitore=1;
    }
    if((_mTris[2][11]==_mTris[5][7])&&(_mTris[5][7]==_mTris[8][3])
        &&(_mTris[2][11]!='*')&&(_mTris[5][7]!='*')&&(_mTris[8][3]!='*')
    ){
        vincitore=2;    
    }
    if((_mTris[2][3]==_mTris[5][3])&&(_mTris[5][3]==_mTris[8][3])
        &&(_mTris[2][3]!='*')&&(_mTris[5][3]!='*')&&(_mTris[8][3]!='*')
    ){
        vincitore=3;    
    }
    if((_mTris[2][7]==_mTris[5][7])&&(_mTris[5][7]==_mTris[8][7])
        &&(_mTris[2][7]!='*')&&(_mTris[5][7]!='*')&&(_mTris[8][7]!='*')
    ){
        vincitore=4;    
    }
    if((_mTris[2][11]==_mTris[5][11])&&(_mTris[5][11]==_mTris[8][11])
        &&(_mTris[2][11]!='*')&&(_mTris[5][11]!='*')&&(_mTris[8][11]!='*')
    ){
        vincitore=5;        
    }
    if((_mTris[2][3]==_mTris[2][7])&&(_mTris[2][7]==_mTris[2][11])
        &&(_mTris[2][3]!='*')&&(_mTris[2][7]!='*')&&(_mTris[2][11]!='*')
    ){
        vincitore=6;    
    }
    if((_mTris[5][3]==_mTris[5][7])&&(_mTris[5][7]==_mTris[5][11])
        &&(_mTris[5][3]!='*')&&(_mTris[5][7]!='*')&&(_mTris[5][11]!='*')
    ){
        vincitore=7;    
    }
    if((_mTris[8][3]==_mTris[8][7])&&(_mTris[8][7]==_mTris[8][11])
        &&(_mTris[8][3]!='*')&&(_mTris[8][7]!='*')&&(_mTris[8][11]!='*')
    ){
        vincitore=8;    
    }
    switch(vincitore){
        case 1:
            if(_mTris[2][3]==_simboloI1){
                nomeVincitore=_Identita1;
            }else{
                nomeVincitore=_Identita2;
            }
        break;
        case 2:
            if(_mTris[2][11]==_simboloI1){
                nomeVincitore=_Identita1;
            }else{
                nomeVincitore=_Identita2;
            }        
        break;
        case 3:
            if(_mTris[8][3]==_simboloI1){
                nomeVincitore=_Identita1;
            }else{
                nomeVincitore=_Identita2;
            }          
        break;
        case 4:
            if(_mTris[2][7]==_simboloI1){
                nomeVincitore=_Identita1;
            }else{
                nomeVincitore=_Identita2;
            }          
        break;
        case 5:
            if(_mTris[8][11]==_simboloI1){
                nomeVincitore=_Identita1;
            }else{
                nomeVincitore=_Identita2;
            }          
        break;
        case 6:
            if(_mTris[2][7]==_simboloI1){
                nomeVincitore=_Identita1;
            }else{
                nomeVincitore=_Identita2;
            }        
        break;
        case 7:
            if(_mTris[5][11]==_simboloI1){
                nomeVincitore=_Identita1;
            }else{
                nomeVincitore=_Identita2;
            }        
        break;
        case 8:
            if(_mTris[8][7]==_simboloI1){
                nomeVincitore=_Identita1;
            }else{
                nomeVincitore=_Identita2;
            }        
        break;
        default:
        break;
    }
    if(vincitore>0){
        bVincitore=true;
        _nVincitore=nomeVincitore;
    }else{
        bVincitore=false;
    }
    return bVincitore;
}
int main()
{
    char mTris[10][14];
    disegnaTris(mTris);
    int contaGiocate;
    int continua=1;
    string Identita1;
    string Identita2;
    char simboloI1;
    char simboloI2;
    string identita;
    bool toggleIdentita=0;
    bool giocataNonValida=false;
    int valoreGiocata;
    int giocateNonValide[9]={0};
    bool ripeti;
    visualizzaTris(mTris);
    string nVincitore="nessuno";
    bool isWinner=false;
    while((continua==1)&&(nVincitore=="nessuno")){
        acquisisciIdentitaGiocatori(Identita1,Identita2,simboloI1,simboloI2);
       
        contaGiocate=9;
        visualizzaTris(mTris);
        while((contaGiocate>0)&&(!isWinner)){
            if(!toggleIdentita){
                identita=Identita1;
                toggleIdentita=!toggleIdentita;
            }else{
                identita=Identita2;
                toggleIdentita=!toggleIdentita;
            }
            valoreGiocata=acquisisciGiocata(identita);
            switch(valoreGiocata){
                case 4:
                    if(giocateNonValide[0]==0){
                        giocateNonValide[0]++;
                        if(identita==Identita1){
                            mTris[2][3]=simboloI1;
                        }else{
                            mTris[2][3]=simboloI2;
                        }
                    }else{
                        cout<<"Giocata non valida, ripeti la scelta"<<endl;
                        toggleIdentita=!toggleIdentita;
                        contaGiocate++;
                    }
                break;
                case 8:
                    if(giocateNonValide[1]==0){
                        giocateNonValide[1]++;
                        if(identita==Identita1){
                            mTris[2][7]=simboloI1;
                        }else{
                            mTris[2][7]=simboloI2;
                        }
                    }else{
                        cout<<"Giocata non valida, ripeti la scelta"<<endl;
                        toggleIdentita=!toggleIdentita;
                        contaGiocate++;
                    }              
                break;
                case 12:
                    if(giocateNonValide[2]==0){
                        giocateNonValide[2]++;
                        if(identita==Identita1){
                            mTris[2][11]=simboloI1;
                        }else{
                            mTris[2][11]=simboloI2;
                        }
                    }else{
                        cout<<"Giocata non valida, ripeti la scelta"<<endl;
                        toggleIdentita=!toggleIdentita;
                        contaGiocate++;
                    }                
                break;
                case 7:
                    if(giocateNonValide[3]==0){
                        giocateNonValide[3]++;
                        if(identita==Identita1){
                            mTris[5][3]=simboloI1;
                        }else{
                            mTris[5][3]=simboloI2;
                        }
                    }else{
                        cout<<"Giocata non valida, ripeti la scelta"<<endl;
                        toggleIdentita=!toggleIdentita;
                        contaGiocate++;
                    }
                break;
                case 11:
                    if(giocateNonValide[4]==0){
                        giocateNonValide[4]++;
                        if(identita==Identita1){
                            mTris[5][7]=simboloI1;
                        }else{
                            mTris[5][7]=simboloI2;
                        }
                    }else{
                        cout<<"Giocata non valida, ripeti la scelta"<<endl;
                        toggleIdentita=!toggleIdentita;
                        contaGiocate++;
                    }
                break;
                case 15:
                    if(giocateNonValide[5]==0){
                        giocateNonValide[5]++;
                        if(identita==Identita1){
                            mTris[5][11]=simboloI1;
                        }else{
                            mTris[5][11]=simboloI2;
                        }
                    }else{
                        cout<<"Giocata non valida, ripeti la scelta"<<endl;
                        toggleIdentita=!toggleIdentita;
                        contaGiocate++;
                    }
                break;
                case 10:
                    if(giocateNonValide[6]==0){
                        giocateNonValide[6]++;
                        if(identita==Identita1){
                            mTris[8][3]=simboloI1;
                        }else{
                            mTris[8][3]=simboloI2;
                        }
                    }else{
                        cout<<"Giocata non valida, ripeti la scelta"<<endl;
                        toggleIdentita=!toggleIdentita;
                        contaGiocate++;
                    }
                break;
                case 14:
                    if(giocateNonValide[7]==0){
                        giocateNonValide[7]++;
                        if(identita==Identita1){
                            mTris[8][7]=simboloI1;
                        }else{
                            mTris[8][7]=simboloI2;
                        }
                    }else{
                        cout<<"Giocata non valida, ripeti la scelta"<<endl;
                        toggleIdentita=!toggleIdentita;
                        contaGiocate++;
                    }
                break;
                case 18:
                    if(giocateNonValide[8]==0){
                        giocateNonValide[8]++;
                        if(identita==Identita1){
                            mTris[8][11]=simboloI1;
                        }else{
                            mTris[8][11]=simboloI2;
                        }
                    }else{
                        cout<<"Giocata non valida, ripeti la scelta"<<endl;
                        toggleIdentita=!toggleIdentita;
                        contaGiocate++;
                    }
                break;
                default:
                break;
            }
            visualizzaTris(mTris);
            contaGiocate--;
            isWinner=verificaVincitore(mTris,Identita1,Identita2,simboloI1,simboloI2,nVincitore);
            cout<<"Attuale Vincitore:"<<nVincitore<<endl;
        }
        do{
            ripeti=false;
            cout<<"Nuova partita(1-si, 2-termina)?:";
            cin>>continua;
            if((continua!=1)&&(continua!=2)){
                ripeti=true;
                cout<<"scelta non gestita"<<endl;
            }else{
            }
        }while(ripeti);
    }
   

    return 0;
}