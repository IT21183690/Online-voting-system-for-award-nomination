//IT21183690_H.M.I.K.Dhanawardhana_Unregistered_user.h
#include <string>

using namespace std;

class Unregistered_users{
	protected :
		string name;
		string gender;
		string username;
		string email;
		
	public :
	    Unregidtered_users();
		Unregidtered_users(string N,string G,string U_name,string Email);
		Void setname(string N);
		void setgender(string G);
		void setusername(strin U_name);
		void setemail (string Email);
		register();
		~Unregistered_users();  	
};

//IT21183690_H.M.I.K.Dhanawardhana_Unregistered_user.h
#include "Unregistered_user.h"
#include<iostream>

using namespace std;

Unregistered_users::Unregistered_users(){
	
}

Unregistered_users::Unregistered_users(string N,string G,string U_name,string Email){
	name=N;
	gender=G;
	username=U_name;
	email=Email;
}
void Unregistered_users::setname(string N){
	name=N;
}
void Unregistered_users::setgender(string G){
	gender=G;
}
void Unregistered_users::setusername(string U_name){
	username=U_name;
}
void Unregistered_users::setemail(string Email){
	email=Email;
}
void Unregistered_users::regiter(){
	cout<<"Registration compelet"<<endl;
}

Unregistered_users::~Unregistered_users(){
	cout<<"object are destroyed!"<<endl;
}

//IT21183690_H.M.I.K.Dhanawardhana_Registered_user.h
#include <string>

using namespace std;

class Registered_users:public Unregistered_users
{
	protected:
		string Username;
		string Password;
		
	public :
	    Registered_users();
		Registered_users(string U_name,string P_word,string N,string G,string Email);
		void displayDetails();
		void login();
		string checkLoginDetails();
		~Registered_user();	
		
};

//IT21183690_H.M.I.K.Dhanawardhana_Registered_user.cpp
#include "Registered_user.h"
#include "Unregistered_user.h"
#include <string>

using namespace std;

Registered_users::Registered_users(){

}

Registered_users::Registered_users(string U_name,string P_word,string N,string G,string U_name,string Email){
	
	Username=U_name;
	Password=P_word;
}
void Registered_users::displayDetails(){
	
	
}

void Registered_users::login(){
	
}

void Registered_users::logout(){
	
}
string Registered_users::checkloginDetails{
    return 0;
}

Registered_users::Registered_users()
{
	cout<<"destroyed"<<endl;
}
//IT21183690_H.M.I.K.Dhanawardhana_voter.h
#include <string>

using namespace std;

class voter:public Registered_users
{
	private:
		string Voter_ID;
		feedbacks *feed[2];
		
	public:
	    voter(string U_name,string P_word,string N,string G,string U_name,string Email);
		void editVoterDetails();
		void ViewProfile()
		void CastVote();
		void Give_feedback();
		void Addfeedback (feedbacks *f1,feedbacks *f2);
		~voter();	
};
//IT21183690_H.M.I.K.Dhanawardhana_voter.cpp
#include "voter.h"
#include "Unregistered_user.h"
#include "Registered_user.h"
#include "Feedbacks.h"
#include <iostream>

 voter::voter(string string U_name,string P_word,string N,string G,string U_name,string Email)
 {
 	Voter_ID=V_ID;
 }
 void voter::editVoterDetails()
 {
 	
 }
 
 void voter::ViewProfile()
 {
 	
 }
 
 void voter::CastVote(){
 	
 }
 
  void voter::(Givefeedback)
 {
 	
 }
 void voter::Addfeedback (feedbacks *f1,feedbacks *f2)
 {
 	feed[0]=f1;
 	feed[2]=f2;
 }
 
 voter::voter()
 {
 	cout<<"destroyed"<<endl;
 }
//IT21183836_E.M.M.V.P.Ekanayaka_Admin.h
#include "Feedback.h"
#include "SystemMaintainer.h"


