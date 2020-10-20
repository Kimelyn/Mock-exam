
#include <ctime>
#include <cstdlib>
#include <iostream>
int task1();
int task2();

int main() //main menu
{
    int menu;
    char yn = 'y';
    bool flag = true;
	do {
		std::cout << "Main menu\n";
		std::cout << "1.Task 1\n";
		std::cout << "2.Task 2\n";
		std::cout << "4.Leave\n";
		std::cout << "Choose which task you want to see from 1-4:";
		std::cin >> menu;
	
    switch (menu) {
	case 1:
            std::cout << "Welcome to Task 1\n";
			system("cls");
			task1();
            break;
	case 2:
		std::cout << "Welcome to Task 2\n";
		system("cls");
		task2();
		break;
        case 4:
            flag = false;
			std::cout << "Quit the program\n";
                break;
        default:
            std::cout << "Wrong input … Do you want to try again: (y / n) "; // didn't get this to work properly
			///*std::cin >> yn;*/
			///*do {
			//	if (yn == 'y' && yn == 'Y') {
			//		std::cout << "Moving back to the main menu";
			//	}
			//	else if (yn == 'n' && yn == 'N') {
			//		std::cout << "Quiting";
			//		flag = false;
			//	}
			//	else {
			//		std::cout << "Wrong input, try again";
			//	}
			//} while (yn != 'n' && yn != 'N');*/
    }
} while (flag == true);
}

int task1() {
	int num = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;

	srand(time(NULL));
	for (int i = 0; i < 2000; i++) {
		num = rand() % 6 + 1;
		std::cout << num << "\t";
		switch (num) {
		case 1:
			num1++;
			break;
		case 2:
			num2++;
			break;
		case 3:
			num3++;
			break;
		case 4:
			num4++;
			break;
		case 5:
			num5++;
			break;
		case 6:
			num6++;
			break;
		}
	}
	std::cout << "\n";
	std::cout << "1 has come: " << num1 << " times\n";
	std::cout << "2 has come: " << num2 << " times\n";
	std::cout << "3 has come: " << num3 << " times\n";
	std::cout << "4 has come: " << num4 << " times\n";
	std::cout << "5 has come: " << num5 << " times\n";
	std::cout << "6 has come: " << num6 << " times\n";
	std::cout << "\n";
	return 0;
}

struct info {
	int no = 0;
	char a = 'y';
	int value = 0;
	
};

int task2(){ //couldn't get char name(a) and healtbar to work properly
	struct info arr_info[10];
	int i;
	srand(time(0));
	for (i = 0; i < 10; i++) {
		arr_info[i].value = rand() % 20 + 1;
		arr_info[i].no += i;
	}
	std::cout << "\n";
	std::cout << "\n" << "No" << "\t" "Char name" << "\t" << "Values\t" << "health bar\n";
	std::cout << "-----------------------------------------------------------------------";
	for (i = 0; i < 10; i++)
		std::cout << "\n" << arr_info[i].no << "\t\t" << arr_info[i].a << "\t" << arr_info[i].value << "\t";
	return 0;
}