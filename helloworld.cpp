#include <vector>

using namespace std;

class HelloWorld
{
    public:
        void Print(ostream& stream)
        {
            vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};

            for (const string& word : msg)
            {
                stream << word << " ";
            }
        }
};