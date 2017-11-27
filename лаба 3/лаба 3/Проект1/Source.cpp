// ������� 3.1
//� ��������� ����� INPUT.TXT �������� ����� ����� ����� ������, ��������, � ��������� �����. �� ���� �������� �����, ��� ������������� ���������� ������������ ������ ���� �����, ������������� �� ����������. �������� ����������� ������ ������� � ��������� ���� OUTPUT.TXT


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
	ifstream entry("INPUT.txt");
	ofstream exit("OUTPUT.txt");
	int* m = new int[255];
	for (int i = 0; i < 255; i++)
		m[i] = 0;
	int k = 0;
	if (!entry.is_open()) {
		cout << "ERROR!";
	}
	else
	{ 
	while (!entry.eof())
	{
		char* b = new char[255];
		entry.getline(b, 255);


		for (int i = 0; i < 255; i++)
		{
			if (b[i] == '\0')
				break;
			if (b[i] == ' ')
			{
				k++;
			}
			else
			{
				if (m[k] == 0)// ��������� ������, ��� �� ������������� �����
				{
					m[k] = atoi(b + i);
					for (int z = 1; z <= k; z++)
						for (int j = z; j>0 && m[j - 1]>m[j]; j--)
							swap(m[j - 1], m[j]);

				}
			}

		}

	}
	for (int i = 0; i <= k; i++)
		exit << m[i] << " ";
	}
entry.close();
	exit.close();

	return 0;
}