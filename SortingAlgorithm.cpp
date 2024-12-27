// 첫번째 도전 과제입니다!!
#include <iostream>

using namespace std;

// N개의 입력을 받아도 상관 없으려면 일단 최대 학생 수가 있어야 한다.
const int max_input = 100;

void sortAscending(double arr[], int size);   // 오름차순 정렬 선언
void sortDescending(double arr[], int size);  // 내림차순 정렬 선언
void printArray(double arr[], int size);      // 배열 출력 선언

int main() {

    int input;
    int sort;
    // 정적 배열 생성
    double numbers[max_input];

    cout << "배열의 몇 개의 숫자를 넣을 건지 정해주세요!" << endl;
    cout << "2 ~ " << max_input << " 사이 숫자를 입력하세요. 입력값 : ";
    cin >> input;

    while (input > max_input || input < 2 || input < 0) {
        cout << "입력이 잘못되었습니다. 2 ~" << max_input << " 사이 숫자를 입력하세요. 입력값 : ";
        cin >> input;
    }

    // 숫자 입력 받기(for문 이용)
    for (int i = 0; i < input; i++) {
        cout << i + 1 << " 번째 숫자를 입력해주세요 : ";
        cin >> numbers[i];
    }

    cout << "당신이 입력한 기본 배열입니다." << endl;
    printArray(numbers, input);
    cout << "축하합니다! 이제 배열이 만들어졌으니 정렬을 해봅시다!" << endl << endl;
	
	cout << "1을 입력하면 오름차순 정렬, 2를 입력하면 내림차순 정렬이 됩니다!" << endl;
	cout << "1 또는 2를 입력해주세요!" << endl;
	cin >> sort;

	switch (sort) {
		case 1:
            sortAscending(numbers, input);
            break;  // 1번 케이스 실행 후 종료
		case 2:
            sortDescending(numbers, input);
            break;  // 2번 케이스 실행 후 종료
	}
    printArray(numbers, input);
    // break 문 없이 실행하니까 1을 입력해도 내림차순 정렬이 나옴..

	return 0;
}

// 구글 검색결과 정렬을 사용할때 swap()이란 함수는 필수였다!!
// 하지만 요구사항의 의도가 그게 아닌거 같다. 그냥 해보자..

// 오름차순 정렬 구현 - 최대한 gpt없이 해보자..
// 1. 일단 for문을 넣어서 사고력을 증가시킨다.
// 2. 간단한 예시를 든다. arr[5] = {5 ,4, 7, 1 ,9}; 라고 생각해보자
// 3. 배열 인덱스의 앞과 뒤의 값을 서로 비교하여서 위치가 바뀌어야 한다.
// 4. 작은 수부터 큰 수로 가도록 원소의 위치를 바꿔보자!
// 5. 점점 큰 수를 뒤로 보내게 된다!
// 6. size - i로 점점 비교를 앞의 원소들로 당겨오는 것은 이해했다.
// 7. 만약에 size가 5면 for문(i)의 마지막 루프에서 i는 3으로 끝난다.
// 8. 그렇다면 size-i는 5-3 = 2가 된다. 그럼 for문(p)의 마지막 루프가 1로 끝난다.
// 9. 이미 비교를 해서 큰 수를 확정적인 위치에 넣어 놨기 때문에 더 비교를 할 필요가 없다.
// 10. 그래서 마지막 루프의 p값이 0으로 끝나게 해서 
// 11. 배열의 인덱스 앞, 뒤 값을 비교하는 for문(p)를 1번만 돌게 했다.
void sortAscending(double arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int p = 0; p < size - i - 1; ++p) {
            if (arr[p] > arr[p + 1]) {
                double temp = arr[p + 1];
                arr[p + 1] = arr[p];
                arr[p] = temp;
            }
        }
    }
}

// 내림차순 정렬 구현
// 내림차순은 큰 수부터 4..3..2..1.로 정렬되는 형식이다.
// 그래서 작은 수를 점점 뒤로 보내야한다.
// 직관적으로 중간에 if()안의 비교하는 연산자를 반대로 바꾸면 될거 같다.
// 다행히 예측이 맞았다!
void sortDescending(double arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int p = 0; p < size - i - 1; ++p) {
            if (arr[p] < arr[p + 1]) {
                double temp = arr[p + 1];
                arr[p + 1] = arr[p];
                arr[p] = temp;
            }
        }
    }
}

// 배열 출력 구현
void printArray(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}