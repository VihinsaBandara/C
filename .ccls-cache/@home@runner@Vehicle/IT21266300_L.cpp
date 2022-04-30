// IT21266300
// Bandara K.M.V.T.
//Paper version : L
//Malabe 4.2

#include <iostream>

using namespace std;

//Class Definition

class Doctor {
  private:
    int doctorID;
    string doctorName;
    string specialization;
    string hospital;

  public:
    void setDoctorDetails(int docID, string docName, string docSpecial, string docHospital);
    void displayDoctorDetails();
    string getSpecialization();
    void setHospital();
};

int main() {
  Doctor docter1,docter2,docter3;

  //Create Objects
  
  docter1.setDoctorDetails(1, "Dr.Sunil", "Neurologist", "Asiri");
  docter2.setDoctorDetails(2, "Dr.Yasantha", "Oncologist", "Lanka");
  docter3.setDoctorDetails(3, "Dr.Govin", "Cardiologist", "");

  //Set New hospitals
  
  docter1.setHospital();
  docter2.setHospital();
  docter3.setHospital();

  cout << endl;

  //Display Doctor Details
  
  docter1.displayDoctorDetails();
  docter2.displayDoctorDetails();
  docter3.displayDoctorDetails();
  
  return 0;
}

//Methods Implementation

void Doctor::setDoctorDetails(int docID, string docName, string docSpecial, string docHospital){
    doctorID = docID;
    doctorName = docName;
    specialization = docSpecial;
    hospital = docHospital;
}

void Doctor::displayDoctorDetails(){
  cout << "DoctorID = " << doctorID << endl;
  cout << "DoctorName = " << doctorName << endl;
  cout << "Specialization = " << specialization << endl;
  cout << "Hostpital = " << hospital << endl;
  cout << endl;
}

string Doctor::getSpecialization(){
  return specialization;
}

void Doctor::setHospital(){
  cout << "Input new hostpital of doctor " << doctorID << " : ";
  cin >> hospital;
}