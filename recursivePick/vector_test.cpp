#include <vector>
#include <iostream>
using namespace std;

//Dynamic size array
// Sequence container

class Cat
{
public:
	explicit Cat(int age) : mAge{age}{}   // explicit이 뭔지 알아야 함 > 묵시적 형변환을 할 수 없게 만들고 명시적인 형변환 가능 
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
		cat.speak();  //직접적으로 풩션콜을 함 
	}

	int* numsPtr = new int[5];  // numsPtr은 힙 영역에 연속적인 5개의 배열을 의미함
	for (int i = 0; i < 5; i++)
	{
		numsPtr[i] = i;
	}
	delete numsPtr;				// delete를 잊어버리게 되면은 메모리 leak이 일어날 수도 있음 
							// 제약이 있음 C++스탠다드 라이브러리 에서는 이러한 다이나미 어레이를 컨테이너로 제공하는데 이게 벡터임
	vector<int> nums(5);
	for (int j = 0; j < 5; j++)
	{
		nums[j]=j;
	}
	
	vector<int> number{ 0,1,2,3,4 };   //위의 for문이랑 같음 

	cout << nums.size() << endl;

	nums.emplace_back(5);
	cout << nums.size() << endl;

	nums.pop_back();
	cout << nums.size() << endl;

	//벡터 리터레이트
	for (std::size_t idx = 0; idx < nums.size(); idx++)
	{
		cout << nums[idx] << endl;
	}

	for (auto itr = nums.begin(); itr != nums.end(); itr++)
	{
		cout << (*itr) << endl;
	}

	//ranged for 가장안전하고 최적화됨 
	for (const int& num : nums) // for 루프 안에서 element를 바꿔주지 않는다면 const를 붙여주는게 더 안정적임
	{
		cout << num << endl;
	} 


}

//C:\Users\je228\source\repos\ChangJeLee\recursivePick\