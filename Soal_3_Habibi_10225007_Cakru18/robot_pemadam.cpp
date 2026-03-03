#include <iostream>
#include <string>
using namespace std;

class RobotPemadam{
    private:
        int jarak;
        string status;
    public:
        void inputSensor(int distance){
            jarak = distance;
        }
        void prosesLogika(){
            if (jarak > 20){
                status = "Maju Mencari Api";
            } else if (jarak <= 20 && jarak > 5){
                status = "UDAH DKET NIH BRAY";
            } else {
                status = "Posisi Tepat! gas semprot kali ya!";
            }
        }
        void cetakStatus(){
            cout << "Sensor: " << jarak << " cm -> Action: " << status << endl;
        }
};

int main(){
    RobotPemadam Rodam;
    int jarak;
    cin >> jarak;
    while (jarak != 67){
        Rodam.inputSensor(jarak);
        Rodam.prosesLogika();
        Rodam.cetakStatus();
        cin >> jarak;
    }

    return 0;
}