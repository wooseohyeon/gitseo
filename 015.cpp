//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//using namespace std;
//
//class People
//{
//public:
//    string Name;
//    int Age = 1;
//    bool IsDestroyed;
//   /* Point* CurrentPoint;*/
//    People* Friend;
//    People* Friends[200];
//
//
//    int* PtrNum;
//    
//
//    People()
//    {
//       
//    }
//
//    
//    People(string name, int age)
//    {
//        Name = name;
//        Age = age;
//        Secret = 0;
//
//        PtrNum = new int(100);
//        PtrNum = new int[5];
//
//        PtrPeople = new People(30);
//        PtrPeople = new People[200];
//
//        AnotherFriends = new People * [200];
//    }
//
//    ~People()
//    {
//        
//        IsDestroyed = true;
//        //delete CurrentPoint;
//        cout << "People Destroyed" << endl;
//    }
//
//    // People ��ü�� ���� ����� Ŀ���� ������ �����ϰ� ��� ������ ����ϱ�
//    // People ��ü�� ��� ��������� ������ �����ϱ�
//    void Print()
//    {
//
//    }
//
//    void Speak()
//    {
//
//    }
//
//    void Move()
//    {
//
//    }
//
//    void Think()
//    {
//        Secret += 1;
//    }
//
//    void Play()
//    {
//        Secret -= 1;
//    }
//
//    int GetSecret(int pri)
//    {
//        if (pri >= 2)
//            return Secret;
//
//        return -1;
//    }
//
//    int GetFCount()
//    {
//        return FCount;
//    }
//
//    void AddFriend(People* Friend)
//    {
//        AnotherFriends[FCount++] = Friend;
//    }
//
//
//
//    void RemoveLast(People* Friend)
//    {
//        if(FCount>0)
//        {
//            --FCount;
//        }   
//    }
//
//    void Remove(string Name) // Remove("Robot"); -> String Name = "Robot";
//    {
//        int index = 5;
//        PtrPeople[5] = PtrPeople[6];
//            PtrPeople[6] = PtrPeople[7];
//            PtrPeople[7] = PtrPeople[8];
//            PtrPeople[8] = PtrPeople[9];
//            int n = 100;
//            // �������� �� ������ ģ�� ã��
//            for (int i = 0; i < FCount; i++)
//            {
//                if (PtrPeople[i].Name == Name)
//                {
//                   
//                    index = i;
//                    break;
//                }
//                
//            }
//
//                // �Ʒ��� ���������� �ڿ� �ִ� ģ�� ������ 1ĭ�� ���� �ڵ�
//        for (int i = index; i < 9; i++)
//        {
//           
//            PtrPeople[i]= PtrPeople[i+1];
//        
//        }
//
//        
//    }
//
//private:
//    People* PtrPeople;
//    People AnotherFriends;
//    int FCount = 0;
//    int Secret;
//};
//
//enum class TrafficLight
//{
//
//
//    none,
//    red,
//};
//enum class characterstatusFiags
//{
//    None=1<<1,
//    Stun=1<<2,
//    Slow=1<<3,
//    Dot =1<<4,
//    dead,
//
//};
////Enum_class_flagsCharacterStatusFlags
//int bits;
//inline CharacterStatusFlags operator|(CharacterStatusFlags a, CharacterStatusFlags b)
//{
//    return static_cast<CharacterStatusFlags>(static_cast<int>(a) | static_cast<int>(b));
//}
//inline CharacterStatusFlags operator&(CharacterStatusFlags a, CharacterStatusFlags b)
//{
//    return static_cast<CharacterStatusFlags>(static_cast<int>(a) & static_cast<int>(b));
//}
//int main()
//{
//   
//    float moveSpeed = 10;
//    float effrct = .3;
//    characterstatusFiags status = characterstatusFiags::None;
//    status = characterstatusFiags::Stun;
//    status = status|characterstatusFiags::Slow;
//    cout << bitset<32>((int)status) << endl;
//
//    status = characterstatusFiags::None;
//
//    if (status == characterstatusFiags::Slow)
//        {
//
//        moveSpeed *= effect;
//
//        }
//    if (status == characterstatusFiags::Stun)
//    {
//
//        isStun = ture;
//
//
//     }
//
//
//
//
//
//}
//class Animal
//{
//
//    string Name;
//    int Lag;
//    int ear;
//    int tail;
//
//    virtual void cry() 
//    {
//
//
//
//    };
//    
//    void eat()
//    {
//    
//    
//    
//    }
//    void Print()
//    {
//        cout << "    " << endl;
//    }
//};
//class Pig : public Animal
//{
//    
//    virtual void cry() override
//    {
//
//        cout << "  �ܲ�  " << endl;
//
//    };
//
//       
//
//    
//    void eat()
//    {
//
//
//
//    }
//
//};