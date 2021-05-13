#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Person {
    string FirstName;
    string LastName;
    int BirthYear;
    bool Sex;
};

Person* getPerson(string s) {
    string delimiter = ",";
    size_t pos = 0;
    Person* newp = new Person();
    int currentProp = 0;

    string token;
    while ((pos = s.find(delimiter)) != string::npos) {
        token = s.substr(0, pos);
        if (currentProp == 0) {
            newp->FirstName = token;
            currentProp++;
        }
        else if (currentProp == 1) {
            newp->LastName = token;
            currentProp++;
        }
        else if (currentProp == 2) {
            newp->BirthYear = stoi(token);
            currentProp++;
        }
        else if (currentProp == 3) {
            newp->Sex = token == "1";
        }
        s.erase(0, pos + delimiter.length());
    }

    return newp;
}

int getLinesCount(string fileName)
{
    std::ifstream input(fileName);
    int count = 0;
    for (std::string line; getline(input, line); )
    {
        count++;
    }
    return count;
}

Person* readPersons(string fileName, int linesCount)
{
    Person* persons = new Person[linesCount];
    std::ifstream input(fileName);
    int i = 0;
    for (std::string line; getline(input, line); )
    {
        Person* p = getPerson(line);
        persons[i] = *p;
        i++;
    }
    return persons;
}

Person* sort(Person* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].LastName > arr[j + 1].LastName)
            {
                auto temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            else if (arr[j].LastName == arr[j + 1].LastName)
            {
                if (arr[j].BirthYear < arr[j + 1].BirthYear) {
                    auto temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    return arr;
}

Person* printOldest(Person* arr, int n)
{
    Person* oldest = arr;
    for (int i = 0; i < n; i++) {
        if (oldest->BirthYear > arr[i].BirthYear)
        {
            oldest = &arr[i];
        }
    }
    cout << oldest->FirstName + " " + oldest->LastName;
    return oldest;
}


void printPersons(Person* arr, int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i].FirstName + " " + arr[i].LastName;
        cout << endl;
    }
}

int main() {
    string fileName = "persons_in.txt";
    int linesCount = getLinesCount(fileName);
    Person* persons = readPersons(fileName, linesCount);
    printPersons(persons, linesCount);

    Person* sortedPersons = sort(persons, linesCount);
    ofstream fout1;
    fout1.open("persons_out.txt");
    for (int i = 0; i < linesCount; i++) {
        fout1 << sortedPersons[i].FirstName + " " + sortedPersons[i].LastName << endl;
    }
    fout1.close();

    cout << "Oldest person: ";
    printOldest(persons, linesCount);

    int t;
    cin >> t;
    return 0;
}