#include <iostream>
#include <string>
using namespace std;

class DiamondCompany
{
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    float comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    // parameterized constructor

    DiamondCompany(int compid, string name, int staff_quantity, float revenue,
                   int import_raw_diamonds, int export_diamonds, string ceo)
    {
        this->comp_id = comp_id;
        this->comp_name = comp_name;
        this->comp_staff_quantity = comp_staff_quantity;
        this->comp_revenue = comp_revenue;
        this->comp_import_raw_diamonds = comp_import_raw_diamonds;
        this->comp_export_diamonds = comp_export_diamonds;
        this->comp_ceo = comp_ceo;
    }

    void getData()
    {
        cout << endl
             << endl;
        cout << "Company ID : " << comp_id << endl;
        cout << "Company Name : " << comp_name << endl;
        cout << "Staff Quantity : " << comp_staff_quantity << endl;
        cout << "Revenue Per Year : " << comp_revenue << endl;
        cout << "Import Raw Diamonds : " << comp_import_raw_diamonds << endl;
        cout << "Export Diamonds : " << comp_export_diamonds << endl;
        cout << "CEO Name : " << comp_ceo;
    }
};