#define SIZE1 3
#define SIZE2 3

class Admin{
	
	private:
		string adminID;
		string adminName;
		string adminEmail;
		string adminPassword;
		
		Nominee* adm[SIZE1];
		Feedback* fed[SIZE2]; 
	
	public:
		Admin();
		Admin(string aID, string aName, string aEmail, string aPassword);
		void editNomineeDetails();
		void getVotes();
		void publishWinner();
		
};

//IT21183836_E.M.M.V.P.Ekanayaka_Admin.cpp
#include "Feedback.h"
#include "SystemMaintainer.h"
#include "Admin.h"

#include<cstring>

Admin::Admin()
{
	adminID = 0;
	strcpy(adminName,"");
	strcpy(adminEmail,"");
	strcpy(adminPassword,"");
}

Admin::Admin(string aID, string aName, string aEmail, string aPassword)
{
	strcpy(adminID,aID);
	strcpy(adminName,aNmae);
	strcpy(adminEmail,aEmail);
	strcpy(adminPasword,aPassword);
}

void Admin::editNomineeDetails()
{
	
}

void Admin::getVotes()
{
	
}

void Admin::publishWinner()
{
	
}

//IT21183836_E.M.M.V.P.Ekanayaka_SystemMaintainer.h
#include "Admin.h"
#include "Voter.h"
#define SIZE1 3
#define SIZE2 3

class SystemMaintainer{
	
	private:
		string maintainerID;
		string maintainerName;
	
		Voter* vote[SIZE1];
		Admin* ad[SIZE2];
		
	
	public:
		SystemMaintainer(string mID, string mName);
		void addVoters(){
			Voter[0] = new Voter();
	        Voter[1] = new Voter();
	        Voter[2] = new Voter();
		}
		void calculateVotes();
		void viewFeedback();
	
	
};
//IT21183836_E.M.M.V.P.Ekanayaka_SystemMaintainer.cpp
#include "Admin.h"
#include "Voter.h"
#include "SystemMaintainer.h"

#include<cstring>

SystemMaintainer::SystemMaintainer(string mID, string mName)
{
	strcpy(maintainerID,mID);
	strcpy(maintainerName,mName);
}

void SystemMaintainer::calculateVotes()
{
	
}

void SystemMaintainer::viewFeedback()
{
	
}

//IT21183836_E.M.M.V.P.Ekanayaka_feedback.h
class Feedback{
	
	private:
		string feedbackID;
		string description;
	
	public:
		void manageFeedback(string fID, string fdescript);
		void display();
	
	
};
//IT21183836_E.M.M.V.P.Ekanayaka_feedback.cpp
#include "Feedback.h"
#include<cstring>


void Feedback::manageFeedback(string fID, string fdescript)
{
	feedbackID = fID;
	description = fdescript;
}

void Feedback::display()
{
	cout << "" << feedbackID << "" << description << endl;
}


//IT21185120_A.H.M.T.S.Aberathne_Nominee.h
#include "Nominee.h"
#include "Admin.h"
#include "NProfile.h"

#include <iostream>
#include <string>
#define SIZE 1

class Nominee
{
private:
    string nomineeID;
    string nomineeName;
    string nomineeEmail;
    string nomineeNumber;    
public:
   void  NomineeDetails(string N_ID,string N_Name,string N_Email,string N_Email,string N_Number);
    
    void Nominee::view Details();
    void Nominee::view winner();
    void Nominee::view feedback();
    ~Nominee();
};
//IT21185120_A.H.M.T.S.Aberathne_Nominee.cpp
#include "NProfile.h"
#include "Admin.h"
#include "registered_User.h"
#include<cstring>
#include<iostream>
using namespace std;

Nominee::Nominee (string N_ID,string N_Name,string N_Email, string nominee_G,string nomiineeNumber)

