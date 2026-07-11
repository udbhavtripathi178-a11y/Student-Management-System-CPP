// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct student {
    int roll_no;
    string name;
    int age;
    float cgpa;
};
void deleted(int &j, student n[500]){
    int roll;
    int pos ;
    cout<<"enter roll no. you want to delete ... "<<endl;
    cin>>roll;
    int i=0;
    int flag=0;
    for(i; i<j; i++){
        if(roll==n[i].roll_no){
            flag=1;
            pos=i;
        }
    }
    if(flag==0){
        cout<<"invalid roll no.😭"<<endl;
        }
        for(int k=pos;k<j;k++){
            if(flag==1){n[k]=n[k+1];
            
            
        }
        if(flag==1){
            j--;
            cout<<"deletion ✅... just like you delete your frustrations with your excellence 😻"<<endl;
        }
            
        }
        }
void search (int j, student n[500]){
    int flag = 0;
    int roll;
    cout<<"enter roll no. : "<<endl;
    cin>>roll;
    int i=0;
    for(i ; i<j;i++){
        if(roll ==n[i].roll_no){
            cout<<"*_*_student detail*_*_"<<endl;
            cout<<"name : "<<n[i].name<<endl;
            cout<<"age : "<<n[i].age<<endl;
            cout<<"cgpa : "<<n[i].cgpa<<endl;
            cout<<"thank you so much "<<endl;
            flag =1;
            cout<<endl;
            
        }
        
    }
    if(flag ==0){
        cout<<"invalid roll number 😭"<<endl;
        cout<<endl;
    }
    cout<<endl;
}
    

