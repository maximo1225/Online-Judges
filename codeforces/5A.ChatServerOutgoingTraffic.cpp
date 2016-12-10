#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string message, cleanmessage;
	vector<string> users;
	int send = 0, status = 0, sendstatus = 0, traffic = 0;
	while(getline(cin, message)){

		for (int i = 0; i < message.length(); ++i)
		{
			if(message[0] == '+' || message[0] == '-')
				cleanmessage += message[i+1];

		}
		if(message[0] == '+') users.push_back(cleanmessage);
		else if(message[0] == '-'){
			for (int i = 0; i < users.size(); ++i)
			{
				if(users[i] == cleanmessage)
					users.erase(users.begin()+i);

			}
		}
		for (int i = 0; i < message.length(); ++i)
		{
			if(message[i] == ':'){
			 status = 1;
			 sendstatus = 1;
			 continue;
			}
			if(status == 1) send++;
		}
		status = 0;
		if(sendstatus == 1){
			for (int i = 0; i < users.size(); ++i)
			{ 
				traffic += send;
			}
			send = 0;
			sendstatus = 0;
		}
		cleanmessage = "";
 	}

 	cout << traffic << endl;
	
	return 0;
} 
