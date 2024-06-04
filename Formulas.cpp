#include <iostream>
#include <string>

using namespace std;

void AirPressure(int perk) {
    int reduct = 0;
    if (perk = 0) {
        cout << "the dmg reduction is: 0" <<  endl;
    }
    else if (perk = 1){
        reduct = 15;
        cout << "the dmg reduction is: " << reduct << "'%' at max stacks"<<  endl;
    }
    else {
        reduct = 15 + (5 * perk);
        cout << "the dmg reduction is: " << reduct << "'%' at max stacks"<<  endl;
    }
}

void BastionBallista(int perk) {
    int dmg = 1 + (0.5 * perk);
    cout << "the base dmg is: " << dmg << endl;
    cout << "this is the base dmg, Bastion Ballista also scales with dex and earth" << endl;
}

int main() {

}