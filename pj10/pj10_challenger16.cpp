#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

string chuyenDoiPigLatin(const string& tu) {
    if (tu.empty()) {
        return tu; // Trả về nguyên văn nếu từ rỗng
    }

    // Chuyển đổi từ sang Pig Latin
    string tuPigLatin = tu.substr(1) + tu[0] + "AY";
    return tuPigLatin;
}

string chuyenDoiCauPigLatin(const string& cau) {
    // Sử dụng stringstream để tách từng từ trong câu
    stringstream ss(cau);
    string tu;
    vector<string> cacTuPigLatin;

    // Tách từng từ và chuyển đổi thành Pig Latin
    while (ss >> tu) {
        cacTuPigLatin.push_back(chuyenDoiPigLatin(tu));
    }

    // Kết hợp các từ Pig Latin thành câu mới
    string cauPigLatin;
    for (const string& tuPigLatin : cacTuPigLatin) {
        cauPigLatin += tuPigLatin + " ";
    }

    return cauPigLatin;
}

int main() {
    string cauNhap;

    // Nhập câu từ người dùng
    cout << "Nhập một câu: ";
    getline(cin, cauNhap);

    // Chuyển đổi và hiển thị câu mới
    string cauPigLatin = chuyenDoiCauPigLatin(cauNhap);
    cout << "Câu Pig Latin: " << cauPigLatin << endl;

    return 0;
}
