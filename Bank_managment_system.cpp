#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <windows.h>
using namespace std;

class bank
{
    private:
        int phone,balance;
        string id,pass,name,fname,address,pin;
    public:
    void menu();
    void bank_management();
    void atm_management();
    void new_user();
    void already_user();
    void deposit();
    void withdraw();
    void transfer();
    void payment();
    void search();
    void edit();
    void del();
    void show_records();
    void show_payment();
    void user_balance();
    void withdraw_atm();
    void check_details();

};
void introduction(){
    cout<<"\n\n\n\n\n\t";
    for (int i = 1; i <= 60; i++)
        cout<<"*";
    cout<<"\n\t ";
    for (int i = 1; i <= 58; i++)
        cout<<"*";
    cout<<"\n\t  ";
    for (int i = 1; i <= 56; i++)
        cout<<"*";

    cout<<"\n\n\t\t\tBank & ATM Managment System\n\n\t\t\t\tProject in C++\n\n\t  ";

    for (int i = 1; i <= 56; i++)
        cout<<"*";
    cout<<"\n\t ";
    for (int i = 1; i <= 58; i++)
        cout<<"*";
    cout<<"\n\t";
    for (int i = 1; i <= 60; i++)
        cout<<"*";

    getch();
    system("cls");

    cout<<"\n\n\n\n\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout<<"*";
    cout<<"\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout<<"*";

    cout<<"\n\n\t\t\t         Developer ";
    cout<<"\n\n\t\t\t    1. Shayan Khan ";

    cout<<"\n\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout<<"*";
    cout<<"\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout<<"*";

    cout<<"\n\t\t\t";
    getch();
    system("cls");
}

