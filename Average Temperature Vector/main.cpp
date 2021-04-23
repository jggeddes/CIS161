#include<iostream>
#include<vector>

using namespace std;

int main(){
        //creating a vector of doubles
        vector<double> temperatures;

        //asking for input
        cout << "Enter temperatures (00) to quit: ";

        //reading first temperature
        double temp;
        cin >> temp;

        //looping as long as input is not 00
        while(temp!=00){
                //adding temp to temperatures, reading next temperature
                temperatures.push_back(temp);
                cin >> temp;
        }

        //initializing sum, average and count to 0
        double sum = 0, avg = 0;
        int count = 0;

        //looping through each temperature in even indices 0,2,4.. (even numbers)
        for(size_t i=0;i<temperatures.size();i+=2){
                //adding to sum
                sum+=temperatures[i];
                //incrementing count
                count++;
        }

        //if there is at least one temperature, finding average
        if(count>0){
                avg=sum/count;
        }

        //displaying average
        cout << "Average temperature for even days: " << avg << endl;
        return 0;
}
