//include files
//2023,07,04
#include <iostream> 

//constants
#define speedMph 80


//main function
//fps = feet per second, mph = miles per hour, ipm = inches per minute, kmh = kilometers per hour, fpf = furlongs per fortnite
int main(){
    //mph to fps, 1 mile = 5280 feet, 3600 seconds in an hour
    float speedFps = (speedMph * 5280 / 60 / 60);
    std::cout << "80 Mph in feet per second is: " << speedFps << std::endl;

    //mph to ipm, 1 mile = 63360 inches, 60 minutes in an hour
    float speedIpm = (speedMph * 63360 / 60);
    std::cout << "80 Mph in inches per minute is: " << speedIpm << std::endl;   

    //mph to kmh, 1 mile = 1.60934 km
    float speedKmh = (speedMph * 1.60934);
    std::cout << "80 Mph in kilometers per hour is: " << speedKmh << std::endl;

    //mph to fpf
    float speedFpf = (speedMph * 7.99998 * 24 * 14);
    std::cout << "80 Mph in furlongs per fortnite is: " << speedFpf << std::endl;
    return 0;
}
