#include <iostream>
using namespace std;
int main()
{
    int f,C,C1,C2,R,R1,R2,R3,R4;
    for (int f = 100000; f <= 999999; f++) {
            C = ((f-(f%100000))/100000);
            R = (f%100000);
            C1 = (R - (R%10000))/10;
            R1 = (R%10);
            R2 = (f % 10000);
            R3 = R2-(R2%1000);
            R4 = R3/10;
            C2 = C1/100;
            if (f ==(R1*100000)+ (C1*10) + R3 + R4 + C2 + C){
            cout << f << endl;
        }
    }
    cout << "-------" << endl;
    cout << "VM24042 Jonás Eduardo Villalobos Morán" << endl;
    // Comentario para un "cambio"
    cout << "HotFix -1 Cambio 28/4/2024 si" << endl;
    system("pause");
    return 0;
    
}
