#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {

    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    // vector 를 sorting 한다.

    // ? : 함수 매개변수로 받은 vector를 sort 할수있는가??


    for (int i = 0; i < completion.size(); i++)
    {
        // sorting 된 두 벡터 비교하여, 불일치할때의 participant 반환

        if (participant[i] != completion[i])
        {
            return participant[i];
        }
    }
}

int main() {

    vector<string> v1;
    vector<string> v2;

    v1.push_back("leo");
    v1.push_back("mina");
    v1.push_back("Teo");
    v1.push_back("leo");

    v2.push_back("mina");
    v2.push_back("leo");
    v2.push_back("Teo");


    string s = solution(v1, v2);

    cout << s;

    return 0;
}
