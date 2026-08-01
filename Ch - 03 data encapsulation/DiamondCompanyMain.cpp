#include "DiamondCompany.cpp"

int main()
{
    int n;

    cout << "Enter Number of Diamond Companies : ";
    cin >> n;

    DiamondCompany *company[n];

    for (int i = 0; i < n; i++)
    {
        int comp_id;
        string comp_name;
        int comp_staff_quantity;
        float comp_revenue;
        int comp_import_raw_diamonds;
        int comp_export_diamonds;
        string comp_ceo;

        cout << endl;
        cout << "Enter Details of Company " << i + 1 << endl
             << endl;

        cout << "Enter Company ID : ";
        cin >> comp_id;
        fflush(stdin);
        cout << "Enter Company Name : ";
        cin >> comp_name;
        cout << "Enter Staff Quantity : ";
        cin >> comp_staff_quantity;
        cout << "Enter Revenue Per Year : ";
        cin >> comp_revenue;
        cout << "Enter Raw Diamonds Imported Per Year : ";
        cin >> comp_import_raw_diamonds;
        cout << "Enter Diamonds Exported Per Year : ";
        cin >> comp_export_diamonds;
        cout << "Enter CEO Name : ";
        cin >> comp_ceo;

        company[i] = new DiamondCompany(comp_id, comp_name, comp_staff_quantity, comp_revenue,
                                        comp_import_raw_diamonds, comp_export_diamonds, comp_ceo);
    }

    cout << endl
         << "---Diamond Company information--- " << endl
         << endl;

    for (int i = 0; i < n; i++)
    {
        company[i]->getData();
    }

    return 0;
}