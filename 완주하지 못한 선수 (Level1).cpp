#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {

    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    // vector �� sorting �Ѵ�.

    // ? : �Լ� �Ű������� ���� vector�� sort �Ҽ��ִ°�??


    for (int i = 0; i < completion.size(); i++)
    {
        // sorting �� �� ���� ���Ͽ�, ����ġ�Ҷ��� participant ��ȯ

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
