#include <iostream>
#include<cstdlib>
#include<ctime>
#include<string>




struct movies{
	std::string title = "noname";
	int year = 9999;
	std::string genre = "action";
	unsigned int duration = 0;
	unsigned int price = 00;
	};


void show_movie(const movies& film1);
int expensive(const movies& f1, const movies& f2, const movies& f3);
void update_info(movies& film);

int main() {
	setlocale(LC_ALL, "Russian");

	

	movies film1{
		"Duna",
		2022,
		"action",
		180,
		300
	};
	movies film2{
		"DD",
		1989,
		"action",
		180,
		3100
	};

	movies film3{
		"JHG",
		2012,
		"action",
		180,
		350
	};


	std::cout << " ������ 1 :\n";
	show_movie(film2);
	std::cout << "\n\n";
	std::cout << " ������ 2 :\n";
	//expensive( film1, film2, film3);
	std::cout << "\n\n";
	std::cout << " ������ 3 :\n";
	update_info(film3);
	show_movie(film3);


	return 0;
}

void show_movie(const movies& film) {
	std::cout << "title:   " << film.title << std::endl;
	std::cout << "year:    " << film.year << std::endl;
	std::cout << "genre:   " << film.genre << std::endl;
	std::cout << "duration:" << film.duration << std::endl;
	std::cout << "price:   " << film.price << std::endl;

}

int expensive(movies& f1,movies& f2,movies& f3) {
	int max_cash = f1.price;
	movies max = f1;
	
	if (f2.price > max_cash) {
		max_cash = f2.price;
		max = f2;
	}
	if (f3.price > max_cash) {
		max_cash = f2.price;
		max = f3;
	}
	return (max);
}

void update_info( movies& film) {
	int tmp;
	show_movie(film);
	std::cout << " ��������, ����� ���������� � ������ \n���������� ��������: \n1. ��������; \n2. ��� ������;\n3. ����;\n4. �����������������;\n5. ���� �� ����.\n";
	std::cin >> tmp;
	switch (tmp){
	case 1: {
		std::cout << " ������� ����� �������� ������ : ";
		std::cin >> film.title;
		std::cout << " ���������� ��������� \n";
	}; break;
	case 2: {
		std::cout << " ������� ����� ���� ������ ������ : ";
		std::cin >> film.year;
		std::cout << " ���������� ��������� \n";
	}; break;
	case 3: {
		std::cout << " �������� ���� ������ : ";
		std::cin >> film.genre;
		std::cout << " ���������� ��������� \n";
	}; break;
	case 4: {
		std::cout << " ������� ����� ����������������� ������ : ";
		std::cin >> film.duration;
		std::cout << " ���������� ��������� \n";
	}; break;
	case 5: {
		std::cout << " ������� ����� ��������� ����� � ������� : ";
		std::cin >> film.price;
		std::cout << " ���������� ��������� \n";
	}; break;
	default:
		std::cout << " ������!";
		break;
	}
}