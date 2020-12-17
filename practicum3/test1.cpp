// Create a class Neuron with the data members listed below:

// transmitter: string, for the type of neurotransmitter this neuron uses. (initialize to an empty string)
// inputWeight: floating point value as a double, for the value scales the neuron's input value. (initialize to 0.5)
// threshold: floating point value as a double, for the firing threshold of the neuron. (initialize to 10)
// Include the following member functions:
// default constructor, 
// a constructor with parameters for each data member (in the order given above), 
// getters and setter methods for each data member named in camel-case.  For example, if a class had a data member named myData, the class would require methods named in camel-case: getMyData and setMyData. 
// bool activate (double input): This function takes in an input value, multiplies that value by the input weight. The resulting value is the activationQuotient. Return true if activationQuotient is greater than or equal to the threshold, else return false.

#include <iostream>
using namespace std;

class Neuron{
    public:
        Neuron(){
            transmitter="";
            inputWeight=0.5;
            threshold=10;
        }
        Neuron(string transmitter_in, double inputWeight_in, double threshold_in){
            transmitter=transmitter_in;
            inputWeight=inputWeight_in;
            threshold=threshold_in;
        }
        string getTransmitter(){
            return transmitter;
        }
        void setTransmitter(string transmitter_in){
            transmitter=transmitter_in;
        }
        double getInputWeight(){
            return inputWeight;
        }
        void setInputWeight(double inputWeight_in){
            inputWeight=inputWeight_in;
        }
        double getThreshold(){
            return threshold;
        }
        void setThreshold(double threshold_in){
            threshold=threshold_in;
        }
        bool activate (double input){
            double activationQuotient;
            activationQuotient=input*inputWeight;
            if(activationQuotient >= threshold){
                return 1;
            }
            else{
                return 0;
            }
        }

    private:
        string transmitter;
        double inputWeight;
        double threshold;
};

