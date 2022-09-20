#include<bits/stdc++.h>
using namespace std;

class SCHOOL 
{ 
 char NAME[20]; 
 char DATE[20]; 
 friend class FACULTY; 
}; 
class FACULTY 
{ 
 char NAME[20]; 
 char DATE[20]; 
 SCHOOL x; 
public: 
 void INPUT(); 
 void OUTPUT(); 
}; 
class PERSON 
{ 
protected: 
 char NAME[20]; 
 char BIRTH[20]; 
 char ADDRESS[20]; 
public: 
 void INPUT(); 
 void OUTPUT(); 
}; 
class STUDENT : private PERSON 
{ 
 FACULTY y; 
 char CLASS[20]; 
 float SCORE; 
public: 
 void INPUT(); 
 void OUTPUT(); 
}; 
void FACULTY::INPUT() 
{ 
 cout<<"Faculty name: "; fflush(stdin); gets(NAME); 
 cout<<"Faculty Date: "; fflush(stdin); gets(DATE); 
 cout<<"SCHOOL:"<<endl; 
 cout<<"School name: "; fflush(stdin); gets(x.NAME); 
 cout<<"School Date: "; fflush(stdin); gets(x.DATE); 
} 
void FACULTY::OUTPUT() 
{ 
 cout<<"Faculty name: "<<NAME<<endl; 
 cout<<"Faculty Date: "<<DATE<<endl; 
 cout<<"SCHOOL:"<<endl; 
 cout<<"School name: "<<x.NAME<<endl; 
 cout<<"School Date: "<<x.DATE<<endl; 
} 
void PERSON::INPUT() 
{ 
 cout<<"Name: "; fflush(stdin); gets(NAME); 
 cout<<"Birth:"; fflush(stdin); gets(BIRTH); 
 cout<<"Address: "; fflush(stdin); gets(ADDRESS); 
} 
void PERSON::OUTPUT() 
{ 
 cout<<"Name: "<<NAME<<endl; 
 cout<<"Birth: "<<BIRTH<<endl; 
 cout<<"Address: "<<ADDRESS<<endl; 
} 
void STUDENT::INPUT() 
{ 
 PERSON::INPUT(); 
 y.INPUT(); 
 cout<<"Class: "; fflush(stdin); gets(CLASS); 
 cout<<"Score: "; cin>>SCORE; 
} 
void STUDENT::OUTPUT() 
{ 
 PERSON::OUTPUT(); 
 y.OUTPUT(); 
 cout<<"Class: "<<CLASS<<endl; 
 cout<<"Score: "<<SCORE<<endl<<endl; 
} 
int main() 
{ 
 STUDENT a; 
 a.INPUT(); 
 cout<<endl; 
 a.OUTPUT(); 
 return 0; 
}