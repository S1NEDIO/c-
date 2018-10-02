#include <iostream>
#include <string>

using namespace std;

int main() {

  cout << "Enter email: ";
  string email;
  cin >> email;
  bool correct = true;

  if (email.length() >= 7) {
    if (email[0] != '@') {
      bool doggy = false;
      int dg_ind = 1;
      for (int i = 1; i < email.length(); i++) {
        if (email[i] == '@' && doggy != true) {
          doggy = true;
          dg_ind = i;
          continue;
        }
        if (email[i] == '@' && doggy == true) {
          correct = false;
          break;
        }
      }
      if (correct == true) {
        int aft_dg = 0;
        int dot_ind = -1;
        for (int i = dg_ind; i < email.length(); i++) {
          if (email[i] != '.') aft_dg++;
          else {
            dot_ind = i;
            break;
          }
        }
        if (aft_dg < 2)correct = false;
        if (correct == true && dot_ind != -1) {
          if (email.length() - (dot_ind + 1) >= 2)cout << "Correct!\n";
          else correct = false;
        }
        else correct = false;
      }
      else correct = false;
    }
    else correct = false;
  }
  else correct = false;

  if (correct == false)cout << "Incorrect!\n";

  system("pause");
  return 0;
}
