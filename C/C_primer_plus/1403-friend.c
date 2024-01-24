// 结构体嵌套

#include <stdio.h>
#define LEN 20
const char *msgs[5] = {
    "   Thank you for the wonderful evening, ",
    "You certainly prove that a ",
    "is a special kind of guy. We must get together",
    "over a delicious",
    " and have a few laughs"
};
struct names {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void) {
    struct guy fellow = {
        { "Ewen", "Villard" },
        "grilled salmon",
        "personality coach",
        68112.00
    };

}