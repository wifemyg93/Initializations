#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	float num1 = 0.1, num2 = 0.2, num3 = 0.3, num4 = 0.4, num5 = 0.5, num6 = 0.6, num7 = 0.7, num8 = 0.8, num9 = 0.9, num10 = 1.1;
	cout << "Тип данных float:" << "" << num1 << ";" << num2 << ";" << num3 << ";" << num4 << ";" << num5 << ";" << num6 << ";" << num7 << ";" << num8 << ";" << num9 << ";" << num10 << "." << endl;

	double num11 = 0.11, num12 = 0.12, num13 = 0.13, num14 = 0.14, num15 = 0.15, num16 = 0.16, num17 = 0.17, num18 = 0.18, num19 = 0.19, num20 = 0.21;
	cout << "Тип данных double:" << "" << num11 << ";" << num12 << ";" << num13 << ";" << num14 << ";" << num15 << ";" << num16 << ";" << num17 << ";" << num18 << ";" << num19 << ";" << num20 << "." << endl;

	int num21 = 210, num22 = 220, num23 = 230, num24 = 240, num25 = 250, num26 = 260, num27 = 270, num28 = 280, num29 = 290, num30 = 300;
	cout << "Тип данных int:" << "" << num21 << ";" << num22 << ";" << num23 << ";" << num24 << ";" << num25 << ";" << num26 << ";" << num27 << ";" << num28 << ";" << num29 << ";" << num30 << "." << endl;

	short num31 = 3100, num32 = 3200, num33=3300, num34 = 3400, num35 = 3500, num36 = 3600, num37 = 3700, num38 = 3800, num39 = 3900, num40 = 4000;
	cout << "Тип данных short:" << "" << num31 << ";" << num32 << ";" << num33 << ";" << num34 << ";" << num35 << ";" << num36 << ";" << num37 << ";" << num38 << ";" << num39 << ";" << num40 << "." << endl;

	long num41 = 41, num42 = 420, num43 = 4300, num44 = 44000, num45 = 4500, num46 = 460, num47 = 47, num48 = 480, num49 = 4900, num50 = 50000;
	cout << "Тип данных short:" << "" << num41 << ";" << num42 << ";" << num43 << ";" << num44 << ";" << num45 << ";" << num46 << ";" << num47 << ";" << num48 << ";" << num49 << ";" << num50 << "." << endl;

	char latter1 = 'a', latter2 = 'b', latter3 = 'c', latter4 = 'd', latter5 = 'e', latter6 = 'f', latter7 = 'g', latter8 = 'h', latter9 = 'i', latter10 = 'j';
	cout << "Тип данных char:" << "" << latter1 << ";" << latter2 << ";" << latter3 << ";" << latter4 << ";" << latter5 << ";" << latter6 << ";" << latter7 << ";" << latter8 << ";" << latter9 << ";" << latter10 << "." << endl;

	bool res1, res2, res3, res4, res5, res6, res7, res8, res9, res10;
	res1 = true;
	res2 = false;
	res3 = true;
	res4 = false;
	res5 = true;
	res6 = false;
	res7 = true;
	res8 = false;
	res9 = true;
	res10 = false;
	cout << "Тип данных bool:" << "" << res1 << ";" << res2 << ";" << res3 << ";" << res4 << ";" << res5 << ";" << res6 << ";" << res7 << ";" << res8 << ";" << res9 << ";" << res10 << "." << endl;

	const float NUM1 = 1.1, NUM2 = 1.2, NUM3 = 1.3, NUM4 = 1.4, NUM5 = 1.5, NUM6 = 1.6, NUM7 = 1.7, NUM8 = 1.8, NUM9 = 1.9, NUM10 = 2.1;
	cout << "Типо данных const float:" << NUM1 << ";" << NUM2 << ";" << NUM3 << ";" << NUM4 << ";" << NUM5 << ";" << NUM6 << ";" << NUM7 << ";" << NUM8 << ";" << NUM9 << ";" << NUM10 << "." << endl;

	const double NUM11 = 1.11, NUM12 = 1.12, NUM13 = 1.13, NUM14 = 1.14, NUM15 = 1.15, NUM16 = 1.16, NUM17 = 1.17, NUM18 = 1.18, NUM19 = 1.19, NUM20 = 2.21;
	cout << "Типо данных const double:" << NUM11 << ";" << NUM12 << ";" << NUM13 << ";" << NUM14 << ";" << NUM15 << ";" << NUM16 << ";" << NUM17 << ";" << NUM18 << ";" << NUM19 << ";" << NUM20 << "." << endl;

	const int NUM21 = 310, NUM22 = 320, NUM23 = 330, NUM24 = 340, NUM25 = 350, NUM26 = 360, NUM27 = 370, NUM28 = 380, NUM29 = 390, NUM30 = 400;
	cout << "Типо данных const int:" << NUM21 << ";" << NUM22 << ";" << NUM23 << ";" << NUM24 << ";" << NUM25 << ";" << NUM26 << ";" << NUM27 << ";" << NUM28 << ";" << NUM29 << ";" << NUM30 << "." << endl;

	const short NUM31 = 4100, NUM32 = 4200, NUM33 = 4300, NUM34 = 4400, NUM35 = 4500, NUM36 = 4600, NUM37 = 4700, NUM38 = 4800, NUM39 = 4900, NUM40 = 5000;
	cout << "Типо данных const short:" << NUM31 << ";" << NUM32 << ";" << NUM33 << ";" << NUM34 << ";" << NUM35 << ";" << NUM36 << ";" << NUM37 << ";" << NUM38 << ";" << NUM39 << ";" << NUM40 << "." << endl;

	const long NUM41 = 51, NUM42 = 520, NUM43 = 5300, NUM44 = 54000, NUM45 = 5500, NUM46 = 560, NUM47 = 57, NUM48 = 580, NUM49 = 5900, NUM50 = 60000;
	cout << "Типо данных const long:" << NUM41 << ";" << NUM42 << ";" << NUM43 << ";" << NUM44 << ";" << NUM45 << ";" << NUM46 << ";" << NUM47 << ";" << NUM48 << ";" << NUM49 << ";" << NUM50 << "." << endl;

	const char LETTER1 = 'a', LETTER2 = 'b', LETTER3 = 'c', LETTER4 = 'd', LETTER5 = 'e', LETTER6 = 'f', LETTER7 = 'g', LETTER8 = 'h', LETTER9 = 'i', LETTER10 = 'j';
	cout << "Тип данных char:" << LETTER1 << ";" << LETTER2 << ";" << LETTER3 << ";" << LETTER4 << ";" << LETTER5 << ";" << LETTER6 << ";" << LETTER7 << ";" << LETTER8 << ";" << LETTER9 << ";" << LETTER10 << "." << endl;

	const bool RES1 = true;
	const bool RES2 = false;
	const bool RES3 = true;
	const bool RES4 = false;
	const bool RES5 = true;
	const bool RES6 = false;
	const bool RES7 = true;
	const bool RES8 = false;
	const bool RES9 = true;
	const bool RES10 = false;
	cout << "Тип данных bool:" << RES1 << ";" << RES2 << ";" << RES3 << ";" << RES4 << ";" << RES5 << ";" << RES6 << ";" << RES7 << ";" << RES8 << ";" << RES9 << ";" << RES10 << "." << endl;
}