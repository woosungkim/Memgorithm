///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//int main()
//{
//
//	int nCount;		/* ������ �׽�Ʈ ���̽� */
//
//	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */
//
//	for (int itr = 0; itr<nCount; itr++)
//	{
//
//		cout << "#testcase" << (itr + 1) << endl;
//		/*
//
//		�˰����� ���� �κ�
//
//		*/
//
//		long long nMonth, nDayPerMonth, nDayPerWeek;
//		cin >> nMonth >> nDayPerMonth >> nDayPerWeek;
//
//		long long nLine = 0;
//		long long firstDay = -1, endDay = -1; // 0�� ù��
//
//		int nowDay = 0;
//		long long repeatMonth = 0;
//		bool isRepeat = false;
//
//		int diff;
//		
//		// �� ���� ù° �� �� ���
//		for (int j = 0; j < nDayPerMonth; j++)
//		{
//			nowDay++;
//			if (nowDay % nDayPerWeek == 0)
//				nowDay -= nDayPerWeek;
//		}
//		diff = nowDay;
//		
//		// �ݺ��Ǵ� �ް�, �� ���� �� ���
//		endDay = diff-1;
//		for (int i = 0; firstDay != 0; i++)
//		{
//			if (i == 0)
//				firstDay = 0;
//
//			nLine += (nDayPerMonth - (nDayPerWeek - firstDay) - (endDay + 1)) / nDayPerWeek;
//			if (nDayPerWeek - firstDay > 0)// ù�ٿ� ���̴� �� ��
//				nLine++;
//			if ((endDay + 1) > 0) // �������ٿ� ���̴� �� ��
//				nLine++;
//
//			firstDay = (endDay + 1) % nDayPerWeek;
//			endDay = (firstDay + nDayPerMonth - 1) % nDayPerWeek;
//
//			repeatMonth++;
//		}
//	
//		// �ݺ� ����
//		int repeatLine = nLine;
//		if ( repeatMonth )
//		nLine = nLine*(nMonth/repeatMonth);
//
//		int remainMonth = nMonth%repeatMonth;
//
//		endDay = (nowDay + nDayPerMonth - 1) % nDayPerWeek;
//
//		// ���� �� ���
//		for ( long long i=0; i<remainMonth; i++ )
//		{
//			if ( i == 0 )
//				firstDay = 0;
//			else
//				firstDay = (endDay+1)%nDayPerWeek;
//			endDay = (firstDay+nDayPerMonth-1)%nDayPerWeek;
//
//			nLine+= (nDayPerMonth-(nDayPerWeek-firstDay)-(endDay+1))/nDayPerWeek;
//
//			if ( nDayPerWeek-firstDay > 0 )// ù�ٿ� ���̴� �� ��
//				nLine++;
//			if ( (endDay+1) > 0 ) // �������ٿ� ���̴� �� ��
//				nLine++;
//		}
//
//		// ���
//		cout << nLine << endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}