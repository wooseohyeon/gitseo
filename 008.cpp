//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//using namespace std;

//��ǲ�� �ٵ� ���
//return ���ϻӾƴ϶� ������������� ����Ѵ�.
// ������Ptr(*)(���۷���)���ٿ��ش� &�������Ͱ��������Ų��.
// �����ҷ����°������۷��ö���Ѵ�

//void Swap(int *PtrA, int *PtrB)
//{
//    int C = *PtrA;
//    // PtrA. �갡 A�� �ּҸ� ������ �ִ� ��
//    // PtrB. �갡 B�� �ּҸ� ������ �ִ� ��
//    // *PtrA = 10; A�� �ּҷ� ���� �ű⿡ �ִ� ���� 10���� �ٲ��
//    *PtrA = *PtrB; // A�� �ּҷ� ���� �� ����, B�� �ּҿ� �ִ� ������ �ٲ��
//    *PtrB = C;
//}
//   
 //int main()
 //{
 //    int A=5;
 //    int B=10;
 //    
 //    cout << "�ٲ�� �� : " << A << ", " << B << endl;
 //    Swap(&A, &B);
 //    cout << "�ٲ� �� : " << A << ", " << B << endl;
 //    cout << "�ٲ� �� : " << &A << ", " << &B << endl;

 //    //int *PtrA = &A;
 //    //int *PtrB = &B;
 //    

 //    return 0;

 //}
//int FindMin(int *NumberArray, int Size)
//{
//	//���� ��� �迭 10��¥���� �Է� �޾ҽ��ϴ�.
//	//�迭�̸�, ������
//	//�� �迭�� { 234, 34, 254, 437, 786, 34, 4676, 2, 1, 8 }
//	//�׷� �� 10���� ���� �߿��� �ּҰ��� ã�ƾ� �Ѵ�.
//	//NumberArray[0]�� 234
//	//NumberArray[1]�� 34
//	//NumberArray[2]�� 254
//	//NumberArray[3]�� 437
//	//NumberArray[4]�� 786
//	//NumberArray[5]�� 34
//	//NumberArray[6]�� 4676
//	//NumberArray[7]�� 2
//	//NumberArray[8]�� 1
//	//NumberArray[9]�� 8
//	//�ּҰ��� ã�� ���̵��. ��
//	//�տ������� ����
//	//NumberArray[0]�̶� NumberArray[1]�� ���� ���ؿ�
//	//NumberArray[0] < NumberArray[1] �̾�?
//	//if(NumberArray[0] < NumberArray[1])
//	//����� ��ǥ�� �ּҰ��� ã�°Ŵϱ� �׷� �ּҰ��� ������ ������ �־���մϴ�.
//	//int Min;
//	//Min���ٰ� �ּҰ��� �����Ұǵ�. �ϴ��� �� �� ���ؼ� ���� ���� �����ſ���.
//	//Min = ????
//	
//	int Min = 9999999; //���� �����Ҽ��ִ� ������ �־���Ѵ�
//
//	for (int i = 0; i < Size; i++)
//	{
//
//		if (Min > NumberArray[i])
//		{
//			Min = NumberArray[i];
//		}
//		/*if (Min > NumberArray[1])
//		{
//			Min = NumberArray[1];
//		}
//		if (Min > NumberArray[2])
//		{
//			Min = NumberArray[2];
//		}*/
//	}
//	return Min;
//	
////int Min = 9999999;
////	if (Min > NumberArray[0])
////	{
////		Min = NumberArray[0];
////	}
////	if (Min > NumberArray[1])
////	{
////		Min = NumberArray[1];
////	}
////	if (Min > NumberArray[2])
////	{
////		Min = NumberArray[2];
////	}
////	for (int i = 0; i < Size; i++)
////	{
////		
////		
////	}
//
//
//
//	//NumberArray[0]+= *NumberArray+1;
//	//
//	
//}

//int main()
//{
//	int A[] = {5,100,32,2};
//	cout << FindMin(A, 4) << endl;
//
//	return 0;
//}
//int& ((����)�������� �θ���)//'RefA = A'; : �ٸ��̸��̴�. �����̱⶧���� �̸��� ����������Ѵ�


//void Swap(char& A, char& B)
//{
//    char C = A;
//    A = B;
//    B = C;
//}
//
//// �ǽ�  11
//// ���ڿ��� �������� ��ȯ�ϴ� �Լ� ����
//void Reverse(char PtrCharacter[], int Size)
//{
//    for (int i = 0; i < Size / 2; i++)
//    {
//        char tmp = PtrCharacter[i];
//        PtrCharacter[i] = PtrCharacter[Size - 1 - i];
//        PtrCharacter[Size - 1 - i] = tmp;
//
//        // Swap(PtrCharacter[i], PtrCharacter[Size - 1 - i]);
//        cout << PtrCharacter[i] << ", " << PtrCharacter[Size - 1 - i] << endl;
//    }
//}
//int main()
//{
//    char ArrayChar[] = { 'A', 'B', 'C', 'D', 'E' };
//    Reverse(ArrayChar, 5);
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << *(ArrayChar + i) << endl;
//    }
//}