void bank::menu(){
    p:
    system("cls");

    int choise;
    char ch1;
    string pass ,pin ,email;
    cout<<"\n\n\n\t\t\t Control Panel";
    cout<<"\n\n\n1. Bank Management ";
    cout<<"\n\n\n2. Atm Management ";
    cout<<"\n\n\n3. Exit ";
    cout<<"\n\n Enter your choise : ";
    cin>>choise;
    switch (choise)
    {
    case 1:
    system("cls");
    cout<<"\n\n\n\t\t Login Account";
    cout<<"\n\n\n E-mail : ";
    cin>>email;
    cout<<"\n\n\n Pin Code :  ";
    for (int i = 0; i <5; i++)
    {
        ch1=getch();
        pin+=ch1;
        cout<<"*";
    }
    cout<<"\n\n\n Enter Password : ";
    for (int i = 0; i <5; i++)
    {
        ch1=getch();
        pass+=ch1;
        cout<<"*";
    }
    if(email=="shayan@gmail.com" && pin=="00000" && pass=="11111"){
         bank_management();

    }else{
        cout<<"\n\n\n Your Email,Pin and Password is wrong";
    } 
        break;
    case 2:
    atm_management();
    break;
    case 3:
    exit(0);
    default:
    cout<<"\n\nInvalid value....Please try again!!";
        break;
    }
    getch();
    goto p;
}
void bank::bank_management(){
    p:
    int choise;
    system("cls");
    cout<<"\n\n\n\t\t Bank Management";
    cout<<"\n\n 1. New User";
    cout<<"\n\n 2. Already User";    
    cout<<"\n\n 3. Deposit Option ";    
    cout<<"\n\n 4. Withdraw Option"; 
    cout<<"\n\n 5. Transfer Option"; 
    cout<<"\n\n 6. Payment Option";
    cout<<"\n\n 7. Search User Record ";
    cout<<"\n\n 8. Edit User Record";
    cout<<"\n\n 9. Delete User Record"; 
    cout<<"\n\n 10. Show All Records "; 
    cout<<"\n\n 11. Payment All Records";
    cout<<"\n\n 12. Go Back"; 
    cout<<"\n\n Enter Your Choise : ";
    cin>>choise;
    switch(choise)
    {
        case 1:
        new_user();
            break;
        case 2:
        already_user();
            break;

        case 3:
        deposit();
            break;
        case 4:
        withdraw();
            break;
        case 5:
        transfer();
            break;
        case 6:
         payment();
            break;
        case 7:
        search();
            break;
        case 8:
        edit();
            break;
        case 9:
        del();
            break;
        case 10:
        show_records();
        break;
        case 11:
        show_payment();
            break;
        case 12:
          menu();
        break;
        default:
        cout<<"\n\nInvalid value....Please try again!!";
    }
    getch();
    goto p;
}
void bank::atm_management(){
    p:
    int choise;
    system("cls");
    cout<<"\n\n\n\t\t Atm Management";
    cout<<"\n\n\n 1. User Login & Check Balance ";
    cout<<"\n\n\n 2. Withdraw Amount ";    
    cout<<"\n\n\n 3. Account Details ";    
    cout<<"\n\n\n 4. Go Bank "; 
    cout<<"\n\n\n Enter Your Choise : ";
    cin>>choise;
    switch(choise)
    {
        case 1:
        user_balance();
            break;
        case 2:
        withdraw_atm();
            break;
        case 3:
        check_details();
        break;
        case 4:
        menu();
        break;
        default:
        cout<<"\n\nInvalid value....Please try again!!";
    }
    getch();
    goto p;
}
void bank::new_user(){
    p:
    system("cls");
    fstream file;
    int p,ph,b;
    string i,n,f,pa,a;
    cout<<"\n\n\n\t\t\t Add New User";
    cout<<"\n\n User ID : ";
    cin>>id;
    cout<<"\n\n Name : ";
    cin>>name;
    cout<<"\n\n Father Name : ";
    cin>>fname;
    cout<<"\n\n Address : ";
    cin>>address;
    cout<<"\n\n Pin Code (5 digit): ";
    cin>>pin;
    cout<<"\n\n Password (5 digit) : ";
    cin>>pass;
    cout<<"\n\n Phone No : ";
    cin>>phone;
    cout<<"\n\n Balance : "; 
    cin>>balance;
    file.open("bank .txt",ios::in);
    if(!file)
    {
 file.open("bank.txt",ios::app|ios::out);
    file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
    file.close();

}else
{
    file>>i>>n>>f>>a>>p>>pa>>ph>>b;
    while(!file.eof()){
        if(i==id){
            cout<<"\n\n User Id already Exist...";
        getch();
        goto p;
        }
         file>>i>>n>>f>>a>>p>>pa>>ph>>b;
    }
    file.close();
     file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
    file.close();

}
    cout<<"\n\n New User Created Account Successfully ";
}
void bank::already_user(){
    system("cls");
    fstream file;
    string t_id;
    int found=0;
    cout<<"\n\n\t\t\t Already User Account";
    file.open("bank.txt",ios::in);
    if(!file){
        cout<<"\n\n File Opening Error";

    }else{
        cout<<"\n\n User Id : ";
        cin>>t_id;
         file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while (!file.eof())
            {
                if(t_id==id)
                {
                    system("cls");
                    cout<<"\n\n\t\t\t Already User Exist..";
                    cout<<"\n\n User Id : "<<id<<"  Pin Code : "<<pin<<"  Password : "<<pass;
                    found++;
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            if(found==0)
                cout<<"\n\n User Id Cannot Found...";
    } 
}
void bank::deposit(){

  
    fstream file,file1;
    float dep;
    string t_id;
    int found=0;
    system("cls");
    cout<<"\n\n\t\t\t Deposit Amount option";
    file.open("bank.txt",ios::in);
    if(!file){
        cout<<"\n\n File Opening Error";
    }else{
             cout<<"\n\n User Id : ";
        cin>>t_id;
        file1.open("bank.txt",ios::app|ios::out);
         file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while (!file.eof())
            {
                if(t_id==id)
                    {
                        cout<<"\n\n Amount For Deposit : ";
                        cin>>dep;
                        balance+=dep;
                        file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                        found++;
                        cout<<"\n\n\t\t Your Amount "<<dep<<" Sucessfully Deposit...";

                    }
                    else
                    {
                        file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                    }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt","bank.txt");
            if(found==0)
                cout<<"\n\n User Id Cannot Found...";
    } 

    }
void bank::withdraw(){

  
    fstream file,file1;
    float with;
    string t_id;
    int found=0;
    system("cls");
    cout<<"\n\n\t\t\t Withdraw Amount option";
    file.open("bank.txt",ios::in);
    if(!file){
        cout<<"\n\n File Opening Error";
    }else{
             cout<<"\n\n User Id : ";
                cin>>t_id;
                  file1.open("bank1.txt",ios::app|ios::out);
                    file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while (!file.eof())
            {
                if(t_id==id)
                    {
                        cout<<"\n\n Amount For Withdraw : ";
                        cin>>with;
                        if(with<=balance){
                                 balance-=with;
                        file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                        cout<<"\n\n\t\t Your Amount "<<with<<" Sucessfully Withdraw...";

                        }else{
                            file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                            cout<<"\n\n Your Current Balance"<<balance<<" Is Less ";
                        }
                       found++;
                    }
                    else
                    {
                        file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                    }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt","bank.txt");
            if(found==0)
                cout<<"\n\n User Id Cannot Found...";
    } 

    }
void bank::transfer(){

    fstream file,file1;
    system("cls");
    string s_id,r_id;
    int found=0;
    float amount;
    cout<<"\n\n\t\t\t Payment Transfer Option ";
    file.open("bank.txt",ios::in);
    if(!file){
        cout<<" File Opening Error....";
    }else{
        cout<<" \n\n Sender User Id for Transctionn : ";
        cin>>s_id;
        cout<<" \n\n Reciver User Id for Transctionn : ";
        cin>>r_id;
        cout<<"\n\n Enter Transction Amount : ";
        cin>>amount;
        
          file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
          while (!file.eof())
          {
            if(s_id==id && amount<=balance){
                found++;
            }else if(r_id==id){
                found++;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
          }
          file.close();
          if(found==2){
            file.open("bank.txt",ios::in);
            file1.open("bank1.txt",ios::app|ios::out);
             file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
             while (!file.eof())
             {
                if(s_id==id ){
                    balance-=amount;
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                }else if(r_id==id){
                    balance+=amount;
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                }
                else{
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
             }
             file.close();
             file1.close();
             remove("bank.txt");
             rename("bank1.txt","bank.txt");
             cout<<"\n\n Transction Sucessfully ";

          }else{
            cout<<"\n\n Both Transction User ID's and Balance Invalid...";
          }
    }
}
void bank::payment(){
    system("cls");
    fstream file,file1;
    int found=0;
    float amount;
    string t_id , b_name;
    SYSTEMTIME x;
    cout<<"\n\n\tBills Payment Options";
    file.open("bank.txt",ios::in);
    if(!file){
        cout<<"\n\n File opening error... ";

    }else{
        cout<<"\n\n User ID : ";
        cin>>t_id;
        cout<<"\n\nBill name : ";
        cin>>b_name;
        cout<<"\n\nBill amount : ";
        cin>>amount;
        file1.open("bank1.txt",ios::app|ios::out);
         file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
         while(!file.eof()){
            if(t_id==id && amount<=balance){
                
                balance-=amount;
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                found++;
            }else{
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;

         }
         file.close();
         file1.close();
             remove("bank.txt");
             rename("bank1.txt","bank.txt");

         if(found==1){
            GetSystemTime(&x);
            file.open("bill.txt",ios::app|ios::out);
            file<<t_id<<" "<<b_name<<" "<<amount<<" "<<x.wDay<<"/"<<x.wMonth<<"/"<<x.wYear;
            file.close();
            cout<<"\n\n\t\t "<<b_name<<" Bill Pay Sucessfully...";

         }else{
            cout<<"\n\nUser ID And Amount Invalid...";
         }
    }
}
 void bank:: search(){
    system("cls");
    fstream file;
    int found=0;
    string t_id;
    cout<<"\n\n\t\t Search User Record";
    file.open("bank.txt",ios::in);
    if(!file){
        cout<<"\n\n File Opening Error....";
    }else{
        cout<<"\n\n User ID : ";
        cin>>t_id;
           file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
           while(!file.eof()){
            if(t_id==id){
                system("cls");
                cout<<"\n\n\t\t Search User Record ";
                cout<<"\n\nUser id : "<<id<<"\t\t Name : "<<name;
                cout<<"\n\nFather Name : "<<fname<<"\t\t Address : "<<address;
                cout<<"\n\nPin : "<<pin<<"\t\t Password : "<<pass;
                cout<<"\n\nPhone No : "<<phone<<"\t\t Cureent Balance: "<<balance;
                found++;

            }
              file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
           
           }
           file.close();
           if(found==0){
            cout<<"\n\n User ID Can't Found....";
           }

    }
 }
 void bank::edit(){

    system("cls");
    fstream file,file1;
    string t_id,p,n,f,a,ph;
    int found=0,pi;
    cout<<"\n\n\t\t Edit User Record ";
    file.open("bank.txt",ios::in);
    if(!file){
        cout<<"\n\n Opening File Error....";
            }
            else{
                cout<<"\n\nUser ID : ";
                cin>>t_id;
                file1.open("bank1.txt",ios::app|ios::out);
                 file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
                 while(!file.eof()){
                    if(t_id==id){
                        
    cout<<"\n\n Name : ";
    cin>>n;
    cout<<"\n\n Father Name : ";
    cin>>f;
    cout<<"\n\n Address : ";
    cin>>a;
    cout<<"\n\n Pin Code (5 digit): ";
    cin>>pi;
    cout<<"\n\n Password : ";
    cin>>p;
    cout<<"\n\n Phone No : ";
    cin>>ph;
   
    file1<<" "<<id<<" "<<n<<" "<<f<<" "<<a<<" "<<pi<<" "<<p<<" "<<ph<<" "<<balance<<"\n ";
    cout<<"\n\n\n\tRecord Edit Sucessfully ....";
    found++;
                    }
                    else{
                         file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                    }
                    file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
                 }
                 file.close();
                 file1.close();
                 remove("bank.txt");
                 rename("bank1.txt","bank.txt");

                 if(found==0){
                    cout<<"\n\nUser Id Cannot Found...";
                 }


            }
 }
 void bank::del(){
    system("cls");
    fstream file,file1;
    string t_id;
    int found=0,pi;
    cout<<"\n\n\t\t Edit User Record ";
    file.open("bank.txt",ios::in);
    if(!file){
        cout<<"\n\n Opening File Error....";
            }
            else{
                cout<<"\n\nUser ID : ";
                cin>>t_id;
                file1.open("bank1.txt",ios::app|ios::out);
                 file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
                 while(!file.eof()){
                    if(t_id==id){
                    cout<<"\n\n\n\tRecord Delete Sucessfully ....";
                    found++;
                    }
                    else{
                         file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                    }
                    file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
                 }
                 file.close();
                 file1.close();
                 remove("bank.txt");
                 rename("bank1.txt","bank.txt");

                 if(found==0){
                    cout<<"\n\nUser Id Cannot Found...";
                 }


            }
 }
 void bank::show_records(){
    system("cls");
    fstream file;
    int found=0;
    cout<<"\n\n\t\tShow All User's Records";
    file.open("bank.txt",ios::in);
    if(!file){
        cout<<"\n\n\nFile Opening Error.....";
    }else
    {
         file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
                 while(!file.eof()){
                    cout<<"\n\n\nUser ID : "<<id;
                    cout<<"\n\n\nName : "<<name;
                    cout<<"\n\n\nFather Name : "<<fname;
                    cout<<"\n\n\nAddress : "<<address;
                    cout<<"\n\n\nPin : "<<pin;
                    cout<<"\n\n\nPassword : "<<pass;
                    cout<<"\n\n\nPhone No : "<<phone;
                    cout<<"\n\n\nCurrent Balance : "<<balance;
                    cout<<"\n\n===============================================================";
                     file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
                    found++;
                    }
                    file.close();
                 if(found==0){
                    cout<<"\n\nData Base Is Empty...";
       }
    }
 }
 void bank::show_payment(){
    system("cls");
    fstream file;
    int found=0;
    float amount;
    string date;
    cout<<"\n\n\t\tShow All Bill's Records";
    file.open("bill.txt",ios::in);
    if(!file){
        cout<<"\n\n\nFile Opening Error.....";

    }else
    { 
         file>>id>>name>>amount>>date;
                 while(!file.eof()){
                    cout<<"\n\n\nUser ID : "<<id;
                    cout<<"\n\n\nBill Name : "<<name;
                    cout<<"\n\n\nBill Amount : "<<amount;
                    cout<<"\n\n\nDate : "<<date;
                    cout<<"\n\n===============================================================";
                      file>>id>>name>>amount>>date;
                    found++;
                    }
                    file.close();
                 if(found==0){
                    cout<<"\n\nData Base Is Empty...";
       }
    }
 }
 void bank::user_balance(){
    system("cls");
    fstream file;
    string t_id,t_pin,t_pass;
    char ch;
    int found=0;
    cout<<"\n\n\t\t User Login And Check Balance";
    file.open("bank.txt",ios::in);
    if (!file)
    {
         cout<<"\n\n\nFile Opening Error.....";
    }
    else{
        cout<<"\n\n\nUser ID : ";
        cin>>t_id;
        cout<<"\n\n\nPin Code : ";
        for (int i = 1; i <= 5; i++)
        {
            ch=getch();
            t_pin+=ch;
            cout<<"*";
        }
        cout<<"\n\n\nPassword : ";
          for (int i = 1; i <= 5; i++)
        {
            ch=getch();
            t_pass+=ch;
            cout<<"*";
        }
         file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
         while (!file.eof())
         {
            if (t_id==id && t_pin==pin && t_pass==pass)
            {
                cout<<"\n\n\t\tYour Current Balance is : "<<balance;
                found++;
            }
             file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            
         }
         file.close();
         if (found==0)
         {
            cout<<"\n\n\n\t\t\tUser Id ,Pin and Pass are invalid...";      
       }
         
    }
 } 
 void bank::withdraw_atm(){

    fstream file,file1;
    float with;
    string t_id,t_pin,t_pass;
    int found=0;
    char ch;
    system("cls");
    cout<<"\n\n\t\t\t Withdraw Amount option";
    file.open("bank.txt",ios::in);
    if(!file){
        cout<<"\n\n File Opening Error";
    }else{
             cout<<"\n\n\nUser ID : ";
        cin>>t_id;
        cout<<"\n\n\nPin Code : ";
        for (int i = 1; i <= 5; i++)
        {
            ch=getch();
            t_pin+=ch;
            cout<<"*";
        }
        cout<<"\n\n\nPassword : ";
          for (int i = 1; i <= 5; i++)
        {
            ch=getch();
            t_pass+=ch;
            cout<<"*";
        }

                  file1.open("bank1.txt",ios::app|ios::out);
                    file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while (!file.eof())
            {
                if(t_id==id && t_pin==pin && t_pass==pass)
                    {
                        cout<<"\n\n Amount For Withdraw : ";
                        cin>>with;
                        if(with<=balance){
                                 balance-=with;
                        file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                        cout<<"\n\n\t\t\t Your Amount "<<with<<" Sucessfully Withdraw..."; 
                        cout<<"\n\n\t\t\t Your Current Balance is : "<<balance<<"  ";

                        }else{
                            file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                            cout<<"\n\n Your Current Balance"<<balance<<" Is Less ";
                        }
                       found++;
                    }
                    else
                    {
                        file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n ";
                    }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt","bank.txt");
            if(found==0)
                cout<<"\n\n User Id Cannot Found...";
    } 

 }
 void bank::check_details(){

    fstream file;
    string t_id,t_pin,t_pass;
    int found=0;
    char ch;
    system("cls");
    cout<<"\n\n\t\t\t Check Details option";
    file.open("bank.txt",ios::in);
    if(!file){
        cout<<"\n\n File Opening Error";
    }else{
             cout<<"\n\n\nUser ID : ";
        cin>>t_id;
        cout<<"\n\n\nPin Code : ";
        for (int i = 1; i <= 5; i++)
        {
            ch=getch();
            t_pin+=ch;
            cout<<"*";
        }
        cout<<"\n\n\nPassword : ";
          for (int i = 1; i <= 5; i++)
        {
            ch=getch();
            t_pass+=ch;
            cout<<"*";
        }
          file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            while (!file.eof())
            {
                if(t_id==id && t_pin==pin && t_pass==pass)
                    {
                    system("cls");
                     cout<<"\n\n\nUser ID : "<<id;
                    cout<<"\n\n\nName : "<<name;
                    cout<<"\n\n\nFather Name : "<<fname;
                    cout<<"\n\n\nAddress : "<<address;
                    cout<<"\n\n\nPin : "<<pin;
                    cout<<"\n\n\nPassword : "<<pass;
                    cout<<"\n\n\nPhone No : "<<phone;
                    cout<<"\n\n\nCurrent Balance : "<<balance;
                    cout<<"\n\n===============================================================";
                    found++;
                    }
                    
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            }
            file.close();
            if(found==0)
                cout<<"\n\n User Id Cannot Found...";
    } 
 }
int main(){
    bank obj;
    introduction();
     obj.menu();

    
return 0;
}