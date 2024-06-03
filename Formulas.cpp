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
        cout << "the dmg reduction is: " << reduct << " at max stacks"<<  endl;
    }
    else {
        reduct = 15 + (5 * perk);
        cout << "the dmg reduction is: " << reduct << " at max stacks"<<  endl;
    }
}

int main() {

}