// #include <iostream>
// using namespace std;

// int main() {
//     int day = 4;

//     switch (day) {
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         case 7:
//             cout << "Sunday";
//             break;
//         default:
//             cout << "Invalid";
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     const int x = 10;
//     const int y = 5;

//     switch (x + y) {
//         case 15:
//             cout << "Result is 15." << endl;
//             break;
//         case 20:
//             cout << "Result is 20." << endl;
//             break;
//         default:
//             cout << "No match found." << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        default:
            cout << "Not specified." << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

// int main() {
//     int day = 2;

//     switch (day) {
//         case 1:
//             cout << "Monday." << endl;
//             break;
//         case 2:
//             cout << "Tuesday." << endl;
//             break;
//         case 3:  // Duplicate case, not allowed
//             cout << "Duplicate case." << endl;
//             break;
//         default:
//             cout << "Invalid day." << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int x = 2;
    int y = 3;

    switch (x) {
        case 1:
            cout << "x is 1." << endl;
            switch (y) {
                case 1:
                    cout << "y is 1." << endl;
                    break;
                default:
                    cout << "y is not 1." << endl;
            }
            break;
        default:
            cout << "x is not 1." << endl;
    }

    return 0;
}

