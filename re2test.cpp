#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <omp.h>
#include <string>
#include <iostream>

#include <re2/re2.h>
#include <re2/regexp.h>

/**
 * @Author: Bin Wu
 * @Date: 13/Jul/2020
 */

using namespace std;

int main(int argc, char* argv[]) {
    cout << "Google re2 tests" << endl;

    // (text, regex)
    cout << RE2::FullMatch("abc", "abc") << endl;
    cout << RE2::FullMatch("abcd", "^abc") << endl;
    cout << RE2::PartialMatch("abc", "^abc") << endl;
    cout << RE2::PartialMatch("abc", "abc$") << endl;
    cout << RE2::PartialMatch("abcd", "abc") << endl;
    cout << RE2::PartialMatch("abcd", "abc$") << endl;

    return 0;
}

// EOF
