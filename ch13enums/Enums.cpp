#include<iostream>
using size = int;

enum Cars {
    SVJ,
    RevultoSV,
    Stingray,
    Camaero,
    Viper
};
namespace windbroken{
    enum Wind{
        fast,
        slow,
        nothing
    };

}
namespace pets{

    enum ranked{
        dog = 5,
        cat = 3,
        pig = -3,
        sugarglider,
        fish,
        hamster = 2,
        whitepetmouse = 4
    };
}
int main(){

    size laes {7};
    Cars favcar {SVJ};
    Cars favmusclecar {Camaero};
    windbroken::Wind todayWind {windbroken::nothing};
    [[maybe_unused]] pets::ranked cutePet {pets::whitepetmouse};
    pets::ranked friendlyPet {pets::dog};
    Cars NiceOnes {static_cast<Cars> (2) };
    
    std::cout<<NiceOnes<<"\n";

    NiceOnes = static_cast<Cars>(4);


    std::cout<<laes<<std::endl;
    std::cout<<favcar<<std::endl;
    std::cout<<favmusclecar<<std::endl;
    std::cout<<todayWind<<std::endl;
    //std::cout<<cutePet<<std::endl;
    std::cout<<friendlyPet<<"\n";
    std::cout<<NiceOnes<<"\n";

    if(favcar == SVJ){
        std::cout<<"The Lamborghini u just choose is Best Sounding V12"<<"\n";
    }
    else if(favcar == RevultoSV){
        std::cout<<"Fastest Lamborghini in my opnion"<<"\n";
    }
    else {
        std::cout<<"Pretty Good Choice ig"<<std::endl;
    }

    
}
