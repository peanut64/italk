/**
    This file is a part of Italk.
    Author: peanut64 <64peanuts@gmail.com>
    Date: 09-04-2014
    Copyright: (C) Copyright, the author. Licensed under the GNU GPLv3
    Description: The configuration class for the application represents
                 a configuration object that is used to store configuration
                 data retrieved from a configuration file. This object can
                 then be used to set the configuration of the application
                 during the lifetime of the application.

**/

#include <vector>
#include <string>
using namespace std;

class ChatConf{
//This class represents a configuration object that is used by the
//application to refer for it's configuration data.
private:
    int default_chat_type;      //Is single chat or group chat selected by default?
    vector<string> send_file_type;     //types of files to send (to prevent sending of infected files- is that possible or has it been implemented?)
    string userid;      //Users ID/name
    string location;    //User's location
    int ipaddress;      //User's IP address
    int autoget_c_list;     //Get the client list automatically on startup
    int autochat;   //Start chatting automatically if user is online
    vector<string> roster;      //list of users for autochat
    int autogchat;      //Start a group chat automatically if the group ID has any online clients
    vector<string> groster;     //list of groups for autochat

public:
    //get and set methods come here
    //To be implemented


};
