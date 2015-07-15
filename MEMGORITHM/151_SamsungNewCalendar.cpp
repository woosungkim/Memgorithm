///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
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
//		/*
//
//		알고리즘이 들어가는 부분
//
//		*/
//
//		long long nMonth, nDayPerMonth, nDayPerWeek;
//		cin >> nMonth >> nDayPerMonth >> nDayPerWeek;
//
//		long long nLine = 0;
//		long long firstDay = -1, endDay = -1; // 0이 첫날
//
//		int nowDay = 0;
//		long long repeatMonth = 0;
//		bool isRepeat = false;
//
//		int diff;
//		
//		// 각 달의 첫째 날 차 계산
//		for (int j = 0; j < nDayPerMonth; j++)
//		{
//			nowDay++;
//			if (nowDay % nDayPerWeek == 0)
//				nowDay -= nDayPerWeek;
//		}
//		diff = nowDay;
//		
//		// 반복되는 달과, 그 라인 수 계산
//		endDay = diff-1;
//		for (int i = 0; firstDay != 0; i++)
//		{
//			if (i == 0)
//				firstDay = 0;
//
//			nLine += (nDayPerMonth - (nDayPerWeek - firstDay) - (endDay + 1)) / nDayPerWeek;
//			if (nDayPerWeek - firstDay > 0)// 첫줄에 놓이는 날 수
//				nLine++;
//			if ((endDay + 1) > 0) // 마지막줄에 놓이는 날 수
//				nLine++;
//
//			firstDay = (endDay + 1) % nDayPerWeek;
//			endDay = (firstDay + nDayPerMonth - 1) % nDayPerWeek;
//
//			repeatMonth++;
//		}
//	
//		// 반복 제거
//		int repeatLine = nLine;
//		if ( repeatMonth )
//		nLine = nLine*(nMonth/repeatMonth);
//
//		int remainMonth = nMonth%repeatMonth;
//
//		endDay = (nowDay + nDayPerMonth - 1) % nDayPerWeek;
//
//		// 남은 달 계산
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
//			if ( nDayPerWeek-firstDay > 0 )// 첫줄에 놓이는 날 수
//				nLine++;
//			if ( (endDay+1) > 0 ) // 마지막줄에 놓이는 날 수
//				nLine++;
//		}
//
//		// 출력
//		cout << nLine << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}