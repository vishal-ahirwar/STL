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

//Auto Generated C++ file by newton CLI
#include"../vector/main.cc"

int main(int argc,char*argv[])
{
    std::vector<std::string> names{"Vishal","Rohan","Romya","Ki"};
    std::vector<const char*>c_names{"xcvxcv","xcvxcv","sdfsdf","234234","567657","78"};
    std::vector<int> No{45,3,332,34,5,4,4,5,4,3};
    std::vector<double> health{45.3234,43.453,322.323,245.5,65.76};

    printf("printing string vector :\n");
    print_vec<std::string>(names);
    printf("\nprinting c_style string :\n");
    print_vec<const char*>(c_names);
    printf("\nprinting integer :\n");
    print_vec<int>(No);
    printf("\nprinting double :\n");
    print_vec<double>(health);

  printf("\nshutting down ..");
    return 0;
};

