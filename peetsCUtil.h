#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <random>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdio.h>
#include <list>
#include <bits/stdc++.h>

using namespace std;

ifstream fin;
ofstream fout;


//endprogram
int endProgram() {
	cin.ignore(100, '\n');
	cin.get();
	return 0;
}



//integer
int getInt(string x) {
	int num;

	cout << x << endl;

	while (!(cin >> num) || cin.fail()) {
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();

		cout << "\nError: Invalid input << endl";

		cout << "\n" << x << endl;
	}
	return num;
}

int getInt(string x, int min, int max) {
	int num;

	cout << x << endl;

	while (!(cin >> num) || cin.fail() || (num < min || num > max)) {
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();

		cout << "\nError: Invalid input << endl";

		cout << "\n" << x << endl;
	}
	return num;
}



//float
float getFloat(string x) {
	float num;

	cout << x << endl;

	while (!(cin >> num) || cin.fail()) {
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();

		cout << "\nError: Invalid input << endl";

		cout << "\n" << x << endl;
	}
	return num;
}


float getFloat(string x, float min, float max) {
	float num;

	cout << x << endl;

	while (!(cin >> num) || cin.fail() || (num < min || num > max)) {
		cin.clear();
		cin.ignore(100, '\n');
		cin.sync();

		cout << "\nError: Invalid input << endl";

		cout << "\n" << x << endl;
	}
	return num;
}



//response answer

char getResponse(string x, char res1, char res2) {
	char res;

	cout << x << endl;
	cin >> res;
	tolower(res);
	while (!(res == res1 || res == res2)) {
		cout << "\nInvalid response" << endl;

		cout << "\n" << x << endl;
		cin >> res;
		tolower(res);
	}
	return res;
}



//Random number

int getRand(int &min, int &max) {
	random_device randDev;
	mt19937 gen(randDev());
	uniform_int_distribution<int> random(min, max);
	int randNum = random(gen);
	return randNum;
}



//open file

//write

bool writeFile(string fileName) {
	fout.open(fileName);

	if (!fout) {
		cout << "File did not open";
		return -1;
	}

	return 0;
}

//append

bool appFile(string fileName) {
	fout.open(fileName, ios::app);

	if (!fout) {
		cout << "File did not open";
		return -1;
	}

	return 0;
}

//read

bool readFile(string fileName) {
	fin.open(fileName);

	if (!fin) {
		cout << "File did not open";
		return -1;
	}

	return 0;
}



//menus 2-4

int makeMenu(string option1) {

	cout << "1). " << option1 << endl;
	cout << "2). Quit" << endl;

	int choice = getInt("Choice: ", 1, 2);

	return choice;

}

int makeMenu(string option1, string option2) {

	cout << "1). " << option1 << endl;
	cout << "2). " << option2 << endl;
	cout << "3). Quit" << endl;

	int choice = getInt("Choice: ", 1, 3);

	return choice;
}

int makeMenu(string option1, string option2, string option3) {

	cout << "1). " << option1 << endl;
	cout << "2). " << option2 << endl;
	cout << "3). " << option3 << endl;
	cout << "4). Quit" << endl;

	int choice = getInt("Choice: ", 1, 4);

	return choice;
}