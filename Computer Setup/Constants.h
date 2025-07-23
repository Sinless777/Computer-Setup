#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include "Structs.h"

using namespace std;

/*
	Windows Software Intaller URLs

	These URLs are used to download the latest versions of various software applications for Windows.
*/
extern const string Windows_Obsidian_URL;
extern const string Windows_Discord_URL;
extern const string Windows_NotepadPlusPlus_URL;
extern const string Windows_VSCode_URL;
extern const string Windows_7Zip_URL;
extern const string Windows_VisualStudio_URL;



/*
	Linux Software Installer URLs
*/


/*
	Vector of Software Structures
*/

// This vector contains a list of software applications with their names, URLs, and optional silent install flags.
extern const vector<Software> Software_List;

// Unordered Map of Software Names to URLs with optional silent install flags
extern const unordered_map<string, pair<string, string>> Software_Installers;