#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
	// ģ������ : ��� ���̰� K ����
	// ���� ģ�� ���� : ģ���߿��� �̸� ���̰� ����

	/* input */
	long count = 0;
	int N, K; // number of students, limit of gap
	string name;
	queue<int> length[21]; //�� �̸� ���̿� �ش��ϴ� �ڸ��� ����� ������ ť

	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> name;
		int name_len = name.length();

    /* process */
		if (!length[name_len].empty())
		{
			while ((!length[name_len].empty()) && i - length[name_len].front() > K)
			{
				length[name_len].pop();
			}
			count += length[name_len].size();
		}
		length[name_len].push(i);
	}

	/* output */
	cout << count;
}