#pragma once
namespace {
	// 이 함수는 이 파일 안에서만 사용할 수 있습니다.
	// 이는 마치 static int OnlyInThisFile() 과 동일합니다.
	int OnlyInThisFile() 
	{
		return 1;
	}

	// 이 변수 역시 static int x 와 동일합니다.
	int only_in_this_file = 0;
   // namespace
}