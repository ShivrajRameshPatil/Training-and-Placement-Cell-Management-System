/*TRAINING AND PLACEMENT CELL MANAGEMENT SYSTEM
MADE BY:
SHIVRAJ PATIL
JANHAVI CHAVAN
GUNJAN CHUG
DIVISION H
*/

#include<iostream>

#include<fstream>

using namespace std;

void work();
class placement {
  private:
    string studentname;
  string studentid;
  long age;
  double cgpa;
  float backlog;
  public:
    placement() {
      studentname = "";
      studentid = "";
      age = 0;
      cgpa = 0.0;
      backlog = 0;
    }
  placement(string sn, string sid, int age1, double cgpa1, char backlog1) {
    studentname = sn;
    studentid = sid;
    age = age1;
    cgpa = cgpa1;
    backlog = backlog1;
  }
  void display() {
    cout << "name is" << studentname << endl;
    cout << "student id is" << studentid << endl;
    cout << "age is" << age << endl;
    cout << "cgpa is" << cgpa << endl;
    cout << "BACKLOGS" << backlog << endl;
  }
};
class microsoft: public placement {
  public: char datascience;
  char cloudcomputing;
  char cybersecurity;
  char IOT;
  public: microsoft() {
    datascience = 'Y';
    cloudcomputing = 'Y';
    cybersecurity = 'Y';
    IOT = 'Y';

  }
  int display1() {

    cout << "CONGRATULATIONS YOU HAVE GOT A JOB IN MICROSOFT" << endl;
    return 0;
  }

};
class nasa: public placement {
  public: int heattransfer;
  int thermo;
  int energysystems;
  public: nasa() {
    heattransfer = 1;
    thermo = 1;
    energysystems = 1;
  }
  int display2() {

    cout << "CONGRATULAIONS YOU HAVE GOT A JOB IN NASA" << endl;
    return 0;
  }
};

void work(){
    string studentname;
  string studentid;
  long age;
  double cgpa;
  float backlog;
  string course;
  int c = 0;
  int m = 0;
  int s = 0;
  char datascience;
  char cloudcomputing;
  char cybersecurity;
  char IOT;
  int heattransfer;
  int thermo;
  int energysystems;

  ofstream lout("saved.txt",ios::app);

  cout << "name is" << endl;
  cin >> studentname;
  lout << "Name: "<<studentname<<endl;
  cout << "id is" << endl;
  cin >> studentid;
  lout << "ID: "<<studentid<<endl;
  try {
    cout << "age is" << endl;
    cin >> age;
    if ((age > 18) && (age < 55))

    {
      c++;
      lout << "Age: "<<age<<endl;
    } else {
      throw age;
    }
    cout << "CGPA is" << endl;
    cin >> cgpa;
    if ((cgpa > 8.0) && (cgpa <= 10.0))

    {
      c++;
      lout << "CGPA: "<<cgpa<<endl;
    } else {
      throw cgpa;
    }
    cout << "enter  1 for yes or 0 for  no to check for backlog" << endl;
    cin >> backlog;
    if ((backlog == 0))

    {
      c++;
      lout << "Backlog: "<<backlog<<endl;
    } else {
      throw backlog;
    }

    cout << "enter Y or N for datascience" << endl;
    cin >> datascience;
    if ((datascience == 'Y')) {
      m++;

    } else {
      throw datascience;
    }
    cout << "enter Y or N for cloudcomputing" << endl;
    cin >> cloudcomputing;
    if (cloudcomputing == 'Y') {
      m++;
    } else {
      throw cloudcomputing;
    }
    cout << "enter Y or N for cyber security" << endl;
    cin >> cybersecurity;
    if (cybersecurity == 'Y') {
      m++;
    } else {
      throw cybersecurity;
    }
    cout << "enter Y or N for IOT" << endl;
    cin >> IOT;
    if (IOT == 'Y') {
      m++;
    } else {
      throw IOT;
    }
    cout << "enter 1 for yes or 0 for no for heat transfer" << endl;
    cin >> heattransfer;
    if (heattransfer == 1) {
      s++;
    } else {
      throw heattransfer;

    }
    cout << "enter 1 for yes or 0 for no for thermodynamics" << endl;
    cin >> thermo;
    if (thermo == 1) {
      s++;
    } else {
      throw thermo;
    }
    cout << "enter 1 for yes or 0 for no for energy system" << endl;
    cin >> energysystems;
    if (energysystems == 1) {
      s++;
    } else {
      throw energysystems;
    }
  } catch (char dccio) {
    cout << "sorry u are not eligible for a job in microsoft" << endl;
  } catch (int heattherenergy) {
    cout << "sorry u are not eligible for a job in nasa" << endl;
  } catch (long a) {
    cout << "age must be between 18 to 55" << endl;
  } catch (double cg) {
    cout << "CGPA must be above 8" << endl;
  } catch (float f) {
    cout << "if backlogs are there u cannot apply" << endl;
  }

  if (c == 3) {
    placement p(studentname, studentid, age, cgpa, backlog);
    p.display();
  }
  if (m == 4) {
    microsoft m3;
    m3.display1();
    lout << "Job: Microsoft"<<endl;
  }
   if (s == 3) {
    nasa n1;
    n1.display2();
    lout << "Job: Nasa"<<endl;
  }else{
    lout << "Job: No"<<endl;
  }
  char cc1;
  cout<<"Do you want to add another student info?(Y/N):";
  cin>>cc1;
  if(cc1=='Y'){
    work();
  }
    
  

}

