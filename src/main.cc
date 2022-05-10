/*
======================= START OF LICENSE NOTICE =======================
  Copyright (C) 2022 vishal-Ahirwar. All Rights Reserved

  NO WARRANTY. THE PRODUCT IS PROVIDED BY DEVELOPER "AS IS" AND ANY
  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL DEVELOPER BE LIABLE FOR
  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
  GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
  IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THE PRODUCT, EVEN
  IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
======================== END OF LICENSE NOTICE ========================
  Primary Author: vishal-Ahirwar

*/

// Auto Generated C++ file by newton CLI
#include "../vector/main.cc"
void vectorStuff(void);
int main(int argc, char *argv[])
{
  std::vector<std::string> Names;
  while (true)
  {
    printf(
        R"(
               MENUv0.1
               -------
            1.Admit Student
            2.Remove Student
            3.Quit Program
            4.Show List
            
)");
    unsigned int userInput{0};
    std::cin >> userInput;
    switch (userInput)
    {
    case 1:
    {
      printf("Student Name : ");
      std::string str;
      std::cin.clear();
      std::cin>>str;
      Names.push_back(str);
      break;
    };
    case 2:
    {
      if (Names.size() > 0)
      {
        Names.pop_back();
        break;
      }
      else
      {
        printf("Student List is Empty!\n");
        break;
      };
    };
    case 3:
      return -1;
    case 4:
    {
      printf("showing student list : ");
      print_vec(Names);
      break;
    };
    default:
      printf("Invalid Input!\n");
      break;
    };
  }
  printf("\nshutting down ..");
  return 0;
};
void vectorStuff(void)
{
  std::vector<std::string> names{"Vishal", "Rohan", "Romya", "Ki"};
  std::vector<const char *> c_names{"xcvxcv", "xcvxcv", "sdfsdf", "234234", "567657", "78"};
  std::vector<int> No{45, 3, 332, 34, 5, 4, 4, 5, 4, 3};
  std::vector<double> health{45.3234, 43.453, 322.323, 245.5, 65.76};
  std::vector<unsigned int> IDs(1024, 1024);

  printf("printing IDs:\n");
  print_vec(IDs);
  printf("printing string vector :\n");
  print_vec<std::string>(names);
  printf("\nprinting c_style string :\n");
  print_vec<const char *>(c_names);
  printf("\nprinting integer :\n");
  print_vec<int>(No);
  printf("\nprinting double :\n");
  print_vec<double>(health);
}
