#include <iostream>
#include "AdminMgt.cpp" 
#include "UserMgt.cpp"
#include "UsernLibrary.cpp"


using namespace std;

int main()
{
    
    AdminMgt AdminManagement;
   
    UsernLibrary UsernLibrary1; 
    AdminManagement.AdminMenu();
    do {
        if (AdminManagement.getAdminname() == "SopheakLCP" && AdminManagement.getAdminpassword() == "Lcp0292") {
            UsernLibrary1.UsernLibraryMenu();
        }
        else {

            cout << "Invalid User and Password. Please try again."<<endl;
            AdminManagement.AdminMenu();
        }
    } while (true); 
    
    
    
    

    
    
       
   
}

