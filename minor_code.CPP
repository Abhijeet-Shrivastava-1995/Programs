#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<process.h>
#include<fstream.h>
#include<string.h>

union REGS in,out;
void college_logo();
void hotel_logo();

class hotel
{
	char date[15],identity[20],name[40],address[50],payment_method[10],bloodgroup[3],room_type[5],occ[10];
	int stay,roomno;
	float phone_number;
	public:
	float bill;
	hotel()
	{
		bill=0;
		stay=0;
		roomno=0;
	}
	//function declerations which are to be used in the whole program
	void welcome();
	void cust_info();//information filling of the details of the customer
	void show_info(int);
	char checkout(int);
	int addservice(int);
	void generate_bill(int);
} ;



int callmouse()
{
      in.x.ax=1;
      int86(51,&in,&out);
      return 1;
}
void mouseposi(int &xpos,int &ypos,int &click)
{
      in.x.ax=3;
      int86(51,&in,&out);
      click=out.x.bx;
      xpos=out.x.cx;
      ypos=out.x.dx;
}

void setposi(int &xpos,int &ypos)
{
     in.x.ax=4;
     in.x.cx=xpos;
     in.x.dx=ypos;
     int86(51,&in,&out);
}

void hotel::cust_info()
{
	textmode(C80);
	gotoxy(17,8);gets(name);
	gotoxy(16,10);gets(address);
	gotoxy(18,12);gets(occ);
	gotoxy(23,14);gets(identity);
	gotoxy(50,6);cin>>stay;
	gotoxy(61,8);gets(room_type);
	gotoxy(59,10);cin>>phone_number;
	gotoxy(61,12);gets(payment_method);
	gotoxy(59,14);gets(bloodgroup);
	gotoxy(25,17);cin>>roomno;
	gotoxy(53,18);cin>>date;
}
void hotel::show_info(int row)
{
       bill=1000*stay;

       gotoxy(6,row);cout<<roomno;gotoxy(14,row);cout<<name;gotoxy(38,row);cout<<stay;
       gotoxy(45,row);cout<<payment_method;gotoxy(55,row);cout<<date;gotoxy(68,row);cout<<bill;

}
char hotel::checkout(int r)
{
	char ch;
		if(roomno==r)
		{
			clrscr();
			cout<<"\n Name: "<<name;
			cout<<"\n\n Do you want to delete this record(y/n): ";
			cin>>ch;
		}

	return ch;
}

int hotel::addservice(int room)
{
	ifstream fin("hotel.dat",ios::in);
	fin.read((char*)this,sizeof(hotel));
	while(!fin.eof())
	{

	if(roomno==room)
	return 1;
	}

}

void hotel::generate_bill(int room)
{
	ifstream fin("hotel.dat",ios::in);
	while(!fin.eof())
	{
		fin.read((char*)this,sizeof(hotel));
		if(roomno==room)
		{
			clrscr();textmode(C80);
			cout<<"\n\n\n\t**********************";
			cout<<"\n\tHOTEL OAK TREE";
			cout<<"\n\t**********************";
			cout<<"\n\tCUSTOMER'S BILL";
			cout<<"\n\t____________________";
			cout<<"\n\tName-"<<name;
			cout<<"\n\tRoom No.-"<<room;
			cout<<"\n\tStay-"<<stay;
			cout<<"\n\tRoom Type-"<<room_type;
			cout<<"\n\tPayment Method-"<<payment_method;
			cout<<"\n\tBill-"<<bill;
			cout<<"\n\t____________________";
			cout<<"\n\tWe hope you had a happy stay!!!";
			cout<<"\n\t************************";
			cout<<"\n\tDo visit again";
			cout<<"\n\t*******************************";
		}

	}
}

