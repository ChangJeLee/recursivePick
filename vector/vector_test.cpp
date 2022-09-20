#include <vector>
#include <iostream>
using namespace std;

//Dynamic size array
// Sequence container

class Cat
{
public:
	explicit Cat(int age) : mAge{age}{}   // explicit�� ���� �˾ƾ� �� > ������ ����ȯ�� �� �� ���� ����� ������� ����ȯ ���� 
										  // 
	void speak() const
	{
		cout << "meow~" << mAge << endl;
	}
private:
	int mAge;
};

int main()
{
	vector<Cat> cats;
	cats.emplace_back(Cat(1));
	cats.emplace_back(Cat(2));
	cats.emplace_back(Cat(3));
	cats.emplace_back(Cat(4));

	for (const auto& cat : cats)
	{
		cat.speak();  //���������� ǵ������ �� 
	}

	int* numsPtr = new int[5];  // numsPtr�� �� ������ �������� 5���� �迭�� �ǹ���
	for (int i = 0; i < 5; i++)
	{
		numsPtr[i] = i;
	}
	delete numsPtr;				// delete�� �ؾ������ �Ǹ��� �޸� leak�� �Ͼ ���� ���� 
							// ������ ���� C++���Ĵٵ� ���̺귯�� ������ �̷��� ���̳��� ��̸� �����̳ʷ� �����ϴµ� �̰� ������
	vector<int> nums(5);
	for (int j = 0; j < 5; j++)
	{
		nums[j]=j;
	}
	
	vector<int> number{ 0,1,2,3,4 };   //���� for���̶� ���� 

	cout << nums.size() << endl;

	nums.emplace_back(5);
	cout << nums.size() << endl;

	nums.pop_back();
	cout << nums.size() << endl;

	//���� ���ͷ���Ʈ
	for (std::size_t idx = 0; idx < nums.size(); idx++)
	{
		cout << nums[idx] << endl;
	}

	for (auto itr = nums.begin(); itr != nums.end(); itr++)
	{
		cout << (*itr) << endl;
	}

	//ranged for ��������ϰ� ����ȭ�� 
	for (const int& num : nums) // for ���� �ȿ��� element�� �ٲ����� �ʴ´ٸ� const�� �ٿ��ִ°� �� ��������
	{
		cout << num << endl;
	} 


}

//C:\Users\je228\source\repos\ChangJeLee\recursivePick\