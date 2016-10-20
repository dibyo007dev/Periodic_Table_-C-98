// Project ......
	 // Periodic Table Data Display ..

/* Structure of class ;;
	  Data Members :
		int atno  -- For Atomic Number
		char name -- Element name
		char symbol -- For Symbol
		float atmas -- For Atomic Mass
		float atrad -- For Atomic Radii
		char block -- For Block Identification

	  Member Functions :
		 display();
		 displaytable();
		 page();
													  */


/* Program used to tally the atomic number ( Location ) with the binary file "propinfo.dat"
	and display the properties from the same .... */



#include<iostream.h>
 #include<conio.h>
 #include<stdio.h>
 #include<fstream.h>
 #include<stdlib.h>
 #include<ctype.h>


 class periodic_table
	{
		int atno;
		float atmas;
		float atrad;
		char name[20];
		char symbol[6];
		char block;

	 public:

		void display()
		  {  clrscr();
			 cout<<"\n\n\n\t\t\t\t PROPERTIES :-";

			 cout<<"\n\n\t\t Atomic Number : "<<atno;

			 cout<<endl;
			 cout<<"\t\t Name of the ELEMENT : "<<name;

			 cout<<endl;
			 cout<<"\t\t Element SYMBOL : "<<symbol;

			 cout<<endl;
			 cout<<"\t\t Atomic MASS : "<<atmas<<" u";

			 cout<<endl;
			 cout<<"\t\t Atomic RADIUS of the element : "<<atrad;

			 cout<<endl;
			 cout<<"\t\t BLOCK It Belongs to : "<<block<<endl;

			 cout<<"\n\n\t\t"<<" Atomic Radius in Pico meters (pm)";
			 cout<<"\n\t\t"<<" 00 means - NOT KNOWN ";


		  }
		void displaytable()
		  {
			 cout<<"\n\t\t\t MODERN PERIODIC TABLE !! ";
	 cout<<"\n\n   +---+                                                               +---+\n";
	 cout<<" 1 |H  |                                                               |He |\n";
	 cout<<"   +===+---+                                       +---+---+---+---+---+---+\n";
	 cout<<" 2 |Li |Be |                                       |B  |C  |N  |O  |F  |Ne |\n";
	 cout<<"   +---+---+                                       +---+---+---+---+---+---+\n";
	 cout<<" 3 |Na |Mg |                                       |Al |Si |P  |S  |Cl |Ar |\n";
	 cout<<"   +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n";
	 cout<<" 4 |K  |Ca |Sc |Ti |V  |Cr |Mn |Fe |Co |Ni |Cu |Zn |Ga |Ge |As |Se |Br |Kr |\n";
	 cout<<"   +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n";
	 cout<<" 5 |Rb |Sr |Y  |Zr |Nb |Mo |Tc |Ru |Rh |Pd |Ag |Cd |In |Sn |Sb |Te |I  |Xe |\n";
	 cout<<"   +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n";
	 cout<<" 6 |Cs |Ba | * |Hf |Ta |W  |Re |Os |Ir |Pt |Au |Hg |Tl |Pb |Bi |Po |At |Rn |\n";
	 cout<<"   +---+---+   +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n";
	 cout<<" 7 |Fr |Ra | **|Rf |Db |Sg |Bh |Hs |Mt |Ds |Rg |Cn |Uut|Fl |Uup|Lv |Uus|Uuo|\n";
	 cout<<"   +---+---+   +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n\n";
	 cout<<"           +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n";
	 cout<<"          *|La |Ce |Pr |Nd |Pm |Sm |Eu |Gd |Tb |Dy |Ho |Er |Tm |Yb |Lu |\n";
	 cout<<"           +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n";
	 cout<<"         **|Ac |Th |Pa |U  |Np |Pu |Am |Cm |Bk |Cf |Es |Fm |Md |No |Lr |\n";
	 cout<<"           +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+\n";

    getch();
  }
  void page()
   { int t;
     clrscr();
	  cout<<" \n\n\t\t WELCOME ... Lets Explore Periodic Table ! :)";
	  cout<<" \n\n\t From Class XII Science (2014-15) - KV Farakka";
	  cout<<" \n\n\n\t\t\t\t Made By - Dibyo Majumder";
	  cout<<" \n\t\t\t\t         - Mostafijur Rahaman";
	  cout<<" \n\t\t\t\t         - Abhinash jena   ";
	  cout<<" \n\t\t Under the guidance of Suman Chakraborty Sir \n";
	  cout<<" \n\n\n  Enter the code to continue [[ 2145 ]] : ";
	  }
   int menu()
    { int cs=0;
      while(cs<1||cs>3)
       { clrscr();
	 cout<<"\n\n\n\t\t\t 1. DISPLAY PERIODIC TABLE ";
	 cout<<"\n\t\t\t 2. EXPLORE ELEMENTS ";
	 cout<<"\n\t\t\t 3. EXIT";
	 cout<<"\n\t\t Enter a choice (1-3) : ";
	 cin>>cs;
       }
       return(cs);
      }
    void explore()
     {

     }

	};

	void main()
	  { periodic_table P ;
		P.page();
		int t;
		cin>>t;
		if(t==2145)
		 {
		   int cs=0;
		   while(cs!=3)
		     { cs=P.menu();
		       if(cs==1)
			{
			  clrscr();
			  P.displaytable();
			}
		       else if(cs==2)
			{
			 int ch=1;
			 while(ch==1)
			 {
			  int r;
			  cout<<"ENTER THE ELEMENTS' ATOMIC NUMBER TO EXPLORE -----> ";
			  cin>>r;
			  if(r>=1&&r<=118)
			    {
			      clrscr();
			      ifstream in;
			      in.open("propinfo.dat",ios::in||ios::binary);
			      in.seekg((r-1)*sizeof(P),ios::beg);
			      in.read((char*)&P,sizeof(P));
			      P.display();
			      in.close();
			      cout<<"\n\nEnter '1' to Explore another Element and '0' to exit ";
			      cin>>ch;
			    }
			  else
			    {
			     cout<<endl;
			     cout<<"SORRY !! .. No element found with Atomic Number "<<r;
			     cout<<"\n\nEnter '1' to Explore another Element ";
			     cin>>ch;
			    }
			  } //end while
			} //end if cs2

		      else if(cs==3)
			 { clrscr();
			   cout<<"\n\n\n\t\t\t Thank You !!";
			 }
		      } //end while
		      }
		else
		 { clrscr();
			cout<<" Wrong Code Entered __ Access Denied !!";
		  }
		getch();

	}