void college_logo()
{
	setcolor(RED);
	settextstyle(4,0,4);
	outtextxy(45,10,"Gyan Ganga Institute of Technology and");
	outtextxy(265,35,"Sciences");
	outtextxy(215,440,"JABALPUR");
	setbkcolor(WHITE);
	setcolor(BROWN);
	circle(300,220,80);  //inner circle of the logo
	circle(300,220,120); //outer circle of the logo
	setfillstyle(2,3);
	floodfill(300,220,BROWN);
	//here onwards the offset of each of the extensions from the circle
	//starting from the left bottom round the circle to the right bottom
	//excluding the area of the arc
	line(315,370,304,340);
	line(355,360,340,332);
	setfillstyle(3,YELLOW);
	line(315,370,355,360);
	settextstyle(1,0,3);
	outtextxy(242,300,"JABALPUR");
	//first offset
	line(235,360,254,330);
	line(279,370,288,340);
	line(235,360,279,370);
	//second offset
	line(155,270,184,255);
	line(169,300,198,283);
	line(155,270,169,300);
	//third offset
	line(150,190,180,195);
	line(145,230,180,223);
	line(150,190,145,230);
	//fourth offset
	line(160,165,190,175);
	line(180,130,205,148);
	line(160,165,180,130);
	//fifth offset
	line(200,105,224,125);
	line(230,87,248,110);
	line(200,105,230,87);
	//sixth offset
	line(265,75,275,100);
	line(301,70,305,100);
	line(265,75,301,70);
	//seventh offset
	line(340,75,335,105);
	line(380,90,365,120);
	line(340,75,380,90);
	//eighth offset
	line(409,110,385,135);
	line(439,137,405,158);
	line(409,110,439,137);
	//ninth offset
	line(460,180,417,190);
	line(459,230,419,230);
	line(460,180,459,230);
	//tenth offset
	line(450,265,412,260);
	line(440,305,402,280);
	line(450,265,440,305);

	/*from here the leaf patterns start for the logo*/
	 setfillstyle(1,YELLOW);
	fillellipse(300,400,60,40);
	setcolor(GREEN);
	setfillstyle(6,GREEN);
	//leaves for the left hand side
	fillellipse(200,400,45,15);
	fillellipse(170,380,44,14);
	fillellipse(150,355,43,13);
	fillellipse(120,330,42,12);
	fillellipse(100,310,40,10);
	fillellipse(95,290,38,10);
	fillellipse(85,270,36,10);
	fillellipse(75,250,34,10);
	fillellipse(65,230,32,10);
	//leaves for the right hand side
	fillellipse(400,400,45,15);
	fillellipse(430,380,44,14);
	fillellipse(460,357,43,13);
	fillellipse(490,337,42,12);
	fillellipse(510,315,40,10);
	fillellipse(515,295,38,10);
		fillellipse(525,274,36,10);
	fillellipse(535,255,34,10);
	fillellipse(545,234,32,10);
	setcolor(BLUE);
	settextstyle(1,0,2);
	/* from here the letters inside the logo gets inside the circle */
	//word gyan
	outtextxy(210,280,"G");
	outtextxy(202,270,"y");
	outtextxy(198,260,"a");
	outtextxy(190,250,"n");
	//word ganga
	outtextxy(185,233,"G");
	outtextxy(185,218,"a");
	outtextxy(182,208,"n");
	outtextxy(182,195,"g");
	outtextxy(183,185,"a");
	//word institute
	outtextxy(192,170,"I");
	outtextxy(192,154,"n");
	outtextxy(198,144,"s");
	outtextxy(205,135,"t");
	outtextxy(215,125,"i");
	outtextxy(223,120,"t");
	outtextxy(229,115,"u");
	outtextxy(241,109,"t");
	outtextxy(250,105,"e");
	//word of
	outtextxy(270,95,"o");
	outtextxy(280,95,"f");
	//word technology
	outtextxy(300,95,"T");
	outtextxy(310,95,"e");
	outtextxy(320,95,"c");
	outtextxy(328,100,"h");
	outtextxy(340,105,"n");
	outtextxy(352,108,"o");
	outtextxy(360,114,"l");
	outtextxy(366,119,"o");
	outtextxy(372,125,"g");
	outtextxy(380,130,"y");
	//word and
	outtextxy(392,150,"a");
	outtextxy(394,162,"n");
	outtextxy(400,175,"d");
	//word sciences
	outtextxy(408,195,"S");
	outtextxy(410,205,"c");
	outtextxy(410,217,"i");
	outtextxy(405,227,"e");
	outtextxy(400,237,"n");
	outtextxy(398,247,"c");
	outtextxy(394,257,"e");
	outtextxy(390,267,"s");

	/* here are the letters which comes inside the yellow eclipse bubble*/
	setcolor(BLUE);
	settextstyle(1,0,7);
	outtextxy(250,360,"G");
	settextstyle(1,0,3);
	outtextxy(260,380,"G");
	settextstyle(1,0,9);
	outtextxy(280,340,"T");
	settextstyle(1,0,7);
	outtextxy(320,360,"S");
	setcolor(RED);
	settextstyle(1,0,7);
	outtextxy(295,360,"i");

	getch();closegraph();
}

