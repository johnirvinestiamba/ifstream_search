#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string idNo = "",line = "";
    char choice;
    do
    {
        cout << "ID Number : ";
        cin >> idNo;
        ifstream data ("students.txt");
        while (!data.eof())
        {
            getline (data, line);
            if (line == idNo)
            {
                    getline (data, line);
                    cout << line << endl;
                    getline (data, line);
                    cout << line << endl;
            }
        }
        cout << "Do you want to search again? (y/n) : ";
        cin >> choice;
        system ("cls");
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
