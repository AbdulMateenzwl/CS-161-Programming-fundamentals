#include <iostream>

using namespace std;
struct laptopType
{
    string manufacturerName;
    string model;
    float processor;
    int RAM;
    int hardDrive;
    int generation;
    int price;
    laptopType *next;
};
laptopType *head = NULL;
void takeInput();
laptopType *getLastRecord(laptopType *temp);
void addRecord(string manu, string mod, float pro, int ram, int hard,
               int gene, int pri);
void printSingleRecord(laptopType *l);
void displayAllRecords();
void takeInput()
{
    string manu;
    string model;
    float pro;
    int ram, hard, gene, price;
    cout << "Enter Manufacturer Name: ";
    cin >> manu;
    cout << "Enter Model: ";
    cin >> model;
    cout << "Enter Processor Speed: ";
    cin >> pro;
    cout << "Enter RAM: ";
    cin >> ram;
    cout << "Enter Hard Drive Size: ";
    cin >> hard;

    cout << "Enter Generation: ";
    cin >> gene;
    cout << "Enter Price: ";
    cin >> price;
    addRecord(manu, model, pro, ram, hard, gene, price);
}
laptopType *getLastRecord(laptopType *temp)
{
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}
void addRecord(string manu, string mod, float pro, int ram, int hard,
               int gene, int pri)
{
    laptopType *record = new laptopType;
    record->manufacturerName = manu;
    record->model = mod;
    record->processor = pro;
    record->RAM = ram;
    record->hardDrive = hard;
    record->generation = gene;
    record->price = pri;
    record->next = NULL;
    if (head == NULL)
    {
        head = record;
    }
    else
    {
        laptopType *temp = getLastRecord(head);
        temp->next = record;
    }
}