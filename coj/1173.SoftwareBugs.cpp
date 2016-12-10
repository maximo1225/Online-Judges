#include <iostream>
#include <string>

using namespace std;

string search(string pat, string txt)
{
    for (int i = 0; i <= txt.size() ; i++)
    {
    	if(txt == "BUG")
        		txt = "";
        int j;
        for (j = 0; j < 3; j++)
        {
            if (txt[i+j] != pat[j])
                break;
        }
        if (j == 3)  
        {
        	txt.erase(i, 3);
          	i = 0;
        }
    }
    return txt; 
}

int main() {
	string data;
	while(getline(cin, data)){
		if(data.size() == 0)
			cout << endl;
		else
			cout << search("BUG", data) << endl;	
	}
	return 0;
}