int main() {
  work();
  char cc2;
  cout<<"Do you want to print list? (Y/N):";
  cin>>cc2;
  if(cc2=='Y'){
    ifstream f("saved.txt");

    if (f.is_open())
        std::cout << f.rdbuf();
  }

  return 0;
}

/*output
student@student-OptiPlex-390:~$ ./a.out
name is
SHIVRAJ
id is
111
age is
19
CGPA is
9.0
enter  1 for yes or 0 for  no to check for backlog
0
enter Y or N for datascience
Y
enter Y or N for cloudcomputing
Y
enter Y or N for cyber security
Y
enter Y or N for IOT
Y
enter 1 for yes or 0 for no for heat transfer
1
enter 1 for yes or 0 for no for thermodynamics
1
enter 1 for yes or 0 for no for energy system
1
name isSHIVRAJ
student id is111
age is19
cgpa is9
BACKLOGS0
CONGRATULATIONS YOU HAVE GOT A JOB IN MICROSOFT
CONGRATULAIONS YOU HAVE GOT A JOB IN NASA
Do you want to add another student info?(Y/N):Y
name is
GUNJAN
id is
222
age is
19
CGPA is
9.0
enter  1 for yes or 0 for  no to check for backlog
0
enter Y or N for datascience
Y
enter Y or N for cloudcomputing
Y
enter Y or N for cyber security
Y
enter Y or N for IOT
Y
enter 1 for yes or 0 for no for heat transfer
1
enter 1 for yes or 0 for no for thermodynamics
0
sorry u are not eligible for a job in nasa
name isGUNJAN
student id is222
age is19
cgpa is9
BACKLOGS0
CONGRATULATIONS YOU HAVE GOT A JOB IN MICROSOFT
Do you want to add another student info?(Y/N):Y
name is
JANHAVI
id is
333
age is
19
CGPA is
9.0
enter  1 for yes or 0 for  no to check for backlog
0
enter Y or N for datascience
Y
enter Y or N for cloudcomputing
N
sorry u are not eligible for a job in microsoft
name isJANHAVI
student id is333
age is19
cgpa is9
BACKLOGS0
Do you want to add another student info?(Y/N):N
Do you want to print list? (Y/N):Y
Name: SHIVRAJ
ID: 111
Age: 19
CGPA: 9
Backlog: 0
Job: Microsoft
Job: Nasa
Name: GUNJAN
ID: 222
Age: 19
CGPA: 9
Backlog: 0
Job: Microsoft
Job: No
Name: JANHAVI
ID: 333
Age: 19
CGPA: 9
Backlog: 0
Job: No
student@student-OptiPlex-390:~$ 
*/
