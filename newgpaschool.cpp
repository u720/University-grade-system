#include <iostream>
using namespace std;
class school{
	public:
	    string yourname;
	    string fathername;
	    int rollno;
		char sem[7];
	    string semname[3] = {"1st","one","1"};
		double gpa[5] = {1.4,2.4,3.1,3.5,2.9};
	    string gmail[5] = {"obaid123@gmail.com","saim123@gmail.com","farhan123@gmail.com","abdullah123@gmail.com","waleed123@gmail.com"};
		string gm;
		int result;
	    int newroll;
	    int confirm;
	    string pass;
	    string passs[5] = {"obaid123","saim123","farhan123","abdullah123","waleed123"};
	
	school(){
		
		cout<<"WELCOM TO THE FEDERAL URDU UNIVERSITY OF ARTS, SCIENCE & TECHNOLOGY";
		cout<<"\nPress Enter to continue:";
		cin.ignore();
		cout<<"Kindly Enter Your name:";
		cin>>yourname;
		cout<<"Kindly Enter Your Father name:";
		cin>>fathername;
		cout<<"Enter Email:";
		cin>>gm;
		start:
		cout<<"Enter password:";
		cin>>pass;
		if(pass == passs[0] || pass == passs[1] || pass == passs[2] || pass == passs[3] ||  pass == passs[4]){
					start1:
					cout<<"Enter your semester:";
		cin>>sem;
		if (sem == semname[0] || sem == semname[1] || sem == semname[2]){
			cout<<"\n1st semester includes roll no from 11-15!!";
			cout<<"\nEnter Your Roll No:";
		    cin>>rollno;}
		else{
			cout<<"result of given semester["<<sem<<"] isn't available right now";
		    cout<<"\nenter within givin semester";
		    cout<<"\n1st semester, 2nd semester, 3rd semester, 4rth semester"<<endl;
			goto start1;
		}
		
		}
        else{
        	cout<<"Error!! Your entered password is incorrect, kindly Re-enter your Password."<<endl;
           
           
					goto start;
				}

			}
				
	    void get_details(){
	    			cout<<"Kindly Enter Your name:";
		cin>>yourname;
		cout<<"Kindly Enter Your Father name:";
		cin>>fathername;
		cout<<"Enter Email:";
		cin>>gm;
		startt:
		cout<<"Enter password:";
		cin>>pass;
		if(pass == passs[0] || pass == passs[1] || pass == passs[2] || pass == passs[3] ||  pass == passs[4]){
			
					start1:
					cout<<"Enter your semester:";
		cin>>sem;
		if (sem == semname[0] || sem == semname[1] || sem == semname[2]){
			cout<<"\n1st semester includes roll no from 11-15!!";
			cout<<"\nEnter Your Roll No:";
		    cin>>rollno;}
		else{
			cout<<"result of given semester["<<sem<<"] isn't available right now";
		    cout<<"\nenter within givin semester";
		    cout<<"\n1st semester, 2nd semester, 3rd semester, 4rth semester"<<endl;
			goto start1;
		}
		
		}
        else{
        	cout<<"Error!! Your entered password is incorrect, kindly Re-enter your Password."<<endl;
           
           
					goto startt;
				}

	
		}
	
	    void put_detail(){
				cout<<"\nYour Name Is:"<<yourname<<endl;
				cout<<"Your Father Name Is:"<<fathername<<endl;
				cout<<"your semester is:"<<sem<<endl;
				cout<<"Your Roll No Is:"<<rollno<<endl;
				cout<<"Your password is ["<<pass<<"]"<<endl;
				cout<<"\n\nEnter 1 for confirmation\nOr 2 if you want to re-enter your information:"<<endl;
			    cin>>confirm;  
		
				if(confirm == 2){
			    	             	int choice;
    	     do{
	     	start:
			system ("cls");
	     	cout<<"1- press 1 if you want to re-enter your information."<<endl;
	     	cout<<"2- exit"<<endl;
			cout<<"Enter any number(1-2):"<<endl;
	     	cin>>choice;
	     	switch (choice){
	     		case 1:
	     			get_details();
	     			put_detail();
	     			get_gpa();
	     		break;
	     		case 2:
	     			exit(1);
	     			break;
				default:
	     			cout<<"Imvalid selection! Please Enter Number from 1-2..";
	     			system ("pause");
	     			goto start;
	     		break;
			 }
			 
		 } while(choice != 0);        
	
		
			    	
		}
	}
			    
		
		void get_gpa(){
                if(sem == semname[0] || sem == semname[1] || sem == semname[2]){
                
				if(confirm == 1 && rollno == 11  && pass == passs[0] &&gm == gmail[0] ){
					if(sem == semname[0] || sem == semname[1] || sem == semname[2]){
						
						cout<<"["<<yourname<<"] Your GPA Is ="<<" "<<gpa[0]<<endl;
			    	cout<<"Your obtained marks are given below:"<<endl;
			    	cout<<"PF: 43/100 \nICT: 5O/100 \nCalculas: 55 \nApp. physics: 50 \nECC:53/100 \nIsl:70/100 "<<endl;
					}
			    	
			    	
				}
				else if (confirm == 1 && rollno == 12&&  pass == passs[1] &&gm == gmail[0]  ){
					if( sem == semname[0] || sem == semname[1] || sem == semname[2]){
						
					cout<<"["<<yourname<<"] Your GPA Is ="<<" "<<gpa[1]<<endl;
					cout<<"Your obtained marks are given below:"<<endl;
			    	cout<<"PF: 56/100 \nICT: 72/100 \nCalculas: 55/100 \nApp. physics: 60/100 \nECC: 56/100 \nIsl: 80/100 "<<endl;
					}
					
				}
			   else if (confirm == 1 && rollno == 13&& pass == passs[2] &&gm == gmail[0] ){
					if( sem == semname[0] || sem == semname[1] || sem == semname[2]){	
						cout<<"["<<yourname<<"] Your GPA Is ="<<" "<<gpa[2]<<endl;
					cout<<"Your obtained marks are given below:"<<endl;
			    	cout<<"PF: 56/100 \nICT: 68/100 \nCalculas: 80/100 \nApp. physics: 82/100 \nECC: 76/100 \nIsl: 70/100 "<<endl;
					}
			
				}
				else if (confirm == 1 && rollno == 14&& pass == passs[3] &&gm == gmail[0]){
					if( sem == semname[0] || sem == semname[1] || sem == semname[2]){
						cout<<"["<<yourname<<"] Your GPA Is ="<<" "<<gpa[3]<<endl;
					cout<<"Your obtained marks are given below:"<<endl;
			    	cout<<"PF: 83/100 \nICT: 85/100 \nCalculas: 66/100 \nApp. physics: 83 \nECC: 66/100 \nIsl: 80/100 "<<endl;
					}
					
					
				}
				else if (confirm == 1 && rollno == 15&& pass == passs[4] &&gm == gmail[0]){
                     if( sem == semname[0] || sem == semname[1] || sem == semname[2]){
                     			cout<<"["<<yourname<<"] Your GPA Is ="<<" "<<gpa[4]<<endl;
					cout<<"Your obtained marks are given below:"<<endl;
			    	cout<<"PF: 71/100 \nICT: 73/100 \nCalculas: 65/100 \nApp. physics: 73/100 \nECC: 55/100 \nIsl: 90/100 "<<endl;
					 }
					 					
			
				}
				else{
					cout<<"Your given information is incorrect, please re-write your information correctly";
					cout<<"\nAnd be sure to Enter your roll no from 11-15";
									
				}
			}
		system("pause");
		}
		
		
		
