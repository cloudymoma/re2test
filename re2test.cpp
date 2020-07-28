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

/*
    cout << RE2::FullMatch("abc", "abc") << endl;
    cout << RE2::FullMatch("abcd", "^abc") << endl;
    cout << RE2::FullMatch("abcd", "^abcd") << endl;
    cout << RE2::FullMatch("bcd", "bcd$") << endl;
    cout << RE2::FullMatch("abcd", "bcd$") << endl;
*/

/*
    cout << RE2::FullMatch("abcde", "bcd") << endl;
    cout << RE2::FullMatch("abcde", ".bcd.") << endl;
    cout << RE2::FullMatch("abcde", ".bcd") << endl;
    cout << RE2::FullMatch("abcde", "^a.*d.") << endl;
    cout << RE2::FullMatch("abcde", ".de") << endl;
    cout << RE2::FullMatch("abcde", ".*de") << endl;
*/

    //char* pattern = "^live_g.*";
    //char* pattern = "^live_g/.*";
    char* pattern = "^live_g.*\.mp4$";
    //char* pattern = "^live_g/.*\.mp4$";
    cout << RE2::FullMatch("live_g/abc.mp4", pattern) << endl;
    cout << RE2::FullMatch("live_gabc.mp4", pattern) << endl;
    cout << RE2::FullMatch("vod/live_g/abc.mp4", pattern) << endl;
    cout << RE2::FullMatch("vod/cn/abc.mp4", pattern) << endl;
    cout << RE2::FullMatch("vod/us/abc.mp4", pattern) << endl;

/*
    cout << RE2::FullMatch("abc.txt", ".*\.(jpg|png)") << endl;
    cout << RE2::FullMatch("abc.txt", ".*\\.(jpg|png)") << endl;
    cout << RE2::FullMatch("abc.png", ".*\.(jpg|png)") << endl;
    cout << RE2::FullMatch("abc.png", ".*\\.(jpg|png)") << endl;
*/

/*
    cout << RE2::PartialMatch("abc", "^abc") << endl;
    cout << RE2::PartialMatch("abc", "abc$") << endl;
    cout << RE2::PartialMatch("abcd", "abc") << endl;
    cout << RE2::PartialMatch("abcd", "abc$") << endl;
    cout << RE2::PartialMatch("ab/cd", "ab/cd") << endl;
    cout << RE2::PartialMatch("ab/cd", "ab\/cd") << endl;
    cout << RE2::PartialMatch("ab.cd", "ab.cd") << endl;
    cout << RE2::PartialMatch("ab.cd", "ab\.cd") << endl;
    cout << RE2::PartialMatch("abc.txt", ".*\.(jpg|png)") << endl;
    cout << RE2::PartialMatch("abc.txt", ".*\\.(jpg|png)") << endl;
    cout << RE2::PartialMatch("abc.png", ".*\.(jpg|png)") << endl;
    cout << RE2::PartialMatch("abc.png", ".*\\.(jpg|png)") << endl;
*/
    return 0;
}

// EOF
