#include<ctime>
#include<windows.h>
#include<iostream>
#include<string>
#include<cstdio>
#include <dos.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
void SetColor(int ForgC);
int wch;
string date;
string gate;
class dates
{
    public:
    string date;
void calendar()
{
    cout<<"\nPlease select a date given below from the timetable:";
              cout<<"\nDates\n";
              cout<<"\n|\tJanuary|\tFebruary|\tMarch| \tApril|\t May |\t June|\t July|\t August|\t September|\t October|\t November|\t December|\n";
              cout<<"________________________________________________________________________________________________________________________________________________\n";
              cout<<"\n|\t   1/1 |\t  1/2   | \t 1/3| \t 1/4 |\t 1/5 |\t  1/6|\t  1/7|\t  1/8  |\t   1/9    | \t  1/10 |\t    1/11 |\t    1/12 |\n";
              cout<<"\n|\t  15/1 |\t  15/2  | \t15/3| \t15/4 |\t 15/5|\t 15/6|\t 15/7|\t 15/8  |\t   15/9   | \t 15/10 |\t   15/11 |\t    15/12|\n";
              cout<<"\n|\t  24/1 |\t  24/2  | \t24/3| \t24/4 |\t 24/5|\t 24/6|\t 24/7|\t 24/8  |\t   24/9   | \t 24/10 |\t   24/11 |\t    24/12|\n";
              cout<<"\nPlease enter a feasible date from the dates given above in the dd/mm format:"<<endl;
              cin>>date;
              cout<<"We've noted down the date! Thank you"<<endl;
}
};
class JFK: public dates
{
public:
    ifstream file;
    string content;
    string arrival="JFK";
    string departure="MUMBAI";
    string fch;
    int res;
    string na;
    int bagage,fd;
    int age;
    string gender;
    int passno;
    int hotel_choice;
    string seatno;
    string seatloc;
    float seatp;
    int t_class;
    string CLAS;
public:
int ticketing()
{
        cout<<"\n--PLEASE ENTER YOUR NAME--:"<<endl;
        fflush(stdin);
        getline(cin,na);
        cout<<"\n--\nPLEASE ENTER NO. OF BAGS--"<<endl;
        cin>>bagage;
        cout<<"\n--PLEASE ENTER AGE--"<<endl;
        cin>>age;
        cout<<"\n--PLEASE ENTER YOUR PASSPORT NUMBER--"<<endl;
        cin>>passno;
        cout<<"\n--PLEASE ENTER GENDER(M/F/Other)--"<<endl;
        cin>>gender;
        cout<<"\n--ENTER YOUR FOOD PREFERENCE 1.VEG 2.NON-VEG 3.VEGAN--"<<endl;
        cin>>fd;
              if(fd==1)
              {
                  cout<<"****VEG******"<<endl;
                  fch="VEG";
              }
              else if(fd==2)
              {
                  cout<<"****NON-VEG*****"<<endl;
                  fch="NON-VEG";
              }
              else
              {
                  cout<<"******VEGAN*****"<<endl;
                  fch="VEGAN";
              }
              dates::calendar();
    cout<<"1.BUSINESS\n2.ECONOMY:\n";
    cin>>t_class;
    if(t_class == 1)
    {
        CLAS="BUSINESS";
        cout<<"-----------------BUSINESS CLASS----------------"<<endl;
        cout<<"Business class seats available are: A1  B1  D1  B2 C2  D2"<<endl;

        cout<<"Enter seat no :"<<endl;
        fflush(stdin);
        getline(cin,seatno);
        if(seatno=="A1" ||seatno== "B1" ||seatno== "D1" || seatno=="B2" ||seatno== "C2" ||seatno== "D2")
        {
            seatp=130000;
        }
        else
        {
            SetColor(44);
            Beep(500, 500);
        cout<<"Seat already booked !"<<endl;
        }
    }
    else
    {
        cout<<"---------------------ECONOMY CLASS--------------------------"<<endl;
        cout<<"choose seat location";
        cout<<"1.Aisle\n 2.Window\n 3.Center\n"<<endl;
        cin>>seatloc;
        CLAS="ECONOMY";
        if(seatloc == "1")
        {
            cout<<"Available seats are: C1 D1 C2 D3 C6 D8 "<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatno;
            if( seatno == "C1" ||seatno == "D1" || seatno == "C2" || seatno == "D3" || seatno=="C6" || seatno=="D8")
            {
            seatp=80000;
            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatloc == "2")
        {
            cout<<"Availabe seats are: A3 F3 F8 A9"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatno;
            if( seatno == "A3" || seatno == "F3" || seatno == "F8" || seatno == "A9" )
            {
            seatp=80000;
            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatloc == "3")
        {
            cout<<"Availabe seats are: E2 C10 E11 C13"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatno;
            if( seatno == "E2" || "C10" || "E11" || "C13" )
            {
            seatp=80000;

            }
            else
            {
            SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else
        {
            SetColor(44);
            Beep(500, 500);
            cout<<"INVALID CHOICE!!"<<endl;
        }
    }

    cout<<"*                THIS IS YOUR BOOKING RECEIPT:  \n\n\n  *"<<endl;
cout<<"*                          NAME:                                         *"<<na<<endl;
cout<<"*                          GENDER:                                       *"<<gender<<endl;
cout<<"*                          PASSPORT NO:                                  *"<<passno<<endl;
cout<<"*                          TOTAL NUMBER OF BAGAGE:                       *"<<bagage<<endl;
cout<<"*                          SEAT NUMBER:                                  *"<<seatno<<endl;
cout<<"*                          CLASS:                                        *"<<CLAS<<endl;
cout<<"*                          FOOD OPTION:                                  *"<<fch<<endl;
cout<<"*                          FLYING FROM:                                  *"<<departure<<"FLYING TO:"<<arrival<<endl;
time_t t;
time (&t);
cout<<"*                         BOOKING DATE AND TIME:                         *"<<asctime(localtime(&t))<<endl;
if(age>=55||age<=2)
{
res=(seatp*20)/100;
}
cout<<"*                          TOTAL PRICE :                                 *"<<res<<endl;
cout<<"\nWould you like to have a Web-Checkin:";
cout<<"\nPress 1.for YES 2. NO:";
cin>>wch;
if(wch==1)
{
   cout<<"\n\n\n\t----------------------Boarding Pass----------------\t\t\n\n";
   cout<<"\tNAME OF PASSENGER: "<<na<<"\tFLIGHT NO: EK051";
   cout<<"\n\tClass: "<<CLAS<<"        \t\tDate :"<<date;
   cout<<"\n\tSeat No."<<seatno<<"      \tFrom: Mumbai to "<<arrival;
   cout<<"\n\tGate: G2"<<"           \tBoarding time: 12:15";
   cout<<"\n\n\n\t----------------------------------------------------\t\t\n\n";
}
else
{
 cout<<"Thank you for choosing MUMBAI AIRLINE";
    cout<<"Have a Happy Journey!!";

}
cout<<"\nDo you want to know about the details of the hotel which are near by the airport(within 3 kms)";
    cout<<"\n1.Yes\n2.No\nEnter your choice: ";
    cin>>hotel_choice;
    if(hotel_choice==1)
    {
        file.open("jfkhotel.txt");
    if(!file)
    {
     SetColor(44);
            Beep(500, 500);
        cout<<"File not found!"<<endl;
        return 0;
    }
    else
    {
                while(!file.eof())
        {
            getline(file,content);
            cout<<content<<endl;
        }
    }
    }
    else
    {
        cout<<"\nEnjoy your time in NYC";
    }
}
};
class changi:public dates
{
    public:
    ifstream file;
    string content;
    int hotel_choice;
    string arrival="CHANGI";
    string departure="MUMBAI";
    string fch;
    int res;
    string date;
    string na;
    int bagage,fd;
    int age;
    string gender;
    int passno;
    string seatnochangi;
    int seatlocchangi;
    float seatpchangi;
    int t_class;
    string CLASchangi;
    public:
int ticketing()
{
   cout<<"\n--PLEASE ENTER YOUR NAME--:"<<endl;
        fflush(stdin);
        getline(cin,na);
        cout<<"--PLEASE ENTER NO. OF BAGS--"<<endl;
        cin>>bagage;
        cout<<"--PLEASE ENTER AGE--"<<endl;
        cin>>age;
        cout<<"--PLEASE ENTER YOUR PASSPORT NUMBER--"<<endl;
        cin>>passno;
        cout<<"--PLEASE ENTER GENDER(M/F/Other)--"<<endl;
        cin>>gender;
        cout<<"--ENTER YOUR FOOD PREFERENCE 1.VEG 2.NON-VEG 3.VEGAN--"<<endl;
        cin>>fd;
              if(fd==1)
              {
                  cout<<"****VEG******"<<endl;
                  fch="VEG";
              }
              else if(fd==2)
              {
                  cout<<"****NON-VEG*****"<<endl;
                  fch="NON-VEG";
              }
              else
              {
                  cout<<"******VEGAN*****"<<endl;
                  fch="VEGAN";
              }
      dates::calendar();
    cout<<"1.BUSINESS\n2.ECONOMY:\n";
    cin>>t_class;
    if(t_class == 1)
    {
        CLASchangi="BUSINESS";
        cout<<"-----BUSINESS CLASS-----"<<endl;
        cout<<"Business class seats available are: A1  B1  C2  D1"<<endl;
        cout<<"Enter seat no :"<<endl;
        fflush(stdin);
        getline(cin,seatnochangi);
        if(seatnochangi=="A1" ||seatnochangi== "B1" ||seatnochangi== "C2" || seatnochangi=="D1")
        {
            seatpchangi=120000;
        }
        else
        {
        cout<<"Seat not available !"<<endl;
        }
    }
    else
    {
        CLASchangi="ECONOMY";
        cout<<"-----ECONOMY CLASS-----"<<endl;
        cout<<"choose seat location";
        cout<<"1.Aisle\n 2.Window\n 3.Center\n"<<endl;
        cin>>seatlocchangi;
        if(seatlocchangi ==1)
        {
            cout<<"Availabe seats are: C2 D11 C12 D13 "<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnochangi;
            if( seatnochangi == "C2" ||seatnochangi == "D11" || seatnochangi== "C12" || seatnochangi == "D13")
            {
                seatpchangi=109000;;
            }
            else
            {
            SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocchangi == 2)
        {
            cout<<"Availabe seats are: A3 F3 A8 F14"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnochangi;
            if( seatnochangi == "A3" || seatnochangi == "F3" || seatnochangi == "A8" || seatnochangi == "F14" )
            {
                seatpchangi=109000;

            }
            else
            {
            SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocchangi == 3)
        {
            cout<<"Availabe seats are: B3 E5 B8 E11 "<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnochangi;
            if( seatnochangi == "B3" || "E5" || "B8" || "E11" )
            {
                seatpchangi=109000;
            }
            else
            {
            SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else
        {
           SetColor(44);
            Beep(500, 500);
            cout<<"INVALID CHOICE!!"<<endl;
        }
    }
cout<<"*                THIS IS YOUR BOOKING RECEIPT:  \n\n\n  *"<<endl;
cout<<"*                          NAME:                                        *"<<na<<endl;
cout<<"*                          GENDER:                                      *"<<gender<<endl;
cout<<"*                          PASSPORT NO:                                 *"<<passno<<endl;
cout<<"*                          TOTAL NUMBER OF BAGAGE:                      *"<<bagage<<endl;
cout<<"*                          SEAT NUMBER:                                 *"<<seatnochangi<<endl;
cout<<"*                          CLASS:                                       *"<<CLASchangi<<endl;
cout<<"*                          FOOD OPTION:                                 *"<<fch<<endl;
cout<<"*                          FLYING FROM:                                 *"<<departure<<"FLYING TO:"<<arrival<<endl;
time_t t;
time (&t);
cout<<"*                         BOOKING DATE AND TIME:                        *"<<asctime(localtime(&t))<<endl;
if(age>=55||age<=2)
{
seatpchangi=(seatpchangi*20)/100;
}
cout<<"*                          TOTAL PRICE :                                *"<<seatpchangi<<endl;

cout<<"\nWould you like to have a Web-Checkin:";
cout<<"\nPress 1.for YES 2. NO:";
cin>>wch;
if(wch==1)
{
    cout<<"\n\n\n\t----------------------Boarding Pass--------------------\t\t\n\n";
    cout<<"\tNAME OF PASSENGER: "<<na<<"\tFLIGHT NO: EK056";
   cout<<"\n\tClass: "<<CLASchangi<<"        \t\tDate :"<<date;
   cout<<"\n\tSeat No."<<seatnochangi<<"      \tFrom: Mumbai to "<<arrival;
   cout<<"\n\tGate: A2"<<"           \tBoarding time: 11:15 pm";
    cout<<"\n\n\n\t----------------------------------------------------\t\t\n\n";
}
else
{
 cout<<"Thank you for choosing MUMBAI AIRLINE";
cout<<"Have a Happy Journey!!";
}
    cout<<"\nDo you want to know about the details of the hotel which are near by the airport(within 3 kms)";
    cout<<"\n1.Yes\n2.No\nEnter your choice: ";
    cin>>hotel_choice;
    if(hotel_choice==1)
    {
        file.open("changihotel.txt");
    if(!file)
    {
        SetColor(44);
            Beep(500, 500);
        cout<<"File not found!"<<endl;
        return 0;
    }
    else
    {
                while(!file.eof())
        {
            getline(file,content);
            cout<<content<<endl;
        }
    }
    }
    else
    {
        cout<<"\nEnjoy your time in Singapore";
    }
}
};
class beijing:public dates
{
public:
ifstream file;
    string content;
    int hotel_choice;
string arrival="BEIJING";
string departure="MUMBAI";
string fch;
int res;
string na;
int bagage,fd;
int age;
string date;
string gender;
int passno;
    string seatnobeijing;
    int seatlocbeijing;

    float seatpbeijing;
    int t_class;
    string CLASbeijing;
public:
int ticketing()
{
    cout<<"\n--PLEASE ENTER YOUR NAME--:"<<endl;
        fflush(stdin);
        getline(cin,na);
        cout<<"--PLEASE ENTER NO. OF BAGS--"<<endl;
        cin>>bagage;
        cout<<"--PLEASE ENTER AGE--"<<endl;
        cin>>age;
        cout<<"--PLEASE ENTER YOUR PASSPORT NUMBER--"<<endl;
        cin>>passno;
        cout<<"--PLEASE ENTER GENDER(M/F/Other)--"<<endl;
        cin>>gender;
        cout<<"--ENTER YOUR FOOD PREFERENCE 1.VEG 2.NON-VEG 3.VEGAN--"<<endl;
        cin>>fd;
              if(fd==1)
              {
                  cout<<"****VEG******"<<endl;
                  fch="VEG";
              }
              else if(fd==2)
              {
                  cout<<"****NON-VEG*****"<<endl;
                  fch="NON-VEG";
              }
              else
              {
                  cout<<"******VEGAN*****"<<endl;
                  fch="VEGAN";
              }
           dates::calendar();
    cout<<"1.BUSINESS\n2.ECONOMY:\n";
    cin>>t_class;
    if(t_class == 1)
    {
        CLASbeijing="BUSINESS";
        cout<<"-----BUSINESS CLASS-----"<<endl;
        cout<<"Business class seats available are: A1 C1  C2  D2"<<endl;
        cout<<"Enter seat no :"<<endl;
        fflush(stdin);
        getline(cin,seatnobeijing);
        if(seatnobeijing=="A1" ||seatnobeijing== "C1" ||seatnobeijing== "C2" || seatnobeijing=="D2")
        {
        seatpbeijing=85000;
        }
        else
        {
            SetColor(44);
            Beep(500, 500);
        cout<<"Seat not available !"<<endl;
        }
    }
    else
    {
        CLASbeijing="ECONOMY";
        cout<<"-----ECONOMY CLASS-----"<<endl;
        cout<<"choose seat location";
        cout<<"1.Aisle\n 2.Window\n 3.Center\n"<<endl;
        cin>>seatlocbeijing;
        if(seatlocbeijing == 1)
        {
            cout<<"Availabe seats are: C1 D3 C12 D15 "<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnobeijing;
            if( seatnobeijing == "C1" ||seatnobeijing == "D3" || seatnobeijing == "C12" || seatnobeijing == "D15")
            {
            seatpbeijing=55000;

            }
            else
            {
                SetColor(44);
            Beep(500, 500);

            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocbeijing == 2)
        {
            cout<<"Availabe seats are: A3 F3 A13 F14"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnobeijing;
            if( seatnobeijing == "A3" || seatnobeijing == "F3" || seatnobeijing == "A13" || seatnobeijing == "F14" )
            {
            seatpbeijing=50000;

            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocbeijing == 55000 )
        {
            cout<<"Availabe seats are: C2 E2 C12 E14"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnobeijing;
            if( seatnobeijing == "C2" || "E2" || "C12" || "E14" )
            {
            seatpbeijing=150;

            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else
        {
            SetColor(44);
            Beep(500, 500);
            cout<<"INVALID CHOICE!!"<<endl;
        }
    }
    cout<<"*                THIS IS YOUR BOOKING RECEIPT:  \n\n\n  *"<<endl;
cout<<"*                          NAME:                                        *"<<na<<endl;
cout<<"*                          GENDER:                                      *"<<gender<<endl;
cout<<"*                          PASSPORT NO:                                 *"<<passno<<endl;
cout<<"*                          TOTAL NUMBER OF BAGAGE:                      *"<<bagage<<endl;
cout<<"*                          SEAT NUMBER:                                 *"<<seatnobeijing<<endl;
cout<<"*                          CLASS:                                       *"<<CLASbeijing<<endl;
cout<<"*                          FOOD OPTION:                                 *"<<fch<<endl;
cout<<"*                          FLYING FROM:                                 *"<<departure<<"FLYING TO:"<<arrival<<endl;
time_t t;
time (&t);
cout<<"*                         BOOKING DATE AND TIME:                        *"<<asctime(localtime(&t))<<endl;
if(age>=55||age<=2)
{
seatpbeijing=(seatpbeijing*20)/100;
}
cout<<"*                          TOTAL PRICE :                                 *"<<seatpbeijing<<endl;
cout<<"\nWould you like to have a Web-Checkin:";
cout<<"\nPress 1.for YES 2. NO:";
cin>>wch;
if(wch==1)
{
    cout<<"\n\n\n\t----------------------Boarding Pass----------------\t\t\n\n";
    cout<<"\tNAME OF PASSENGER: "<<na<<"\tFLIGHT NO: EK059";
   cout<<"\n\tClass: "<<CLASbeijing<<"        \t\tDate :"<<date;
   cout<<"\n\tSeat No."<<seatnobeijing<<"      \tFrom: Mumbai to "<<arrival;
   cout<<"\n\tGate: C11"<<"           \tBoarding time: 04:15 pm";
    cout<<"\n\n\n\t----------------------------------------------------\t\t\n\n";
}
else
{
 cout<<"Thank you for choosing MUMBAI AIRLINE";
    cout<<"Have a Happy Journey!!";

}
cout<<"\nDo you want to know about the details of the hotel which are near by the airport(within 3 kms)";
    cout<<"\n1.Yes\n2.No\nEnter your choice: ";
    cin>>hotel_choice;
    if(hotel_choice==1)
    {
        file.open("beijinghotel.txt");
    if(!file)
    {
        SetColor(44);
            Beep(500, 500);
        cout<<"File not found!"<<endl;
        return 0;
    }
    else
    {
                while(!file.eof())
        {
            getline(file,content);
            cout<<content<<endl;
        }
    }
    }
    else
    {
        cout<<"\nEnjoy your time in Beijing";
    }
}

};
class dubai:public dates
{
    public:
        ifstream file;
    string content;
    int hotel_choice;
    string arrival="DUBAI";
    string departure="MUMBAI";
    string fch;
    int res;
    string na;
    int bagage,fd;
    int age;
    string gender;
    int passno;
    string seatnoDUBAI;
    int seatlocDUBAI;
    float seatpDUBAI;
    int seatpDUABI;
    int t_class;
    string CLASDUBAI;
    public:
int ticketing()
{
   cout<<"\n--PLEASE ENTER YOUR NAME--:"<<endl;
        fflush(stdin);
        getline(cin,na);
        cout<<"--PLEASE ENTER NO. OF BAGS--"<<endl;
        cin>>bagage;
        cout<<"--PLEASE ENTER AGE--"<<endl;
        cin>>age;
        cout<<"--PLEASE ENTER YOUR PASSPORT NUMBER--"<<endl;
        cin>>passno;
        cout<<"--PLEASE ENTER GENDER(M/F/Other)--"<<endl;
        cin>>gender;
        cout<<"--ENTER YOUR FOOD PREFERENCE 1.VEG 2.NON-VEG 3.VEGAN--"<<endl;
        cin>>fd;
              if(fd==1)
              {
                  cout<<"****VEG******"<<endl;
                  fch="VEG";
              }
              else if(fd==2)
              {
                  cout<<"****NON-VEG*****"<<endl;
                  fch="NON-VEG";
              }
              else
              {
                  cout<<"******VEGAN*****"<<endl;
                  fch="VEGAN";
              }
          dates::calendar();
    cout<<"1.BUSINESS\n2.ECONOMY:\n";
    cin>>t_class;
    if(t_class == 1)
    {
        CLASDUBAI="BUSINESS";

        cout<<"-----BUSINESS CLASS-----"<<endl;
        cout<<"Business class seats available are: X3  Y3  Z1  B2  C2  "<<endl;
        cout<<"Enter seat no :"<<endl;
        fflush(stdin);
        getline(cin,seatnoDUBAI);
        if(seatnoDUBAI=="X3" ||seatnoDUBAI== "Y3" ||seatnoDUBAI== "Z1" || seatnoDUBAI=="B2" ||seatnoDUBAI== "C2")
        {
        seatpDUBAI=56000;
        }
        else
        {
            SetColor(44);
            Beep(500, 500);
        cout<<"Seat not available !"<<endl;
        }
    }
    else
    {
        CLASDUBAI="ECONOMY";

        cout<<"-----ECONOMY CLASS-----"<<endl;
        cout<<"choose seat location";
        cout<<"1.Aisle\n 2.Window\n 3.Center\n"<<endl;
        cin>>seatlocDUBAI;
        if(seatlocDUBAI == 1)
        {
            cout<<"Availabe seats are: Q4  F1  G1  H1"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnoDUBAI;
            if( seatnoDUBAI == "Q4" ||seatnoDUBAI == "F1" || seatnoDUBAI == "G1" || seatnoDUBAI == "H1")
            {
            seatpDUABI=33000;
            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocDUBAI == 2)
        {
            cout<<"Availabe seats are: K7 L7 M4 N4"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnoDUBAI;
            if( seatnoDUBAI == "K7" || seatnoDUBAI == "L7" || seatnoDUBAI == "M4" || seatnoDUBAI == "N4" )
            {
            seatpDUBAI=30000;

            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocDUBAI == 3)
        {
            cout<<"Availabe seats are: T1 U1 V2 W3"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnoDUBAI;
            if( seatnoDUBAI == "T1" ||seatnoDUBAI == "U1" ||seatnoDUBAI == "V2" ||seatnoDUBAI == "W3" )
            {
            seatpDUBAI=32000;

            }
            else
            {
            SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else
        {
            SetColor(44);
            Beep(500, 500);
            cout<<"INVALID CHOICE!!"<<endl;
        }
    }

    cout<<"*                THIS IS YOUR BOOKING RECEIPT:  \n\n\n  *"<<endl;
cout<<"*                          NAME:                                    *"<<na<<endl;
cout<<"*                          GENDER:                                  *"<<gender<<endl;
cout<<"*                          PASSPORT NO:                             *"<<passno<<endl;
cout<<"*                          TOTAL NUMBER OF BAGAGE:                  *"<<bagage<<endl;
cout<<"*                          SEAT NUMBER:                             *"<<seatnoDUBAI<<endl;
cout<<"*                          CLASS:                                   *"<<CLASDUBAI<<endl;
cout<<"*                          FOOD OPTION:                             *"<<fch<<endl;
cout<<"*                          FLYING FROM:                             *"<<departure<<"FLYING TO:"<<arrival<<endl;
time_t t;
time (&t);
cout<<"*                         BOOKING DATE AND TIME:                    *"<<asctime(localtime(&t))<<endl;
if(age>=55||age<=2)
{
seatpDUBAI=(seatpDUBAI*20)/100;
}
cout<<"*                          TOTAL PRICE :                            *"<<seatpDUBAI<<endl;
cout<<"\nWould you like to have a Web-Checkin:";
cout<<"\nPress 1.for YES 2. NO:";
cin>>wch;
if(wch==1)
{
    cout<<"\n\n\n\t----------------------Boarding Pass----------------\t\t\n\n";
    cout<<"\tNAME OF PASSENGER: "<<na<<"\tFLIGHT NO: EK066";
   cout<<"\n\tClass: "<<CLASDUBAI<<"        \t\tDate :"<<date;
   cout<<"\n\tSeat No."<<seatnoDUBAI<<"      \tFrom: Mumbai to "<<arrival;
   cout<<"\n\tGate: D12"<<"           \tBoarding time: 04:15pm";
    cout<<"\n\n\n\t----------------------------------------------------\t\t\n\n";
}
else
{
cout<<"Thank you for choosing MUMBAI AIRLINE";
cout<<"Have a Happy Journey!!";
}
cout<<"\nDo you want to know about the details of the hotel which are near by the airport(within 3 kms)";
    cout<<"\n1.Yes\n2.No\nEnter your choice: ";
    cin>>hotel_choice;
    if(hotel_choice==1)
    {
        file.open("dubaihotel.txt");
    if(!file)
    {
       SetColor(44);
            Beep(500, 500);
        cout<<"File not found!"<<endl;
        return 0;
    }
    else
    {
                while(!file.eof())
        {
            getline(file,content);
            cout<<content<<endl;
        }
    }
    }
    else
    {
        cout<<"\nEnjoy your time in Dubai";
    }
}
};
class london:public dates
{
   public:
    ifstream file;
    string content;
    int hotel_choice;
    string arrival="LONDON";
    string departure="MUMBAI";
    string fch;
    int res;
    string na;
    int bagage,fd;
    int age;
    string gender;
    int passno;
    string seatnolondon;
    int seatloclondon;
    float seatplondon;
    int t_class;
    string CLASlondon;
public:
int ticketing()
{
    cout<<"\n--PLEASE ENTER YOUR NAME--:"<<endl;
        fflush(stdin);
        getline(cin,na);
        cout<<"--PLEASE ENTER NO. OF BAGS--"<<endl;
        cin>>bagage;
        cout<<"--PLEASE ENTER AGE--"<<endl;
        cin>>age;
        cout<<"--PLEASE ENTER YOUR PASSPORT NUMBER--"<<endl;
        cin>>passno;
        cout<<"--PLEASE ENTER GENDER(M/F/Other)--"<<endl;
        cin>>gender;
        cout<<"--ENTER YOUR FOOD PREFERENCE 1.VEG 2.NON-VEG 3.VEGAN--"<<endl;
        cin>>fd;
              if(fd==1)
              {
                  cout<<"****VEG******"<<endl;
                  fch="VEG";
              }
              else if(fd==2)
              {
                  cout<<"****NON-VEG*****"<<endl;
                  fch="NON-VEG";
              }
              else
              {
                  cout<<"******VEGAN*****"<<endl;
                  fch="VEGAN";
              }
dates::calendar();
    cout<<"1.BUSINESS\n2.ECONOMY:\n";
    cin>>t_class;
    if(t_class == 1)
    {
        CLASlondon="BUSINESS";
        cout<<"-----BUSINESS CLASS-----"<<endl;
        cout<<"Business class seats available are: D1  F1  G1  F2  G2  D2"<<endl;
        cout<<"Enter seat no :"<<endl;
        fflush(stdin);
        getline(cin,seatnolondon);
        if(seatnolondon=="D1" ||seatnolondon== "F1" ||seatnolondon== "G1" || seatnolondon=="F2" ||seatnolondon== "G2" ||seatnolondon== "D2")
        {
        seatplondon=95000;

        }
        else
        {
        SetColor(44);
            Beep(500, 500);
        cout<<"Seat not available !"<<endl;
        }
    }
    else
    {
        CLASlondon="ECONOMY";
        cout<<"-----ECONOMY CLASS-----"<<endl;
        cout<<"choose seat location";
        cout<<"1.Aisle\n 2.Window\n 3.Center\n"<<endl;
        cin>>seatloclondon;
        if(seatloclondon == 1)
        {
            cout<<"Availabe seats are: R4 S4 T5 U5 "<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnolondon;
            if( seatnolondon == "R4" ||seatnolondon == "S4" || seatnolondon == "T5" || seatnolondon == "U5")
            {
            seatplondon=71564;

            }
            else
            {
            SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatloclondon == 2)
        {
            cout<<"Availabe seats are: Q5 R5 S6 T6"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnolondon;
            if( seatnolondon == "Q5" || seatnolondon == "R5" || seatnolondon == "S6" || seatnolondon == "T6" )
            {
            seatplondon=71876;
            }
            else
            {
            SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatloclondon == 3)
        {
            cout<<"Availabe seats are: L12 M12 N13 O13"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnolondon;
            if( seatnolondon == "L12" || seatnolondon =="M12" || seatnolondon == "N13" || seatnolondon =="O13" )
            {
            seatplondon=71000;

            }
            else
            {
            SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else
        {
           SetColor(44);
            Beep(500, 500);
            cout<<"INVALID CHOICE!!"<<endl;
        }
    }
    cout<<"*                THIS IS YOUR BOOKING RECEIPT:  \n\n\n  *"<<endl;
cout<<"*                          NAME:                                     *"<<na<<endl;
cout<<"*                          GENDER:                                   *"<<gender<<endl;
cout<<"*                          PASSPORT NO:                              *"<<passno<<endl;
cout<<"*                          TOTAL NUMBER OF BAGAGE:                   *"<<bagage<<endl;
cout<<"*                          SEAT NUMBER:                              *"<<seatnolondon<<endl;
cout<<"*                          CLASS:                                    *"<<CLASlondon<<endl;
cout<<"*                          FOOD OPTION:                              *"<<fch<<endl;
cout<<"*                          FLYING FROM:                              *"<<departure<<"FLYING TO:"<<arrival<<endl;
time_t t;
time (&t);
cout<<"*                         BOOKING DATE AND TIME:                     *"<<asctime(localtime(&t))<<endl;
if(age>=55||age<=2)
{
seatplondon=(seatplondon*20)/100;
}
cout<<"*                          TOTAL PRICE :                             *"<<seatplondon<<endl;
cout<<"\nWould you like to have a Web-Checkin:";
cout<<"\nPress 1.for YES 2. NO:";
cin>>wch;
if(wch==1)
{
    cout<<"\n\n\n\t----------------------Boarding Pass----------------\t\t\n\n";
    cout<<"\tNAME OF PASSENGER: "<<na<<"\tFLIGHT NO: EK047";
   cout<<"\n\tClass: "<<CLASlondon<<"        \t\tDate :"<<date;
   cout<<"\n\tSeat No."<<seatnolondon<<"      \tFrom: Mumbai to "<<arrival;
   cout<<"\n\tGate: A14"<<"           \tBoarding time: 06:15 am";
    cout<<"\n\n\n\t----------------------------------------------------\t\t\n\n";
}
else
{
 cout<<"Thank you for choosing MUMBAI AIRLINE";
    cout<<"Have a Happy Journey!!";

}
cout<<"\nDo you want to know about the details of the hotel which are near by the airport(within 3 kms)";
    cout<<"\n1.Yes\n2.No\nEnter your choice: ";
    cin>>hotel_choice;
    if(hotel_choice==1)
    {
        file.open("londonhotel.txt");
    if(!file)
    {
        SetColor(44);
            Beep(500, 500);
        cout<<"File not found!"<<endl;
        return 0;
    }
    else
    {
                while(!file.eof())
        {
            getline(file,content);
            cout<<content<<endl;
        }
    }
    }
    else
    {
        cout<<"\nEnjoy your time in London";
    }
}
};

class delhi:public dates
{
    public:
        ifstream file;
    string content;
    int hotel_choice;
    string arrival="DELHI";
    string departure="MUMBAI";
    string fch;
    int res;
    string na;
    int bagage,fd;
    int age;
    string gender;
    int passno;
    string CLASdelhi;
    string seatnodelhi;
    int seatlocdelhi;
    float seatpdelhi;
    int t_class;
public:
int ticketing()
{
    cout<<"\n--PLEASE ENTER YOUR NAME--:"<<endl;
        fflush(stdin);
        getline(cin,na);
        cout<<"--PLEASE ENTER NO. OF BAGS--"<<endl;
        cin>>bagage;
        cout<<"PLEASE ENTER AGE--"<<endl;
        cin>>age;
        cout<<"--PLEASE ENTER YOUR PASSPORT NUMBER--"<<endl;
        cin>>passno;
        cout<<"--PLEASE ENTER GENDER(M/F/Other)--"<<endl;
        cin>>gender;
        cout<<"--ENTER YOUR FOOD PREFERENCE 1.VEG 2.NON-VEG 3.VEGAN--"<<endl;
        cin>>fd;
              if(fd==1)
              {
                  cout<<"****VEG******"<<endl;
                  fch="VEG";
              }
              else if(fd==2)
              {
                  cout<<"****NON-VEG*****"<<endl;
                  fch="NON-VEG";
              }
              else
              {
                  cout<<"******VEGAN*****"<<endl;
                  fch="VEGAN";
              }
          dates::calendar();
    cout<<"1.BUSINESS\n2.ECONOMY:\n";
    cin>>t_class;
    if(t_class == 1)
    {
        CLASdelhi="BUSINESS";
        cout<<"-----BUSINESS CLASS-----"<<endl;
        cout<<"Business class seats available are: P8  Q8  R8  P9  Q9  R9"<<endl;
        cout<<"Enter seat no :"<<endl;
        fflush(stdin);
        getline(cin,seatnodelhi);
        if(seatnodelhi=="P8" ||seatnodelhi== "Q8" ||seatnodelhi== "R8" || seatnodelhi=="P9" ||seatnodelhi== "Q9" ||seatnodelhi== "R9")
        {
        seatpdelhi=8000;

        }
        else
        {
            SetColor(44);
            Beep(500, 500);
        cout<<"Seat not available !"<<endl;
        }
    }
    else
    {
        CLASdelhi="ECONOMY";
        cout<<"-----ECONOMY CLASS-----"<<endl;
        cout<<"choose seat location";
        cout<<"1.Aisle\n 2.Window\n 3.Center\n"<<endl;
        cin>>seatlocdelhi;
        if(seatlocdelhi == 1)
        {
            cout<<"Availabe seats are: L2 M2 N3 O3 "<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnodelhi;
            if( seatnodelhi == "L2" ||seatnodelhi == "M2" || seatnodelhi == "N3" || seatnodelhi == "03")
            {
            seatpdelhi=5664;

            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocdelhi == 2)
        {
            cout<<"Availabe seats are: B9 F9 G10 H10"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnodelhi;
            if( seatnodelhi == "B9" || seatnodelhi == "F9" || seatnodelhi == "G10" || seatnodelhi == "H10" )
            {
            seatpdelhi=5456;

            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocdelhi == 3)
        {
            cout<<"Availabe seats are: B12 C12 D12 E12"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnodelhi;
            if( seatnodelhi == "B12" || "C12" || "D12" || "E12" )
            {
            seatpdelhi=5900;

            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else
        {
            SetColor(44);
            Beep(500, 500);
            cout<<"INVALID CHOICE!!"<<endl;
        }
    }
    cout<<"*                THIS IS YOUR BOOKING RECEIPT:  \n\n\n  *"<<endl;
  cout<<"*                          NAME:                                     *"<<na<<endl;
  cout<<"*                          GENDER:                                   *"<<gender<<endl;
  cout<<"*                          PASSPORT NO:                              *"<<passno<<endl;
  cout<<"*                          TOTAL NUMBER OF BAGAGE:                   *"<<bagage<<endl;
   cout<<"*                          SEAT NUMBER:                             *"<<seatnodelhi<<endl;
   cout<<"*                          CLASS:                                   *"<<CLASdelhi<<endl;
  cout<<"*                          FOOD OPTION:                              *"<<fch<<endl;
  cout<<"*                          FLYING FROM:                              *"<<departure<<"FLYING TO:"<<arrival<<endl;
   time_t t;
  time (&t);
  cout<<"*                         BOOKING DATE AND TIME:                     *"<<asctime(localtime(&t))<<endl;
  if(age>=55||age<=2)
  {
      seatpdelhi=(seatpdelhi*20)/100;
  }
  cout<<"*                          TOTAL PRICE :                             *"<<seatpdelhi<<endl;
cout<<"\nWould you like to have a Web-Checkin:";
cout<<"\nPress 1.for YES 2. NO:";
cin>>wch;
if(wch==1)
{
    cout<<"\n\n\n\t----------------------Boarding Pass----------------\t\t\n\n";
    cout<<"\tNAME OF PASSENGER: "<<na<<"\tFLIGHT NO: DK051";
   cout<<"\n\tClass: "<<CLASdelhi<<"        \t\tDate :"<<date;
   cout<<"\n\tSeat No."<<seatnodelhi<<"      \tFrom: Mumbai to "<<arrival;
   cout<<"\n\tGate: B14"<<"           \tBoarding time: 12:15 pm";
    cout<<"\n\n\n\t----------------------------------------------------\t\t\n\n";
}
else
{
 cout<<"Thank you for choosing MUMBAI AIRLINE";
    cout<<"Have a Happy Journey!!";

}

    cout<<"\nDo you want to know about the details of the hotel which are near by the airport(within 3 kms)";
    cout<<"\n1.Yes\n2.No\nEnter your choice: ";
    cin>>hotel_choice;
    if(hotel_choice==1)
    {
        file.open("delhihotel.txt");
    if(!file)
    {
        SetColor(44);
            Beep(500, 500);
        cout<<"File not found!"<<endl;
        return 0;
    }
    else
    {
                while(!file.eof())
        {
            getline(file,content);
            cout<<content<<endl;
        }
    }
    }
    else
    {
        cout<<"\nEnjoy your time in Delhi";
    }
}
};
class vishakapatnam:public dates
{
    public:
        ifstream file;
    string content;
    int hotel_choice;
    string arrival="VISHAKAPATNAM";
    string departure="MUMBAI";
    string fch;
    int res;
    string na;
    int bagage,fd;
    int age;
    string gender;
    int passno;
    string seatnovp;
    int seatlocvp;
    float seatpvp;
    int t_class;
    string CLASvp;
public:
int ticketing()
{
    cout<<"\n--PLEASE ENTER YOUR NAME--:"<<endl;
        fflush(stdin);
        getline(cin,na);
        cout<<"--PLEASE ENTER NO. OF BAGS--"<<endl;
        cin>>bagage;
        cout<<"PLEASE ENTER AGE--"<<endl;
        cin>>age;
        cout<<"--PLEASE ENTER YOUR PASSPORT NUMBER--"<<endl;
        cin>>passno;
        cout<<"--PLEASE ENTER GENDER(M/F/Other)--"<<endl;
        cin>>gender;
        cout<<"--ENTER YOUR FOOD PREFERENCE 1.VEG 2.NON-VEG 3.VEGAN--"<<endl;
        cin>>fd;
              if(fd==1)
              {
                  cout<<"****VEG******"<<endl;
                  fch="VEG";
              }
              else if(fd==2)
              {
                  cout<<"****NON-VEG*****"<<endl;
                  fch="NON-VEG";
              }
              else
              {
                  cout<<"******VEGAN*****"<<endl;
                  fch="VEGAN";
              }
       dates::calendar();
    cout<<"1.BUSINESS\n2.ECONOMY:\n";
    cin>>t_class;
    if(t_class == 1)
    {
        CLASvp="BUSINESS";
        cout<<"-----BUSINESS CLASS-----"<<endl;
        cout<<"Business class seats available are: X6  Y6  Z6  Y7  C7  X7"<<endl;
        cout<<"Enter seat no :"<<endl;
        fflush(stdin);
        getline(cin,seatnovp);
        if(seatnovp=="X6" ||seatnovp== "Y6" ||seatnovp== "Z6" || seatnovp=="Y7" ||seatnovp== "C7" ||seatnovp== "X7")
        {
        seatpvp=10000;

        }
        else
        {
            SetColor(44);
            Beep(500, 500);
        cout<<"Seat not available !"<<endl;
        }
    }
    else
    {
        CLASvp="ECONOMY";
        cout<<"-----ECONOMY CLASS-----"<<endl;
        cout<<"choose seat location";
        cout<<"1.Aisle\n 2.Window\n 3.Center\n"<<endl;
        cin>>seatlocvp;
        if(seatlocvp == 1)
        {
            cout<<"Availabe seats are: S4 T4 U5 V5 "<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnovp;
            if( seatnovp == "S4" ||seatnovp == "T4" || seatnovp == "U5" || seatnovp == "V5")
            {
            seatpvp=8456;

            }
            else
            {


            SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocvp == 2)
        {
            cout<<"Availabe seats are: R7 S7 T8 U8"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnovp;
            if( seatnovp == "R7" || seatnovp == "S7" || seatnovp == "T8" || seatnovp == "U8" )
            {
            seatpvp=8200;

            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocvp == 3)
        {
            cout<<"Availabe seats are: Q2 R2 S2 T2"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnovp;
            if( seatnovp == "Q2" || "R2" || "S2" || "T2" )
            {
            seatpvp=8900;

            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else
        {
            cout<<"INVALID CHOICE!!"<<endl;
        }
    }
    cout<<"*                THIS IS YOUR BOOKING RECEIPT:  \n\n\n  *"<<endl;
    cout<<"*                          NAME:                                   *"<<na<<endl;
    cout<<"*                          GENDER:                                 *"<<gender<<endl;
    cout<<"*                          PASSPORT NO:                            *"<<passno<<endl;
    cout<<"*                          TOTAL NUMBER OF BAGAGE:                 *"<<bagage<<endl;
     cout<<"*                          SEAT NUMBER:                           *"<<seatnovp<<endl;
     cout<<"*                          CLASS:                                 *"<<CLASvp<<endl;
    cout<<"*                          FOOD OPTION:                            *"<<fch<<endl;
    cout<<"*                          FLYING FROM:                            *"<<departure<<"FLYING TO:"<<arrival<<endl;
     time_t t;
    time (&t);
    cout<<"*                         BOOKING DATE AND TIME:                   *"<<asctime(localtime(&t))<<endl;
    if(age>=55||age<=2)
    {
        seatpvp=(seatpvp*20)/100;
    }
    cout<<"*                          TOTAL PRICE :                           *"<<seatpvp<<endl;
cout<<"Do you want a Web Check-In:";
cout<<"Press 1.Yes 2.No";
cin>>wch;
if(wch==1)
{  cout<<"\n\n\n\t----------------------Boarding Pass------------------------\t\t\n\n";
    cout<<"\tNAME OF PASSENGER: "<<na<<"\tFLIGHT NO: DK56";
   cout<<"\n\tClass: "<<CLASvp<<"        \t\tDate :"<<date;
   cout<<"\n\tSeat No."<<seatnovp<<"      \tFrom: Mumbai to "<<arrival;
   cout<<"\n\tGate: Z12"<<"           \tBoarding time: 11:15 pm";
    cout<<"\n\n\n\t----------------------------------------------------\t\t\n\n";
}
else
{
 cout<<"Thank you for choosing MUMBAI AIRLINE";
    cout<<"Have a Happy Journey!!";

}
   cout<<"\nDo you want to know about the details of the hotel which are near by the airport(within 3 kms)";
    cout<<"\n1.Yes\n2.No\nEnter your choice: ";
    cin>>hotel_choice;
    if(hotel_choice==1)
    {
        file.open("vishakapatnamhotel.txt");
    if(!file)
    {
        SetColor(44);
            Beep(500, 500);
        cout<<"File not found!"<<endl;
        return 0;
    }
    else
    {
                while(!file.eof())
        {
            getline(file,content);
            cout<<content<<endl;
        }
    }
    }
    else
    {
        cout<<"\nEnjoy your time in Vishakapatnam";
    }
}
};
class goa:public dates
{
   public:
       ifstream file;
    string content;
    int hotel_choice;
    string arrival="GOA";
    string departure="MUMBAI";
    string fch;
    int res;
    string na;
    int bagage,fd;
    int age;
    string gender;
    int passno;
    string seatnogoa;
    int seatlocgoa;
    float seatpgoa;
    int t_class;
    string CLASgoa;
public:
int ticketing()
{
        cout<<"\n--PLEASE ENTER YOUR NAME--:"<<endl;
        fflush(stdin);
        getline(cin,na);
        cout<<"--PLEASE ENTER NO. OF BAGS--"<<endl;
        cin>>bagage;
        cout<<"PLEASE ENTER AGE--"<<endl;
        cin>>age;
        cout<<"--PLEASE ENTER YOUR PASSPORT NUMBER--"<<endl;
        cin>>passno;
        cout<<"--PLEASE ENTER GENDER(M/F/Other)--"<<endl;
        cin>>gender;
        cout<<"--ENTER YOUR FOOD PREFERENCE 1.VEG 2.NON-VEG 3.VEGAN--"<<endl;
        cin>>fd;
              if(fd==1)
              {
                  cout<<"****VEG******"<<endl;
                  fch="VEG";
              }
              else if(fd==2)
              {
                  cout<<"****NON-VEG*****"<<endl;
                  fch="NON-VEG";
              }
              else
              {
                  cout<<"******VEGAN*****"<<endl;
                  fch="VEGAN";
              }
         dates::calendar();
    cout<<"1.BUSINESS\n2.ECONOMY:\n";
    cin>>t_class;
    if(t_class == 1)
    {
        CLASgoa="BUSINESS";
        cout<<"-----BUSINESS CLASS-----"<<endl;
        cout<<"Business class seats available are: L1  M1  N1  M2  N2  L2"<<endl;
        cout<<"Enter seat no :"<<endl;
        fflush(stdin);
        getline(cin,seatnogoa);
        if(seatnogoa=="L1" ||seatnogoa== "M1" ||seatnogoa== "N1" || seatnogoa=="M2" ||seatnogoa== "N2" ||seatnogoa== "L2")
        {
        seatpgoa=10000;
        }
        else
        {
            SetColor(44);
            Beep(500, 500);
        cout<<"Seat not available !"<<endl;
        }
    }
    else
    {
        CLASgoa="ECONOMY";
        cout<<"-----ECONOMY CLASS-----"<<endl;
        cout<<"choose seat location";
        cout<<"1.Aisle\n 2.Window\n 3.Center\n"<<endl;
        cin>>seatlocgoa;
        if(seatlocgoa == 1)
        {
            cout<<"Availabe seats are: I3 J3 K4 L4 "<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnogoa;
            if( seatnogoa == "I3" ||seatnogoa == "J3" || seatnogoa == "K4" || seatnogoa == "L4")
            {
            seatpgoa=8000;
            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocgoa == 2)
        {
            cout<<"Availabe seats are: C3 D3 E3 F3"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnogoa;
            if( seatnogoa == "C3" || seatnogoa == "D3" || seatnogoa == "E3" || seatnogoa == "F3" )
            {
            seatpgoa=6000;

            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocgoa == 3)
        {
            cout<<"Availabe seats are: K2 L2 M2 N2"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnogoa;
            if( seatnogoa == "K2" || seatnogoa=="L2" || seatnogoa=="M2" || seatnogoa=="N2" )
            {
            seatpgoa=6543;

            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else
        {
            SetColor(44);
            Beep(500, 500);
            cout<<"INVALID CHOICE!!"<<endl;
        }
    }
    cout<<"*                THIS IS YOUR BOOKING RECEIPT:  \n\n\n  *"<<endl;
cout<<"*                          NAME:                                      *"<<na<<endl;
cout<<"*                          GENDER:                                    *"<<gender<<endl;
cout<<"*                          PASSPORT NO:                               *"<<passno<<endl;
cout<<"*                          TOTAL NUMBER OF BAGAGE:                    *"<<bagage<<endl;
cout<<"*                          SEAT NUMBER:                               *"<<seatnogoa<<endl;
cout<<"*                          CLASS:                                     *"<<CLASgoa<<endl;
cout<<"*                          FOOD OPTION:                               *"<<fch<<endl;
cout<<"*                          FLYING FROM:                               *"<<departure<<"FLYING TO:"<<arrival<<endl;
time_t t;
time (&t);
cout<<"*                         BOOKING DATE AND TIME:                      *"<<asctime(localtime(&t))<<endl;
if(age>=55||age<=2)
{
seatpgoa=(seatpgoa*20)/100;
}
cout<<"*                          TOTAL PRICE :                              *"<<seatpgoa<<endl;
cout<<"Do you want a Web Check-In:";
cout<<"Press 1.Yes 2.No:";
cin>>wch;
if(wch==1)
{
   cout<<"\n\n\n\t----------------------Boarding Pass----------------\t\t\n\n";
    cout<<"\tNAME OF PASSENGER: "<<na<<"\tFLIGHT NO: DK059";
   cout<<"\n\tClass: "<<CLASgoa<<"        \t\tDate :"<<date;
   cout<<"\n\tSeat No."<<seatnogoa<<"      \tFrom: Mumbai to "<<arrival;
   cout<<"\n\tGate: F2"<<"           \tBoarding time: 2:15pm";
    cout<<"\n\n\n\t----------------------------------------------------\t\t\n\n";
}
else
{
    cout<<"Thank you for choosing MUMBAI AIRLINE";
    cout<<"Have a Happy Journey!!";
}
   cout<<"\nDo you want to know about the details of the hotel which are near by the airport(within 3 kms)";
    cout<<"\n1.Yes\n2.No\nEnter your choice: ";
    cin>>hotel_choice;
    if(hotel_choice==1)
    {
        file.open("goahotel.txt");
    if(!file)
    {
        SetColor(44);
            Beep(500, 500);
        cout<<"File not found!"<<endl;
        return 0;
    }
    else
    {
                while(!file.eof())
        {
            getline(file,content);
            cout<<content<<endl;
        }
    }
    }
    else
    {
        cout<<"\nEnjoy your time in Goa";
    }
}
};
 class chennai:public dates
 {
     public:
         ifstream file;
    string content;
    int hotel_choice;
     string arrival="CHENNAI";
     string departure="MUMBAI";
     string fch;
     int res;
     string na;
     int bagage,fd;
     int age;
     string gender;
     int passno;
    string seatnoch;
    int seatlocch;
    float seatpch;
    int t_class;
     string CLASch;
public:
int ticketing()
{
    cout<<"\n--PLEASE ENTER YOUR NAME--:"<<endl;
        fflush(stdin);
        getline(cin,na);
        cout<<"--PLEASE ENTER NO. OF BAGS--"<<endl;
        cin>>bagage;
        cout<<"PLEASE ENTER AGE--"<<endl;
        cin>>age;
        cout<<"--PLEASE ENTER YOUR PASSPORT NUMBER--"<<endl;
        cin>>passno;
        cout<<"--PLEASE ENTER GENDER(M/F/Other)--"<<endl;
        cin>>gender;
        cout<<"--ENTER YOUR FOOD PREFERENCE 1.VEG 2.NON-VEG 3.VEGAN--"<<endl;
        cin>>fd;
              if(fd==1)
              {
                  cout<<"****VEG******"<<endl;
                  fch="VEG";
              }
              else if(fd==2)
              {
                  cout<<"****NON-VEG*****"<<endl;
                  fch="NON-VEG";
              }
              else
              {
                  cout<<"******VEGAN*****"<<endl;
                  fch="VEGAN";
              }
          dates::calendar();
    cout<<"1.BUSINESS\n2.ECONOMY:\n";
    cin>>t_class;
    if(t_class == 1)
    {
        CLASch="BUSINESS";
        cout<<"-----BUSINESS CLASS-----"<<endl;
        cout<<"Business class seats available are: A11  B11  C12  B12  C11  D11"<<endl;
        cout<<"Enter seat no :"<<endl;
        fflush(stdin);
        getline(cin,seatnoch);
        if(seatnoch=="A11" ||seatnoch== "B11" ||seatnoch== "C12" || seatnoch=="B12" ||seatnoch== "C11" ||seatnoch== "D11")
        {
        seatpch=6000;

        }
        else
        {
            SetColor(44);
            Beep(500, 500);
        cout<<"Seat not available !"<<endl;
        }
    }
    else
    {
        cout<<"-----ECONOMY CLASS-----"<<endl;
        cout<<"choose seat location";
        cout<<"1.Aisle\n 2.Window\n 3.Center\n"<<endl;
        cin>>seatlocch;
        if(seatlocch == 1)
        {
            CLASch="ECONOMY";
            cout<<"Availabe seats are: A9 B9 A10 B10 "<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnoch;
            if( seatnoch == "A9" ||seatnoch == "B9" || seatnoch == "A10" || seatnoch == "B10")
            {
            seatpch=4200;
            }
            else
            {
                SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocch == 2)
        {
            cout<<"Availabe seats are: X7 Y7 X8 Y8"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnoch;
            if( seatnoch == "X7" || seatnoch == "Y7" || seatnoch == "X8" || seatnoch == "Y8" )
            {
            seatpch=4000;
            }
            else
            {
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlocch == 3)
        {
            cout<<"Availabe seats are: X9 Y9 X10 Y10"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnoch;
            if( seatnoch == "X9" ||seatnoch== "Y9" ||seatnoch== "X10" ||seatnoch== "Y10" )
            {
            seatpch=4160;
            }
            else
            {
            cout<<"Seat not available!"<<endl;
            }
        }
        else
        {   SetColor(44);
            Beep(500, 500);
            cout<<"INVALID CHOICE!!"<<endl;
        }
    }
    cout<<"*                THIS IS YOUR BOOKING RECEIPT:  \n\n\n  *"<<endl;
cout<<"*                          NAME:                                    *"<<na<<endl;
cout<<"*                          GENDER:                                  *"<<gender<<endl;
cout<<"*                          PASSPORT NO:                             *"<<passno<<endl;
cout<<"*                          TOTAL NUMBER OF BAGAGE:                  *"<<bagage<<endl;
cout<<"*                          SEAT NUMBER:                             *"<<seatnoch<<endl;
cout<<"*                          CLASS:                                   *"<<CLASch<<endl;
cout<<"*                          FOOD OPTION:                             *"<<fch<<endl;
cout<<"*                          FLYING FROM:                             *"<<departure<<"FLYING TO:"<<arrival<<endl;
time_t t;
time (&t);
cout<<"*                         BOOKING DATE AND TIME:                    *"<<asctime(localtime(&t))<<endl;
if(age>=55||age<=2)
{
seatpch=(seatpch*20)/100;
}
cout<<"*                          TOTAL PRICE :                            *"<<seatpch<<endl;
cout<<"Do you need a Web-Check in:";
cout<<"Press 1.Yes 2.No:";
cin>>wch;
if(wch==1)
{
   cout<<"\n\n\n\t----------------------Boarding Pass----------------\t\t\n\n";
   cout<<"\tNAME OF PASSENGER: "<<na<<"\tFLIGHT NO: DK066";
   cout<<"\n\tClass: "<<CLASch<<"        \t\tDate :"<<date;
   cout<<"\n\tSeat No."<<seatnoch<<"      \tFrom: Mumbai to "<<arrival;
   cout<<"\n\tGate: R2"<<"           \tBoarding time: 4:15 pm";
    cout<<"\n\n\n\t----------------------------------------------------\t\t\n\n";
}
else
{
    cout<<"Thank you for choosing MUMBAI AIRLINE";
    cout<<"Have a Happy Journey!!";

}
   cout<<"\nDo you want to know about the details of the hotel which are near by the airport(within 3 kms)";
    cout<<"\n1.Yes\n2.No\nEnter your choice: ";
    cin>>hotel_choice;
    if(hotel_choice==1)
    {
        file.open("chennaihotel.txt");
    if(!file)
    {
        SetColor(44);
            Beep(500, 500);
        cout<<"File not found!"<<endl;
        return 0;
    }
    else
    {
                while(!file.eof())
        {
            getline(file,content);
            cout<<content<<endl;
        }
    }
    }
    else
    {
        cout<<"\nEnjoy your time in Chennai";
    }
}
 };

 class kolkata:public dates
 {
  public:
           ifstream file;
    string content;
    int hotel_choice;
     string arrival="CHENNAI";
     string departure="MUMBAI";
     string fch;
     int res;
     string na;
     int bagage,fd;
     int age;
     string gender;
     int passno;
    string seatnokol;
    int seatlockol;
    float seatpkol;
    int t_class;
     string CLASkol;
public:
int ticketing()
{
    cout<<"--PLEASE ENTER YOUR NAME--:"<<endl;
        fflush(stdin);
        getline(cin,na);
        cout<<"--PLEASE ENTER NO. OF BAGS--"<<endl;
        cin>>bagage;
        cout<<"PLEASE ENTER AGE--"<<endl;
        cin>>age;
        cout<<"--PLEASE ENTER YOUR PASSPORT NUMBER--"<<endl;
        cin>>passno;
        cout<<"--PLEASE ENTER GENDER(M/F/Other)--"<<endl;
        cin>>gender;
        cout<<"--ENTER YOUR FOOD PREFERENCE 1.VEG 2.NON-VEG 3.VEGAN--"<<endl;
        cin>>fd;
              if(fd==1)
              {
                  cout<<"****VEG******"<<endl;
                  fch="VEG";
              }
              else if(fd==2)
              {
                  cout<<"****NON-VEG*****"<<endl;
                  fch="NON-VEG";
              }
              else
              {
                  cout<<"******VEGAN*****"<<endl;
                  fch="VEGAN";
              }
dates::calendar();
    cout<<"1.BUSINESS\n2.ECONOMY:\n";
    cin>>t_class;
    if(t_class == 1)
    {
        CLASkol="BUSINESS";
        cout<<"-----BUSINESS CLASS-----"<<endl;
        cout<<"Business class seats available are: A1  B1  C1  B2  C2  D2"<<endl;
        cout<<"Enter seat no :"<<endl;
        fflush(stdin);
        getline(cin,seatnokol);
        if(seatnokol=="A1" ||seatnokol== "B1" ||seatnokol== "C1" || seatnokol=="B2" ||seatnokol== "C2" ||seatnokol== "D2")
        {
        seatpkol=9000;

        }
        else
        {
        SetColor(44);
            Beep(500, 500);
        cout<<"Seat not available !"<<endl;
        }
    }
    else
    {
        CLASkol="ECONOMY";
        cout<<"-----ECONOMY CLASS-----"<<endl;
        cout<<"choose seat location";
        cout<<"1.Aisle\n 2.Window\n 3.Center\n"<<endl;
        cin>>seatlockol;
        if(seatlockol == 1)
        {
            cout<<"Availabe seats are: E1 F1 G1 H1 "<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnokol;
            if( seatnokol == "E1" ||seatnokol == "F1" || seatnokol == "G1" || seatnokol == "H1")
            {
            seatpkol=7532;

            }
            else
            {
            SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlockol == 2)
        {
            cout<<"Availabe seats are: E3 F3 G3 H3"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnokol;
            if( seatnokol == "E3" || seatnokol == "F3" || seatnokol == "G3" || seatnokol == "H3" )
            {
            seatpkol=7453;

            }
            else
            {
            cout<<"Seat not available!"<<endl;
            }
        }
        else if(seatlockol == 3)
        {
            cout<<"Availabe seats are: E2 F2 G2 H2"<<endl;
            cout<<"Enter your seat:"<<endl;
            cin>>seatnokol;
            if( seatnokol == "E2" ||seatnokol== "F2" ||seatnokol== "G2" ||seatnokol== "H2" )
            {
            seatpkol=7600;
            }
            else
            {
            SetColor(44);
            Beep(500, 500);
            cout<<"Seat not available!"<<endl;
            }
        }
        else
        {
            SetColor(44);
            Beep(500, 500);
            cout<<"INVALID CHOICE!!"<<endl;
        }
    }
    cout<<"*                THIS IS YOUR BOOKING RECEIPT:  \n\n\n  *"<<endl;
cout<<"*                          NAME:                                      *"<<na<<endl;
cout<<"*                          GENDER:                                    *"<<gender<<endl;
cout<<"*                          PASSPORT NO:                               *"<<passno<<endl;
cout<<"*                          TOTAL NUMBER OF BAGAGE:                    *"<<bagage<<endl;
cout<<"*                          SEAT NUMBER:                               *"<<seatnokol<<endl;
cout<<"*                          CLASS:                                     *"<<CLASkol<<endl;
cout<<"*                          FOOD OPTION:                               *"<<fch<<endl;
cout<<"*                          FLYING FROM:                               *"<<departure<<"FLYING TO:"<<arrival<<endl;
time_t t;
time (&t);
cout<<"*                         BOOKING DATE AND TIME:                      *"<<asctime(localtime(&t))<<endl;
if(age>=55||age<=2)
{
seatpkol=(seatpkol*20)/100;
}
cout<<"*                          TOTAL PRICE :                              *"<<seatpkol<<endl;
cout<<"\nWould you like to have a Web-Checkin:";
cout<<"\nPress 1.for YES 2. NO:";
cin>>wch;
if(wch==1)
{
   cout<<"\n\n\n\t----------------------Boarding Pass----------------\t\t\n\n";
   cout<<"\tNAME OF PASSENGER: "<<na<<"\tFLIGHT NO: DK047";
   cout<<"\n\tClass: "<<CLASkol<<"        \t\tDate :"<<date;
   cout<<"\n\tSeat No."<<seatnokol<<"      \tFrom: Mumbai to "<<arrival;
   cout<<"\n\tGate: D2"<<"           \tBoarding time: 06:15 am";
    cout<<"\n\n\n\t----------------------------------------------------\t\t\n\n";
}
else
{
    cout<<"Thank you for choosing MUMBAI AIRLINE";
    cout<<"Have a Happy Journey!!";
}
   cout<<"\nDo you want to know about the details of the hotel which are near by the airport(within 3 kms)";
    cout<<"\n1.Yes\n2.No\nEnter your choice: ";
    cin>>hotel_choice;
    if(hotel_choice==1)
    {
        file.open("kolkatahotel.txt");
    if(!file)
    {
        SetColor(44);
            Beep(500, 500);
        cout<<"File not found!"<<endl;
        return 0;
    }
    else
    {
                while(!file.eof())
        {
            getline(file,content);
            cout<<content<<endl;
        }
    }
    }
    else
    {
        cout<<"\nEnjoy your time in Kolkata";
    }
}
 };

class book_flight:public JFK,public changi,public chennai,public dubai,public london,public kolkata,public beijing,public goa,public delhi,public vishakapatnam
{
public:
    int chois;
    int choice;
    int ch;
    int choice1;//for choosing the country for international
    string arrival;
    string  departure;
public:
    void menu()
    {
       cout<<"1.International flights\n2.Domestic Flights from Chhatrapati Shivaji Maharaj International Airport\nPlease select: ";
       cin>>ch;
       switch(ch)
       {
   case 1:
    {
    cout<<"\n";
    cout<<"----------------------------------PRESS 1 FOR MUMBAI TO JFK(USA)----------------------------------------------\n";
    cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to JFK from 1:00Pm to 5:00am\n";
    cout<<"\n";
    cout<<"----------------------------------PRESS 2 FOR MUMBAI TO CHANGI(SINGAPORE)---------------------------------------\n";
    cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Changi Airport from 12:00Am to 7:00Am\n";
    cout<<"\n";
    cout<<"----------------------------------PRESS 3 FOR MUMBAI TO BEIJING,CHINA--------------------------------------------\n";
    cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Beijing Capital International Airport from 5:00pm to 4:30Pm\n";
    cout<<"\n";
    cout<<"----------------------------------PRESS 4 FOR MUMBAI TO DUBAI,UAE---------------------------------------------\n";
    cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Dubai International Airport from 5:00Pm to 8:00Pm\n";
    cout<<"\n";
    cout<<"----------------------------------PRESS 5 FOR MUMBAI TO HEATHROW,LONDON------------------------------------------\n";
    cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to London Heathrow Airport from 7:00Am to 4:30Am\n";
    cout<<"\n";
    cout<<"---\tENTER DESTINATION NUMBER--:"<<endl;
    cin>>choice1;

    if(choice1==1)
    {
        cout<<"Destination selected is New York(JFK Airport)\n";
        cout<<"These are the following flight details:\n";
        cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to JFK Airport from 1:00Pm to 5:00am\n";
        cout<<"Distance is 12535.73km\n";
        cout<<"Total duration of the flight is 16 hrs\n";
        JFK::ticketing();
    }
    else if(choice1==2)
    {
        cout<<"Destination selected is Singapore(Changi Airport)\n";
        cout<<"These are the following flight details:\n";
        cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Changi Airport from 12:00Am to 7:00Am\n";
        cout<<"Distance is 3920km\n";
        cout<<"Total duration of the flight is 7 hrs\n";
        changi::ticketing();
    }
    else if(choice1==3)
    {
        cout<<"Destination selected is Beijing(Beijing Capital International Airport)";
        cout<<"These are the following flight details:\n";
        cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Beijing Capital International Airport from 5:00pm to 4:30Pm\n";
        cout<<"Distance is 4768km\n";
        cout<<"Total duration of the flight is 23 hrs 30 mins";
        beijing::ticketing();
    }
    else if(choice1==4)
    {
        cout<<"Destination selected is Dubai(Dubai International Airport)";
        cout<<"These are the following flight details:\n";
        cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Dubai International Airport from 5:00Pm to 8:00Pm\n";
        cout<<"Distance is 1941km\n";
        cout<<"Total duration of the flight is 3 hrs";
        dubai::ticketing();
    }
    else if(choice1==5)
    {
        cout<<"Destination selected is London(London Heathrow Airport)";
        cout<<"These are the following flight details:\n";
        cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to London Heathrow Airport from 7:00Am to 4:30Am\n";
        cout<<"Distance is 7196.99km\n";
        cout<<"Total duration of the flight is 9 hrs 30mins";
        london::ticketing();
    }
    else
    { SetColor(44);
            Beep(500, 500);
        cout<<"Please choose a correct option";
    }
    break;
    }
   case 2:
    {
        cout<<"----------------------------------PRESS 1 FOR MUMBAI TO DELHI NCR-----------------------------------------\n";
        cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Delhi from 1:00Pm to 3:00Pm\n";
        cout<<"\n";
        cout<<"----------------------------------PRESS 2 FOR MUMBAI TO VISHAKAPATNAM--------------------------------------\n";
        cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Vishakapatnam from 12:00Am to 1:30Am\n";
        cout<<"\n";
        cout<<"----------------------------------PRESS 3 FOR MUMBAI TO GOA------------------------------------------------\n";
        cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Goa from 3:00pm to 4:00Pm\n";
        cout<<"\n";
        cout<<"----------------------------------PRESS 4 FOR MUMBAI TO CHENNAI---------------------------------------------\n";
        cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Chennai from 5:00Pm to 6:30Pm\n";
        cout<<"\n";
        cout<<"----------------------------------PRESS 5 FOR MUMBAI TO KOLKATA------------------------------------------\n";
        cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Kolkata from 7:00Am to 8:30Am\n";
        cout<<"\n";
        cout<<"--\tENTER DESTINATION NUMBER--:"<<endl;
        cin>>chois;
        if(chois==1)
    {
        cout<<"Destination selected is Delhi ";
        cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Delhi from 1:00Pm to 3:00Pm\n";
        cout<<"Distance is 1400km\n";
        cout<<"Total duration of the flight is 2 hrs";
        cout<<"\n\n";
        delhi::ticketing();
    }
    else if(chois==2)
    {
        cout<<"Destination selected is Vishakapatnam";
       cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Vishakapatnam from 12:00Am to 1:30Am\n";
        cout<<"Distance is 1100km\n";
        cout<<"Total duration of the flight is 1.5 hrs";
        cout<<"\n\n";
        vishakapatnam::ticketing();
    }
    else if(chois==3)
    {
        cout<<"Destination selected is Goa";
        cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Goa from 3:00pm to 4:00Pm\n";
        cout<<"Distance is 586km\n";
        cout<<"Total duration of the flight is 1 hrs";
        cout<<"\n\n";
        goa::ticketing();
    }
    else if(chois==4)
    {
        cout<<"Destination selected is Chennai";
        cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Chennai from 5:00Pm to 6:30Pm\n";
        cout<<"Distance is 1000km\n";
        cout<<"Total duration of the flight is 1.5 hrs";
        cout<<"\n\n";
        chennai::ticketing();
    }
    else if(chois==5)
    {
        cout<<"Destination selected is Kolkata";
         cout<<"Flight is from Mumbai(Chhatrapati Shivaji Maharaj International Airport) to Kolkata from 7:00Am to 8:30Am\n";
        cout<<"Distance is 1600km\n";
        cout<<"Total duration of the flight is 1.5 hrs";
        cout<<"\n\n";
        kolkata::ticketing();
    }
    else
    {       SetColor(44);
            Beep(500, 500);
        cout<<"Please choose a correct option";
    }
        break;
    }
   default:
       SetColor(44);
            Beep(500, 500);
    cout<<"Please enter a valid option";
    }

}};
class flight_status
{
public:
    int option;
    public:
    void status()
    {
    cout<<"\nWelcome!\n";
    cout<<"To check status for International flights press 1 for domestic press 2:";
    cin>>option;
    switch(option)
{
case 1:
    {
        cout<<"\n\n";
        cout<<"\t\t Flight no.\t\t\t\tDeparture \t\t\t\t Arrival \t\t\t\t Status \t\t\t\t Time\t\t\n ";
        cout<<"-------------------------------------------------------------------------------------------------------------------------------";
        cout<<"------------------------------------------------------------\n";
        cout<<"\t\t EK051     \t\t\t\tMumbai    \t\t\t\t JFK     \t\t\t\t BOARDING\t\t\t\t 13:00 pm\t\t\n";
         cout<<"\t\t EK056     \t\t\t\tMumbai    \t\t\t\t CHANGI \t\t\t\t DELAYED\t\t\t\t  14:00 pm\t\t\n";
          cout<<"\t\t EK059     \t\t\t\tMumbai    \t\t\t\t BEIJING \t\t\t\tON TIME\t\t\t\t\t17:00 pm\t\t\n";
           cout<<"\t\t EK066     \t\t\t\tMumbai    \t\t\t\t DUBAI \t\t\t\t\tON TIME\t\t\t\t\t17:00 pm\t\t\n";
            cout<<"\t\t EK047     \t\t\t\tMumbai    \t\t\t\t LONDON \t\t\t\tBOARDING\t\t\t\t7:00 pm\t\t\n";

    }
    break;
case 2:
    {
        cout<<"\n\n";
        cout<<"\t\t Flight no.\t\t\t\tDeparture \t\t\tArrival \t\t\t\t Status \t\t\tTime\t\t\n ";
        cout<<"-------------------------------------------------------------------------------------------------------------------------------";
        cout<<"------------------------------------------------------------\n";
        cout<<"\t\t DK051\t\t\t\tMumbai  \t\t\t\t DELHI     \t\t\t\tBOARDING\t\t\t13:00 pm\t\t\n";
        cout<<"\t\t DK056\t\t\t\tMumbai  \t\t\t\t VISHAKAPATNAM \t\t\t\tDELAYED\t\t\t\t14:00 pm\t\t\n";
        cout<<"\t\t DK059\t\t\t\tMumbai  \t\t\t\t GOA           \t\t\t\tON TIME\t\t\t\t15:00 pm\t\t\n";
        cout<<"\t\t DK066\t\t\t\tMumbai  \t\t\t\t CHENNAI \t\t\t\tON TIME\t\t\t\t17:00 pm\t\t\n";
        cout<<"\t\t DK047\t\t\t\tMumbai  \t\t\t\t KOLKATA \t\t\t\tBOARDING\t\t\t07:00 am\t\t\n";

    }
    break;
default:
    SetColor(44);
            Beep(500, 500);
    cout<<"No flights !!";

}
    }
};
int main()
{

     book_flight *bf;
     book_flight a;
     bf= &a;
     flight_status *fs;
     flight_status b;
     fs=&b;
     int choice;
    cout<<"\n\n";
    cout<<"\n\n";
     do
     {
    SetColor(3);
    cout<<"\n                        Welcome to MUMBAI AIRLINES                                \n";
    cout<<"                          Air Ticket Booking\n";
    cout<<"||===============================================================================||\n";
    cout<<"||                 1- To book a flight ticket                                    ||\n";
    cout<<"||                 2- To check flight status                                     ||\n";
    cout<<"||                 3- Exit system                                                ||\n";
    cout<<"||===============================================================================||\n";
    cout<<"  Enter your choice(1/2/3): ";
    cin>>choice;
    switch(choice)
    {
       case 1: bf->menu();
                   break;
       case 2: fs->status();
                   break;
       case 3: exit(0);
                    cout<<"You've exited the menu. Thank you!"<<endl;
                    break;

        default:
            SetColor(44);
            Beep(500, 500);
            cout<<"INVALID CHOICE! TRY AGAIN"<<endl;
    }

     }
while(choice!=3);

return 0;
}
void SetColor(int ForgC)
{
     WORD wColor;
     //This handle is needed to get the current background attribute

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