				void put_changepass(){
		     start2:
			 cout<<"Kindly Enter your Roll number";
		     cin>>newroll;
		     
		     	 if(newroll == 11  ){
		     	cout<<"Enter Your New Password:";
		     	cin>>passs[0];
		     	if(sizeof(pass) >= 8){
		     		cout<<"Your new password ["<<passs[0]<<"] has been changed successfully.";
				 }
		     	else{
		     		cout<<"ERROR! Kindly Enter Password with maximum 8 digits";
				 }
		     	}
		     	else if(newroll == 12){
		     		cout<<"Enter Your New Password:";
		     		cin>>passs[1];
		     		if(sizeof(pass) >= 8){
		     			
	                            cout<<"Your new password ["<<passs[1]<<"] has been changed successfully.";
                               }
                    else{
                 	cout<<"ERROR! Kindly Enter Password with maximum 8 digits";
                     }
		     		
				 }
				 else if(newroll == 13){
				 	cout<<"Enter Your New Password:";
				 	cin>>passs[2];
				 	if(sizeof(pass) >= 8){
		     			
	                            cout<<"Your new password ["<<passs[2]<<"] has been changed successfully.";
                               }
                    else{
                 	cout<<"ERROR! Kindly Enter Password with maximum 8 digits";
                     }
				 	
				 	
				 }
				 else if(newroll == 14){
				 	cout<<"Enter Your New Password:";
				 	cin>>passs[3];
				 	if(sizeof(pass) >= 8){
		     			
	                            cout<<"Your new password ["<<passs[3]<<"] has been changed successfully.";
                               }
                    else{
                 	cout<<"ERROR! Kindly Enter Password with maximum 8 digits";
                     }
				    
				 }
				 else if(newroll == 15){
				 	cout<<"Enter Your New Password:";
				 	cin>>passs[4];
				 	if(sizeof(pass) >= 8){
		     			
	                            cout<<"Your new password ["<<passs[4]<<"] has been changed successfully.";
                               }
                    else{
                 	cout<<"ERROR! Kindly Enter Password with maximum 8 digits";
                     }
				 	
				 }
				 else{
				 	cout<<"Your Entered Roll no is incorrect, Kindly Enter From(11-15)";
				 	system ("pause");
				 	goto start2;
				 }
		    			
		}

};
int main(){
	school s1;
	s1.put_detail();
	s1.get_gpa();
	int choice;
    	     do{
	     	system ("cls");
	     	cout<<"-------Main menu-------"<<endl;
	     	cout<<"1- Enter 1 if you want to re-enter your information."<<endl;
	     	cout<<"2- Enter 2 if you want to change your password."<<endl;
			cout<<"3- exit"<<endl;
			cout<<"Enter any number(1-3):"<<endl;
	     	cin>>choice;
	     	switch (choice){
	     		case 1:
	     			s1.get_details();
	     			s1.put_detail();
	     			s1.get_gpa();
	     		break;
	     		case 2:
	     			s1.put_changepass();
	     			break;
				 case 3:
	     			exit(1);
	     			break;
				default:
	     			cout<<"Imvalid selection! Please Enter Number from 1-3..";
	     		break;
			 }
			 
		 } while(choice != 0);
		
		
	
}