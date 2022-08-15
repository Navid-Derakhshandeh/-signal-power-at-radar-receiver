//Navid Derakhshandeh
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

	class s{
		private:
			double Sr,Pt,Gt,Gr,Landa,Rcs,Rr,Lt,Lr,res1,res2,res3,res4,res5,res6,res7,res8;
		public:
			void formula(){
				cout<<"Please Enter the transmitter power : ";
				
				cin>>Pt;
				
				cout<<"Please Enter the  gain of radar transmit antenna in the direction of the target : ";
				
				cin>>Gt;
				
				cout<<"Please Enter gain of radar receive antenna in the direction of the target : ";
				
				cin>>Gr;
				
				cout<<"Please Enter the wavelength : ";
				
				cin>>Landa;
				
				cout<<"Please Enter the target radar cross section : ";
				
				cin>>Rcs;
				
				cout<<"Please Enter the radar range to target : ";
				
				cin>>Rr;
				
				cout<<"Please Enter the radar losses from transmitter to antenna : ";
				
				cin>>Lt;
				
				cout<<"Please Enter the radar losses from antenna to receiver : ";
				
				cin>>Lr;
				
				res1 = Pt * Gt * Gr * Landa * Landa * Rcs;
				res2 = 4 * 180;
				res3 = 3;
				res4 = pow(res2, res3);
				res5 = 4;
				res6 = pow(res5, Rr);
				res7 = res4 * res6 * Lt * Lr;
				res8 = res1 / res7;
				cout<<"signal power at radar receiver : "<<res8;
			}
	};
	int ST();
	int Test();
	int main(int c){
	do
	{
		cout<<"\t 1 - signal power at radar receiver \n";
		cout<<"\t 2 - it's Test option \n";
		cin>>c;
	}  
	while((c!=1) && (c!=2));
	 switch(c){
	 	case 1:ST();break;
	 	case 2:Test();break;
	 	default:cout<<"End";
	 }
	 return 0;}
    int ST(){
    	
		s ob;
		ob.formula();
		return 0;
		
   }
   int Test(){
   	cout<<"it's test option";
   }
