#include <iostream>
using namespace std;

struct pipe {

    int id;
    int diameter;
    float lenght;
    bool v_remonte;

};

void PrintPipe(pipe& pipe) {

    cout << endl
        << "ID: " << pipe.id << endl
        << "Diamtr: " << pipe.diameter << endl
        << "Dlina: " << pipe.lenght << endl
        << "Status: " << pipe.v_remonte << endl;
}

pipe AddPipe() {

    pipe p; // = { 0, 1420 };
    p.id = 0;
    cout << "Enter diametr" << endl;
    cin >> p.diameter;
    return p;

}

int main()
{
    pipe p = AddPipe();   
    PrintPipe(p);
}