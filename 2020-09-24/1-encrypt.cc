// 请在下方添加代码
/********** Begin *********/
#include <iostream>

using namespace std;

int encrypt( int num ) {
    std::string strbuf;
    strbuf = std::to_string( num );
    for ( auto& s : strbuf ) {
        s = ( ( ( s - '0' ) + 7 ) % 10 ) + '0';
    }

    std::swap( strbuf[ 0 ], strbuf[ 2 ] );
    std::swap( strbuf[ 1 ], strbuf[ 3 ] );

    return std::stoi( strbuf );
}

int decrypt( int num ) {
    std::string strbuf;
    strbuf = std::to_string( num );
    for ( auto& s : strbuf ) {
        s = ( ( ( s - '0' ) + 3 ) % 10 ) + '0';
    }

    std::swap( strbuf[ 0 ], strbuf[ 2 ] );
    std::swap( strbuf[ 1 ], strbuf[ 3 ] );

    // std::cout << "now, strbuf = " << strbuf << std::endl;

    return std::stoi( strbuf );
}

int main() {

    int num1, num2;
    cin >> num1 >> num2;

    // std::cout << "get num1 " << num1 << ", num2: " << num2 << std::endl;

    std::cout << encrypt( num1 ) << ' ' << decrypt( num2 ) << std::endl;

    return 0;
}
/********** End **********/
