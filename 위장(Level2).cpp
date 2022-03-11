#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> m;


    // map ����

    // map<�ڷ���, �ڷ���> ���� ����

    // key �� ã�� : m.count(��) -> 0or 1�� ��ȯ

    // �����ϱ� : m.insert(key, value)

    // value �� �����ϱ� : m[key] = �����Ұ�

    for (int i = 0; i < clothes.size(); i++)
    {
        if (m.count(clothes[i][1]))
            m[clothes[i][1]] += 1;
        else
            m.insert({ clothes[i][1], 1 });
    }


    for (auto iter = m.begin(); iter != m.end(); iter++)
    {
        answer *= iter->second + 1;
    }

    // a b c �� ������

    // a + b + c + ab + ac + bc + abc = (a + 1)(b + 1)(c + 1)  �� ������ �̿��ϸ� ���� ���� Ǯ����!!!

    // �˰����� ¥�� ����, ���������� ���� ���Ĺٲٴ¹��� ���� ��������!

    return answer - 1;
}