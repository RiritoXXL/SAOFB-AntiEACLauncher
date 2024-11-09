#include "includes.hpp"
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;
int main() {
	blackbone::Process proc;
	wstring z = fs::current_path();
	wstring saofbfolder = z + L"\\SAOFB\\Binaries\\Win64\\SAOFB-Win64-Shipping.exe";
	NTSTATUS x = proc.CreateAndAttach(saofbfolder);
	if (x) {
		MessageBoxA(0, "This is Isn't Right Folder... Pls Try Found Folder of SAOFB and Copy This Compiled Bypass!!!", "SAOFB-Bypass", MB_OK | MB_ICONWARNING);
		exit(122);
	}
	else {
		cout << "Successfully Bypassed Running EAC(EasyAntiCheat)" << endl;
		exit(1443);
	}
	return 0;
}
