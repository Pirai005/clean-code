#include <iostream>
using namespace std;
class RC{
    string vehicleRegNo;
     public:
	~RC(){
	cout<<"RC Destructed"<<endl;
     }
     RC(){
	 cout<<"RC Constructed"<<endl;
     }
	};
	//interface ,contract
class ITMPSValueProvider{
    public:
    virtual ~ITMPSValueProvider(){}
    virtual string getCurrentPressureValues()=0;
};
class NexDigitronTPMS:public ITMPSValueProvider{
public:
    ~NexDigitronTPMS(){
        cout<<"NexDigitronTPMS Destructed"<<endl;
        }
		NexDigitronTPMS(){
		cout<<"NexDigitronTPMS Constructed"<<endl;
        }
        string getCurrentPressureValues(){return "";} 
};
class BoschTPMS:public ITMPSValueProvider{
    public:
    ~BoschTPMS(){
        cout<<"BoschTPMS Destructed"<<endl;
        }
		BoschTPMS(){
		cout<<"BoschTPMS Constructed"<<endl;
        }
        string getCurrentPressureValues(){return "";} 
};
 
class Engine{
 
    public:
	~Engine(){
            cout<<"Engine Destructed"<<endl;
        }
      Engine(){
            cout<<"Engine Constructed"<<endl;
			}
	};
 
class Car{
	Engine engine;
    ITMPSValueProvider * tpms;
    string regNumber;
	public:
	Car(ITMPSValueProvider* ptr):tpms{ptr}{
		cout<<"Car Constructed"<<endl;
	}
	~Car(){
			cout<<"Car Destructed"<<endl;
		}
	void installTPMS(ITMPSValueProvider* ptr){
			tpms=ptr;
	}
};
 
void buildCar(BoschTPMS* ptr){
    Car alto{ptr};
}
void buildCar(NexDigitronTPMS* ptr){
    Car swift{ptr};
}
 
 
int main() {
 
    // Write C++ code here
	BoschTPMS bTpms;
	NexDigitronTPMS ndTpms;
    buildCar(&bTpms);
	buildCar(&ndTpms);
    return 0;
 
}
