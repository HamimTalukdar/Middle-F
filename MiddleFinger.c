#include<stdio.h>

void slowDown(double d){
     for(double y=.1;y<100000;y=y+d){}
}

void M_F(int n, char c){
    for(int i=1; i<=22; i++){
        for(int t=1;t<=n;t++){
            printf(" ");
        }   // Trigon->>> Hamim_2011 ->>> Hrdz_CD
        for(int j=1; j<=25; j++){
          if(i==1&&j>=11&&j<=14||i==7&&(j>=6&&j<=9||j>=16&&j<=19) 
          ||i==11&&j>=3&&j<=5||i==8&&j>=21&&j<=23||i==9&&j>=24&&j<=25||i==12&&j>=1&&j<=2
          ||i==22&&j>=5&&j<=21||(i>=19&&i<=21)&&(j==5||j==6||j==20||j==21)
          ||i==16&&(j==1||j==2||j==23||j==24)||i==17&&(j==2||j==3||j==22||j==23)
          ||i==18&&(j==4||j==5||j==21||j==22)){
            printf("%c",c);
          }else if((j==10||j==15)&&i>=2&&i<=11||j==5&&i>=8&&i<=13
          ||j==20&&i>=8&&i<=11||j==1&&i>=13&&i<=15||j==25&&i>=10&&i<=15){
             printf("%c",c);
          }
          else{
            printf(" ");
          }
        }
    printf("\n");
  }
}

void Move_MF(int a, int b){
    for(int i=a, k=b, t=0; ; ){
        printf("\033[H\033[2J");
        printf("\n\n");
        if(t%2==0){
            M_F(t,'*');
        }else{
        M_F(t,'.');
        }
        slowDown(.002);
        if(i<=b){
            t=i++;
        }else if(k>=a){
            t=k--;
        }else{
            i=a;
            k=b;
        }
        printf("\033[H");
  }
}

int main(){
    Move_MF(20, 60);
}