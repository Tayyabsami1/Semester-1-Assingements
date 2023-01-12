
/*
    Name : Tayyab Kamran Sami
    Section : SE - F
    Roll No : 22I-2505
*/

#include <iostream>
#include <unistd.h>
#include <iomanip>
using namespace std;
bool validate(int c){
    if(c!=1 &&  c!=0){
        cout<< "invalid input "<< endl;
        exit(0);
    }
}
// allowing the user to validate input
// validating filetype to be in the given modes
bool validate(char fileType)
{
    if (fileType != 'T' && fileType != 'M' && fileType != 'P' && fileType != '!')
    {
        return false;    
    }


    return true;
}


// validating bandwidth of the server which shouldn't be negative 
bool validate(float bandwidth)
{
    if (bandwidth < 0)
    {
        cout<< "The bandwidth of the application is negative!"<< endl;

        return false;
    }

    return true;
}

// stops the application, terminates the program
void stopApplication()
{
    cout << "Network Application stopped!" << endl;
    
    sleep(1);
    exit(0);
}

// prints the message sent to the client
void networkSend(string returnMessage, string filename)
{
    cout << returnMessage << filename;
}


// following functions checks if file is saved, wifi is on and bandwitch greater than 10
void checkMessageConditions(bool fileSaved, bool wifi, float bandwidth, string filename)
{
    if (fileSaved == true)
    {
        if (wifi == true)
        {
            if (bandwidth > 10)
            {
                // if all the conditions are true, calling the function that would send message to client
                networkSend("Hello, welcome to the network's application! The file sent was : ", filename);
            }

            // if bandwidth is lesser than 10, print error
            else 
            {
                cout<< "Bandwidth is lesser than 10!"<< endl;;
                exit(0);
            }
        }
    
        // if wifi is not on, print error
        else 
        {
            cout<<" Wifi is turned off!"<< endl;
            exit(0);
        }
    }

    // if file isn't saved, print error
    else
    {
        cout<<"Error - File hasn't been saved!";
    }
}


// gets the file type
char getFileType(char type)
{
    return type;
}


bool saveFile(string location, string filename)
{
    // if called for the first time, displays the message of saving the file at a location
    static int i = 0;
    if (i == 0)
    {
        cout << "(Application to Client) The file named " << filename << " has been stored at the location " << location << endl;
        i++;

        return true;
    }
    // returns true if called for the second time as well, showcasing that the file has been saved
    return true;
}

// saves file upon given condition of bandwidth and takes input of filetype, prints error if invalid type is given
void fileSaver(string filename, float bandwidth)
{
    if (bandwidth > 5)
    {
        char type;

        cout << "Choose from the following file types : ";
        cout << endl << "T = txt\nM = mp4\nP = mp3\n! = invalid\n\nYour selection? ";
        cin >> type;

        // validation the file type input
        if (validate(type) == false)
        {
            cout<< "Invalid input "<< endl;
            exit(0);
       }
        // calling getFileType function to save files in specific location and format
        if (getFileType(type) == 'T')
        {
            saveFile("Text files", filename);
        }

        else if (getFileType(type) == 'P')
        {
            saveFile("Sound files", filename);
        }

        else if (getFileType(type) == 'M')
        {
            saveFile("Video files", filename);
        }

        else if (getFileType(type) == '!')
        {
            cout<< "Invalid file type encountered!"<< endl;
        }
    }
}




// starts the application
bool startApplication()
{
    cout << "Network Application started" << endl << endl;
    sleep(1);
    
    return true;
}


// calls the functon that starts the application upon given conditions, else prints errors
void networkStartvalidator(bool wifiConnected, float bandwidth)
{
    // starting the application
    if (wifiConnected == true && bandwidth > 20)
    {
        // starting the application and checking it's status
        if (startApplication() == true)
        {
            // taking input of filename that is to be sent to client through the network
            string filename;
        
            cout << "Enter the filename you want to send : ";
            cin.ignore();
            getline(cin, filename);
    
            // if application has started, calling the function that takes details of file to be sent
            fileSaver(filename, bandwidth);
        }
    }
    
    // terminating program if less bandwidth available to run application
    if (bandwidth <= 20)
    {
        cout<< "Less bandwidth available than required to run the application."<< endl;
        exit(0);

        // terminating program if wifi isn't connected
        if (wifiConnected == false)
        {
            cout<< "The wifi isn't connected; hence the application can't start!"<< endl;
            exit(0);
        }
        
        cout << "Program terminated!";
        exit(0);
    }

    // terminating program if wifi isn't connected
    if (wifiConnected == false)
    {
        cout<< "The wifi isn't connected; hence the application can't start! Program terminated!";
        exit(0);
    }
}


// returns available bandwidth, and input is validated
float availableBandwidth()
{
    float bandwidth;
    cout << "Available bandwidth of server? ";
    cin >> bandwidth;

    // validating bandwidth upto 1 correction limit
    if (validate(bandwidth) == false)
    {
        cout<< "Invalid input "<< endl;
        exit(0);
    }
    
    return bandwidth;
}


// checks if wifi is turned on and returns true, else false
bool isConnected()
{
    bool wifi;
    cout << "Is wifi connected? Input 1 for yes, otherwise 0 : ";
    cin >> wifi;
    validate(wifi);

    // returns true if input is non-zero, otherwise false
    return wifi;
}




int main()
{
    
    networkStartvalidator(isConnected(), availableBandwidth());

    return 0;
}
