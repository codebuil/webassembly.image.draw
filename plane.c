int xxx=10;
int yyy=10;
int yyy1=10;
int xxx1=10;
int www=500;
int hhh=500;
void setxxx(int x){
    xxx1=x;
}
void setyyy(int y){
    yyy1=y;
}
void setwww(int w){
    www=w;
}
void sethhh(int h){
    hhh=h;
}
int gety(){
    yyy=hhh/2;
    return yyy;
}
int getx(){
    xxx=xxx+xxx1;
    
    if(xxx>www+xxx1){
        xxx=-xxx1;
    }
   
    
    return xxx;
}