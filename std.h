#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <random>
#include <algorithm>
#include <numeric>
#include <filesystem>
#include <stdlib.h>
#include <vector>
#include <map>

#define PATH "Note"
using namespace std;
namespace fs = std::filesystem;

#pragma region WordPad
#include "word.h"
#include "WordPad.h"
#include "WordPadManager.h"
#pragma endregion

#pragma region Feature
#include "Quiz.h"
#include "Review.h"
#pragma endregion


#include "File.h"
#include "Print.h"
#include "MyInput.h"
#include "Controll.h"
