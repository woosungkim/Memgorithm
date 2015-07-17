///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//char messenger[6 + 1];
//char message[25 + 1];
//int msgLen = 0;
//int messengerLen = 0;
//
//void decode(char messenger); //decode function
//
//int main()
//{
//
//	int nCount;		/* 문제의 테스트 케이스 */
//
//	cin >> nCount;	/* 테스트 케이스 입력 */
//
//	for (int itr = 0; itr<nCount; itr++)
//	{
//
//		cout << "#testcase" << (itr + 1) << endl;
//
//		/*
//
//		알고리즘이 들어가는 부분
//
//		*/
//
//		//for (int i = 0; i < 26; i++)
//		//	message[i] = '\0';
//
//		//for (int i = 0; i < 6; i++)
//		//	messenger[i] = '\0';
//
//		cin >> messenger >> message;
//
//		for (int i = 0; message[i] != '\0'; i++) 
//			msgLen++;
//		for (int i = 0; messenger[i] != '\0'; i++)
//			messengerLen++;
//
//		for (int i = messengerLen - 1; i >= 0; i--)
//			decode(messenger[i]);
//		
//		cout << message << endl;
//
//		msgLen = 0;
//		messengerLen = 0;
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//}
//
//void decode(char m) //decode function
//{
//	char decodeMsg[25 + 1];
//
//	switch (m)
//	{
//		case 'J':
//		{
//			for (int i = 0; i < msgLen; i++)
//				decodeMsg[i] = message[(((msgLen - 1) + i) % msgLen)];
//			break;
//		}
//		case 'C':
//		{
//			for (int i = 0; i < msgLen; i++)
//				decodeMsg[i] = message[((msgLen + 1) + i) % msgLen];
//			break;
//		}
//		case 'E':
//		{
//			for (int i = 0; i < msgLen/2; i++)
//				decodeMsg[i] = message[(((msgLen + 1) / 2)+i)%msgLen];
//			if (msgLen % 2)
//				decodeMsg[msgLen / 2] = message[msgLen / 2];
//			for (int i = 0; i < msgLen / 2; i++)
//				decodeMsg[i+((msgLen+1)/2)] = message[i];
//			break;
//		}
//		case 'A':
//		{
//			for (int i = 0; i < msgLen; i++)
//				decodeMsg[i] = message[(msgLen-1-i)];
//			break;
//		}
//		case 'P':
//		{
//			for (int i = 0; i < msgLen; i++)
//			{
//				if (message[i] == '0')
//					decodeMsg[i] = '9';
//				else if (message[i] >'0' && message[i] <= '9')
//					decodeMsg[i] = message[i] - 1;
//				else
//					decodeMsg[i] = message[i];
//			}
//			break;
//		}
//		case 'M':
//		{
//			for (int i = 0; i < msgLen; i++)
//			{
//				if (message[i] == '9')
//					decodeMsg[i] = '0';
//				else if (message[i] >= '0' && message[i] < '9')
//					decodeMsg[i] = message[i] + 1;
//				else
//					decodeMsg[i] = message[i];
//			}
//			break;
//		}
//	}
//
//	decodeMsg[msgLen] = '\0';
//
//	for (int i = 0; i < msgLen; i++)
//		message[i] = decodeMsg[i];
//
//	message[msgLen] = '\0';
//}