#include <iostream>
#include <windows.h>

std::string website;

void executable() {
	std::cout << "website: "; std::cin >> website;
	ShellExecute(NULL, "open", website.c_str(), NULL, NULL, SW_SHOWNORMAL);
}

int main() {
	executable();
	return main();
}
