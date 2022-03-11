#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> m;


    // map 사용법

    // map<자료형, 자료형> 으로 선언

    // key 값 찾기 : m.count(값) -> 0or 1로 반환

    // 삽입하기 : m.insert(key, value)

    // value 값 변경하기 : m[key] = 변경할값

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

    // a b c 가 있을때

    // a + b + c + ab + ac + bc + abc = (a + 1)(b + 1)(c + 1)  이 원리를 이용하면 아주 쉽게 풀린다!!!

    // 알고리즘을 짜기 전에, 수학적으로 쉽게 수식바꾸는법을 먼저 생각하자!

    return answer - 1;
}