void hotel_logo()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	setbkcolor(BLUE);
	circle(320,220,150);
	circle(320,220,100);
	floodfill(325,100,WHITE);
	setcolor(GREEN);
	setfillstyle(2,WHITE);
	fillellipse(320,200,80,30);
	setcolor(BROWN);
	setfillstyle(2,WHITE);
	fillellipse(320,270,10,50);
	setcolor(WHITE);
	settextstyle(5,0,5);
	outtextxy(170,10,"Welcomes You In");
	settextstyle(4,0,7);
	outtextxy(25,400,"HOTEL OAK TREE");
	getch();closegraph();
}



void main()
{
	clrscr();
	textmode(C80);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	college_logo();
	hotel_logo();
	top:
	clrscr();initgraph(&gd,&gm,"");
	int i;
	int x,y,cl,a,b;
	hotel obj;
	fstream f;
	settextstyle(1,0,1);
	for(i=0;i<=650;i=i+10)
	outtextxy(i,15,"*");
	setcolor(RED);
	settextstyle(3,0,5);
	outtextxy(220,20,"MAIN MENU");
	settextstyle(1,0,1);
	setcolor(WHITE);
	for(i=0;i<=650;i=i+10)
	outtextxy(i,60,"*");
	rectangle(2,80,637,475);
	rectangle(5,82,634,472);
	//menu begins here.....lets try to make some clicks in cpp :D
	setcolor(WHITE);
	rectangle(235,130,410,160);
	setcolor(BROWN);
	outtextxy(240,135,"Room Reservation");
	setcolor(WHITE);
	rectangle(235,190,410,220);
	setcolor(BROWN);
	outtextxy(263,194,"Record Book");
	setcolor(WHITE);
	rectangle(235,245,410,270);
	setcolor(BROWN);
	outtextxy(269,245,"Check Out");
	setcolor(WHITE);
	rectangle(235,295,410,320);
	setcolor(BROWN);
	outtextxy(255,295,"Menu Card");
	setcolor(WHITE);
	rectangle(235,345,410,370);
	setcolor(BROWN);
	outtextxy(290,345,"Bill");
	setcolor(WHITE);
	rectangle(490,445,570,470);
	setcolor(BROWN);
	outtextxy(495,445,"EXIT");
	a=100;
	b=400;
	setposi(a,b);
	callmouse();
	do
	{
	    mouseposi(x,y,cl);
	    gotoxy(10,9);
		for(i=235;i<400;i++)
		{
			for(int j=130;j<=160;j++)
			{
			if(x==i && y==j && cl==1)
			{
			clrscr();textmode(C80);
			for(int i=4;i<=78;i++)
			{
			gotoxy(i,1);cprintf("�");
			gotoxy(i,5 );cprintf("�");
			gotoxy(i,16 );cprintf("�");
			gotoxy(i,22);cprintf("�");
			}

			for(int j=0;j<=22;j++)
			{
				gotoxy(3,j);cprintf("�");
				gotoxy(78,j);cprintf("�");
			}

			for(j=6;j<=15;j++)
			{
				gotoxy(40,j);cprintf("�");
			}
			for(j=17;j<=22;j++)
			{
				gotoxy(45,j);cprintf("�");
			}
			gotoxy(78,22);cprintf(" ");
			gotoxy(79,22);cprintf(" ");
			gotoxy(80,22);cprintf(" ");
			gotoxy(3,1);cprintf("�");
			gotoxy(78,1);cprintf("�");
			gotoxy(78,22);cprintf("�");
			gotoxy(3,22);cprintf("�");
			gotoxy(3,5);cprintf("�");
			gotoxy(78,5);cprintf("�");
			gotoxy(3,16);cprintf("�");
			gotoxy(78,16);cprintf("�");
			gotoxy(40,5);cprintf("�");
			gotoxy(40,16);cprintf("�");
			gotoxy(45,16);cprintf("�");
			gotoxy(45,22);cprintf("�");
			gotoxy(31,2);
			textcolor(RED);
			cprintf("Hotel Oak Tree ");
			textcolor(YELLOW);
			gotoxy(30,3);cprintf("Room Reservation");
			textcolor(GREEN);
			gotoxy(32,4);cprintf("Form filling");
			textcolor(LIGHTGRAY);
			gotoxy(8,6);cprintf("welcome");
			gotoxy(4,8);cprintf("2.Name:-");
			gotoxy(4,10);cprintf("3.Address:-");
			gotoxy(4,12);cprintf("4.Occupation:-");
			gotoxy(4,14);cprintf("5.Identity proof:-");
			gotoxy(42,6);cprintf("6.stay:-");
			gotoxy(42,8);cprintf("7.room preference:-");
			gotoxy(42,10);cprintf("8.Phone Number:-");
			gotoxy(42,12);cprintf("9.Payment Method:-");
			gotoxy(42,14);cprintf("10.Blood Group:-");
			textcolor(CYAN);
			gotoxy(4,17);cprintf("YOUR ROOM NUMBER IS:-");
			gotoxy(4,18);cprintf("=->We wish you a happy stay");
			textcolor(BROWN);gotoxy(17,20);cprintf("THANKING YOU");
			textcolor(RED);
			gotoxy(54,17);cprintf("Check In on");
			gotoxy(47,18);cprintf("date:-");
			f.open("hotel.dat",ios::app|ios::binary);
			obj.cust_info();
			f.write((char*)&obj,sizeof(obj));
			getch();  goto top;
			}
			}
			for(j=190;j<=220;j++)
			{
			if(x==i && y==j && cl==1)
			{
				textmode(C80);
				clrscr();
				initgraph(&gd,&gm,"");
				int row=6;
				setbkcolor(BLUE);
				for(i=0;i<640;i=i+10) outtextxy(i,1,"*");
				 settextstyle(4,0,5);outtextxy(210,8,"Record Room");
				 settextstyle(1,0,1);for(i=0;i<640;i=i+10) outtextxy(i,50,"*");
				 settextstyle(3,0,1);
				 outtextxy(1,60,"Room No.|");outtextxy(100,60,"Name               |");outtextxy(290,60,"Stay|");
				 outtextxy(350,60,"Payment|");outtextxy(430,60,"CheckIN date|");outtextxy(550,60,"Bill");
				 f.open("hotel.dat",ios::in|ios::binary);
				 while(!f.eof())
					{
					 f.read((char*)&obj,sizeof(obj));
					 obj.show_info(row);row++;
					 }
				 f.close();

				 getch();goto top;

			}
			}
			for(j=245;j<=270;j++)
			{
			if(x==i && y==j && cl==1)
			{ initgraph(&gd,&gm,"");    int r;char ch;
				setbkcolor(BLUE);
				for(i=0;i<640;i=i+10) outtextxy(i,1,"*");
				 settextstyle(4,0,5);outtextxy(210,8,"Check Out");
				 settextstyle(1,0,1);for(i=0;i<640;i=i+10) outtextxy(i,50,"*");
				 settextstyle(3,0,1);
				 gotoxy(10,10);cout<<"Enter the room no.-";
				 cin>>r;  int flag;
				ifstream fin("hotel.dat",ios::in);
				ofstream fout("temp.dat",ios::out);
				while(!fin.eof())
				{
					fin.read((char*)&obj,sizeof(obj));
					ch= obj.checkout(r);
				}
				if(ch=='y')
				{fout.write((char*)&obj,sizeof(obj));  flag=1;}
				else
				fout.write((char*)&obj,sizeof(obj));

				fin.close();
				fout.close();
				 if(flag==0)
				cout<<"\n Sorry room no. not found or vacant...!!";
				else
				{
					remove("Record.dat");
					rename("temp.dat","Record.dat");
				}
				 getch();goto top;
				}
				}
			for(j=295;j<=320;j++)
			{
			if(x==i && y==j && cl==1)
			{       clrscr();initgraph(&gd,&gm,"");
				setbkcolor(LIGHTGRAY);    setcolor(DARKGRAY);
				for(i=0;i<640;i=i+10) outtextxy(i,1,"*");
				 settextstyle(4,0,5);outtextxy(210,8,"Room Services");
				 settextstyle(1,0,1);for(i=0;i<640;i=i+10) outtextxy(i,50,"*");
				 settextstyle(3,0,1);setcolor(RED);
				 outtextxy(10,65,"Welcome to the hotel OakTree room services. Just go through the ");
				 outtextxy(10,80,"menu and check the rates listed beside each item.");
				 outtextxy(150,100,"Have a happy ordering");
				 setcolor(BROWN);
				 outtextxy(10,120,"Tea");outtextxy(410,120,"Rs. 10 ");
				 outtextxy(10,140,"Coffee");outtextxy(410,140,"Rs. 10");
				 outtextxy(10,160,"Juice");outtextxy(410,160,"Rs 25");
				 outtextxy(10,180,"Cold Drink");outtextxy(410,180,"MRP");
				 outtextxy(10,200,"Sandwich");outtextxy(410,200,"Rs. 20");
				 outtextxy(10,220,"Omelet");outtextxy(410,220,"Rs.25");
				 outtextxy(10,240,"Donuts");outtextxy(410,240,"Rs. 30");
				  outtextxy(10,300,"Dal Fry");outtextxy(410,300,"Rs. 65");
				 outtextxy(10,320,"Veg Curry");outtextxy(410,320,"Rs 100");
				 outtextxy(10,340,"Paneer Masala");outtextxy(410,340,"Rs. 80");
				 outtextxy(10,360,"Navratan Korma");outtextxy(410,360,"Rs. 80");
				 outtextxy(10,380,"Butter Nan");outtextxy(410,380,"Rs. 10");
				 outtextxy(10,400,"Fried Rice");outtextxy(410,400,"Rs 65");
				 setcolor(BLUE);
				 outtextxy(200,425,"Press enter to build your Order!");
				 getch();
				 clrscr();initgraph(&gd,&gm,"");
				 setbkcolor(DARKGRAY);
				 gotoxy(10,5);cout<<"Enter your room no:-";
				 int r,item_no[13],count;
				 int bill=0;
				 cin>>r;
				 gotoxy(10,6);cout<<"Enter how many items would you like to have-";cin>>count;
				 gotoxy(10,7);cout<<"Enter the number specific to your desired item-";
				 for(i=0;i<count;i++)
				 {     cout<<"\nEnter the number for item-"<<i;
				       cin>>item_no[i];
				       if(item_no[i]==1) bill=bill+10;
				       else if(item_no[i]==2) bill=bill+10;
					else if(item_no[i]==3) bill=bill+25;
					else if(item_no[i]==4) bill=bill+15;
					else if(item_no[i]==5) bill=bill+20;
					else if(item_no[i]==6) bill=bill+25;
					else if(item_no[i]==7) bill=bill+30;
					else if(item_no[i]==8) bill=bill+65;
					else if(item_no[i]==9) bill=bill+100;
					else if(item_no[i]==10) bill=bill+80;
					 else if(item_no[i]==11) bill=bill+80;
					 else if(item_no[i]==12) bill=bill+10;
					  else if(item_no[i]==13) bill=bill+65;
				 }
				 cout<<"\n\n\tYour total bill is of Rs.-"<<bill;
				 int found;
				 f.open("recor.dat",ios::in|ios::app|ios::binary);
				 while(!f.eof())
				 {
					f.read((char*)&obj,sizeof(obj));
					found=obj.addservice(r);
					if(found==1) {obj.bill=obj.bill+bill;gotoxy(20,15);cout<<"Bill added";}else
					{gotoxy(20,15);cout<<"Bill not added";}
				 }
					f.close();
					getch();goto top;
				}
			}
			for(j=345;j<=410;j++)
			{
			if(x==i && y==j && cl==1)
			{
				clrscr();initgraph(&gd,&gm,"");
				setbkcolor(RED);
				for(i=0;i<640;i=i+10) outtextxy(i,1,"*");
				 settextstyle(4,0,5);outtextxy(210,8,"Billing");
				 settextstyle(1,0,1);for(i=0;i<640;i=i+10) outtextxy(i,50,"*");
				 settextstyle(3,0,1);
				 outtextxy(20,80,"Thanks for staying in our hotel.We hope you had a happy stay!");
				 gotoxy(10,8);cout<<"Enter room no. to generate bill-";int r;cin>>r;
				 outtextxy(20,150,"Your bill will be generated shortly"); sleep(2);
				obj.generate_bill(r);
				getch();
				  goto top;
			}
			}
		}
		for(i=490;i<=550;i++)
		{
			for(int j=445;j<=470;j++)
			{
			if(x==i && y==j && cl==1)
			{
			exit(0);
			}

			}


		}
	     }while(!kbhit());
	getch();
}