void NProfile:: inputdetails()
{
 cout<<"please enter your ID,Name,Email,NomineeNumber:";
 cin>>ID,Name,Email,NomineeNumber;
}
void Nprofile:: viewDetails()
{
  cout<<"Profile ID:"<<pID<<endl;
  cout<<"Name:"<<name<<endl;
  cout<<"Email:"<<email<<endl;
  cout<<"NomineeNumber:"<<NomineeN<<endl;


//IT21185120_A.H.M.T.S.Aberathne_Nominee_Profile.h
#include "nominee.h"
#include <string>
#define SIZE1

CLASS Nominee_Profile
{
	private:
		string nomineeP_ID;
		char nomineeP_Name;
		int nomineeP_Number;
		char nomineeP_Email;
		
	public:
		NomineeP(string NomineeP_ID,string NomineeP_Name,string Nomineep_Number,string nomineeEmail);
		 
		 void inputdetails();
		 void displaydetails();
		 void assign();
		 
};


//IT21185120_A.H.M.T.S.Aberathne_Nominee_Profile.cpp
#include"nominee.h"
#include"cstring"
#include"iostream"
using namespace std;

NomineeP::nomineeP (string nomineeP_ID,string nomineeP_Name,string nomineeP_Email,string nominee_DOB, string nominee_Gender )
{

  NomineeP=new NomineeP(nominee_PID,nomineeP_Name,nomineeP_Number,nomineeP_Email,nomineeP_DOB, nomineeP_Gender);
}

void NomineeP:: assignDetails()
{
      NomineeP->assignDetails()
}
void NomineeP:: displaydetails()
{
      NomineeP->displaydetails()
}
NomineeP::~NomineeP()
{
      COUT<<"Deleting NomineeP" <<endl;
}

//MLB_10.1_10_Online voting system for award nomination
#include <iostream>
#include "Unregistered_user.h"
#include "Registered_user.h"
#include "voter.h"
#include "Admin.h"
#include "SystemMaintainer.h"
#include "Feedback.h"
#include "Nominee.h"
#include "Nominee_Profile.h"

using namespace std;

int main()
{
	//Unregistered_user objects
	Unregistered_users user1, user2;
	
	user1.Unregistered_users("Vihanga","male","Viha@1011","Vihanga@gmail.com");
	user2.Unregistered_users("Vihanga","male","Viha@1011","Vihanga@gmail.com");
	
    	
    	cout<<"-----------------------------"<<endl;
    	
    //Registered_user objects	
    Registered_users R_user1, R_user2;
    R_user1.Registered_users("Nuwan@3033","1234#nuwa","Nuwan","male","nuwa@gmail.com");
	R_user1.Registered_users("Hansi#3235","4534@Han","Hansika","femail","hansi@gmail.com"); 
	
	R_user1->displayDetails();
	R_user2->displayDetails();  
	
	//voter objects
	voter v;
	v.voter("IP1234","Srima@3033","1234#Srima","Srima","female","srima@gmail.com")  	
	v.CastVote(); 


//object Admin class
  Admin* adm = new Admin();
  
 Admin->editNomineeDetails();
 Admin->getVotes();
 Admin->publishWinner();
 
 //object SystemMaintainer class
SystemMaintainer* main = new SystemMaintainer();
  
 Admin->calculateVotes();
 Admin->viewFeedback();

  //object Feedback class
Feedback* fd = new Feedback();

  //object Nominee class

  Nominee N ;
N.Nominee("223ihs","sachini","sach.hd@gmail.com","female","0712436722")
N.viewDetails();

  //objects Nominee_Profile classs

  Nominee_Profile N_p;
  N_p.displaydetails();


  //delete dynamic objects
   //delete Unregistered_users
  delete user1;
  delete user2;

   //delete Registered_users
  delete R_user1;
  delete R_user2;

  //delete nominee 
  delete N;

  //delete nominee_Profile
  delete N_p;

  
}
