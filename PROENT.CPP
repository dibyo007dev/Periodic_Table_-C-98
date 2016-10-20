// Project ......
	 // Periodic Table Data Entry ..

/* Structure of class ;;
	  Data Members :
		int atno  -- For Atomic Number
		char name -- Element name
		char symbol -- For Symbol 
		float atmas -- For Atomic Mass
		float atrad -- For Atomic Radii
		char block -- For Block Identification

	  Member Functions :
		 input();
													  */


/* Program used to make the binary file which stores the
	 information (physical properties) of the element searched for  */



 #include<iostream.h>
 #include<conio.h>
 #include<stdio.h>
 #include<fstream.h>

 class periodic_table
	{
		int atno;
		float atmas;
		float atrad;
		char name[20];
		char symbol[6];
		char block;

	 public:

		void input()
		  {
			 cout<<"\n\n\n\t\t Enter Atomic Number : ";
			 cin>>atno;
			 cout<<endl;
			 cout<<"\t\t Enter Name of the ELEMENT : ";
			 gets(name);
			 cout<<endl;
			 cout<<"\t\t Enter Element SYMBOL : ";
			 gets(symbol);
			 cout<<endl;
			 cout<<"\t\t Enter Atomic Mass : ";
			 cin>>atmas;
			 cout<<endl;
			 cout<<"\t\t Enter Atomic RADIUS of the element : ";
			 cin>>atrad;
	  cout<<endl;
			 cout<<"\t\t Which BLOCK It Belongs to : ";
			 cin>>block;
		  }
	};

	void main()
	  {
		 periodic_table P ;

		ofstream out;
		out.open("propinfo.dat",ios::app||ios::binary);
		out.seekp(0,ios::end);

		for(int i=0;i<1;i++)
		 {      clrscr();
			P.input();
			out.write((char*)&P,sizeof(P));

			cout<<" \n\n :) PROPERTIES INSERTED IN THE FILE";
		 }
		out.close();
		getch();
	}