void add_student( student n[500], int &j){
    char ans;
    int value;
    
    
    cout<<"how many students you want to enter"<<endl;
    
   if(!(cin>>value)){
        cout<<"invalid input "<<endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return;
    }
    value=value+j;
   // cin.ignore();
   
     for( j;j<value;j++)  {
         cout<<"____Student "<<j+1<<"____"<<endl;
         cout<<endl;
         cout<<"enter name"<<endl;
       cin.ignore();
       //this ignore ,ignores the cin of cgpa
       getline(cin,n[j].name);
    
    cout<<"enter roll no. : ";
    cin>>n[j].roll_no;
    cout<<"enter age : ";
   if(!(cin>>n[j].age)){
        cout<<"invalid input "<<endl;
        cin.clear();
        cin.ignore(1000, '\n');
        return;
    }
    cout<<"enter cgpa : ";
    cin>>n[j].cgpa;
    if((n[j].cgpa)>10|| n[j].cgpa<0){
        cout<<"cgpa not more than 10"<<endl;
        cout<<"enter again"<<endl;
        cin>>n[j].cgpa;
        if(n[j].cgpa>10|| n[j].cgpa<0){
        n[j].cgpa = 0;
        cout<<"you again put the wrong value we  are putting cgpa = 0"<<endl;
    }}
      /* cout<<"another name write -Y or N"<<endl;
       cin>>ans;
       cin.ignore();*/
       int a;
       for ( a=0;a<j;a++){
           if(n[j].roll_no==n[a].roll_no){
               cout<<"same roll no. of 2 students not possible "<<endl;
           
       cout<<"which roll no. you want to change  click 1 for "<<n[j].name<<" or click 2 for  "<<n[a]. name<<endl ;
       int abhi;
       cin>>abhi;
       
       if(abhi==1){
           cout<<"enter new roll no. : ";
           cin>>n[j].roll_no;
           
       }
       else if(abhi==2){
           cout<<"enter new roll no. : ";
           cin>>n[a].roll_no;
       }
       else{
           cout<<"invalid no.";
       }
           }}
          
   /*    cout<<"another name want to write 🫡?? -> Y or N"<<endl;
       cin>>ans;
       cin.ignore();*/
       
       
   } //(ans=='Y'||ans=='y');
   
   //cout<<"<<net student🌚>>->> "<<j<<endl;
  /* for(int i =0; i<j; i++){
       for(int k=i+1; k<j;k++)
       if(n[i].roll_no ==n[k].roll_no){
           cout<<"roll no. of two or more will not be similar "<<endl;
           cout<<"which roll no. u want to change click 1 or 2  :"<<n[i].name<<" or "<<n[k].name<<endl;
           int abhi;
           cin>>abhi;
           if(abhi==1){
               cout<<"enter "<<endl;
               cin>>n[i].roll_no;
           }
           else if(abhi==2){
               cout<<"enter the value"<<endl;
               cin>>n[k].roll_no;
           }
       }
   }*/
}
void display (int j, student n[500]){
    for (int i=0; i<j; i++ ){
        cout<<"*-*- Student "<< i+1<<" -*-*"<<endl;
        cout<<"student "<<i+1<< "  details "<< endl;
        cout<<"name : "<<n[i].name<<endl;
        cout<<"roll no. :"<<n[i].roll_no<<endl;
        cout<<"age : "<<n[i].age<<endl;
        cout<<"cgpa : "<<n[i].cgpa<<endl;
        
    }
    if(j==0){
        cout<<"no students found ,sorry"<<endl;
    }
}
void update(int j, student n[500]){
    int roll;
    int flag=0;
    cout<<"enter roll no. of student 😄 which you want to update "<<endl;
    cin>>roll;
    for(int z=0; z<j;z++){
    if(roll==n[z].roll_no){
    int i;
    cout<<"click no. according to need"<<endl;
    cout<<"1. update name"<<endl;
    cout<<"2. update cgpa"<<endl;
    cout<<"3. update age"<<endl;
    cout<<"4. update roll no."<<endl;
    cin>>i;
    switch(i){
        case 1 : cout<<"enter updated name"<<endl;
        cin>>n[z].name;
        break;
        case 2: cout<<"enter the updated cgpa"<<endl;
        cin>>n[z].cgpa;
        break;
        case 3: cout<<"enter updated age"<<endl;
        cin>>n[z].age;
        break;
        case 4 : cout<<"enter roll no. "<<endl;
        cin>>n[z].roll_no;
        break;
        default: cout<<"invalid no. dude 😎 "<<endl;
    }
    cout<<"thanks for making me New 🙂"<<endl;
        flag=1;
    }}
    if(flag==0){
        cout<<"invalid rollno. or it doesn't exist 😭"<<endl;
        cout<<endl;
    }
    
}
int main() {
    string info;
    cout<<"hello everyone...how's your day ?"<<endl;
    getline(cin,info);
    cout<<"ok i wish your day will be  good 😊 👍 "<<endl;
    cout<<"now tell me what work u want , given below 👇"<<endl;
    int i;
    int j=0;
    const int max =500;
    student n[max];
    do{
        cout<<endl;
    cout<<"click the no. what you want  "<<endl;
    cout<<"1. add student "<<endl;
    cout<<"2. display all students"<<endl;
    cout<<"3. search student by roll no."<<endl;
    cout<<"4. update student details "<<endl;
    cout<<"5.delete student"<<endl;
    cout<<"6. exit"<<endl;
    
    /*int j;
    student n[500];*/
    cout<<"enter no. which you want to proceed  "<<endl;
    if(!(cin>>i)){
        cout<<"invalid input "<<endl;
        cin.clear();
        cin.ignore(1000, '\n');
        continue;
    }
    /*int j;
    student n[500];*/
    switch(i){
        case 1 :  
        add_student(n, j);
        break ;
        case 2:  display(j, n);
        break;
        case 3 : search(j,n);
        break;
        case 4: update(j,n);
        break;
        case 5: deleted(j,n);
        break;
       /* case 6: cout<<"thank you so much 😊 "<<endl;
        return 0;*/
    } } while(i!=6);
    return 0;
}