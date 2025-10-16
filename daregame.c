#include <stdio.h>

int main() {
    int number;
    char mood;

    printf("🎯 WELCOME TO THE CRAZY DARE GAME! 🎯\n\n");
    printf("Enter your lucky number (1–10): ");
    scanf("%d", &number);

    printf("How are you feeling today? (h=happy, s=sad, b=bored, n=normal, r=relaxed): ");
    scanf(" %c", &mood); 

    printf("\n🎲 YOUR DARE IS:\n");

    if ((number == 1 || number == 5) && (mood == 'h' || mood == 'H')) {
        printf("😂 Dare: Dance for 30 seconds without music!\n");
    }
    else if ((number == 2 || number == 8) && (mood == 'b' || mood == 'B')) {
        printf("🎤 Dare: Sing a song loudly right now!\n");
    }
    else if ((number == 3 || number == 9) && (mood == 's' || mood == 'S')) {
        printf("📸 Dare: Send your funniest selfie to the group!\n");
    }
    else if (number == 4 || number == 7) {
        printf("📞 Dare: Call your crush and say 'Hi' 😳\n");
    }
    else if (number == 6 || number == 10) {
        printf("🕺 Dare: Tell a joke — if no one laughs, do 5 push-ups!\n");
    }
    
    else if (mood == 'r' || mood == 'R'){
        printf("🤣 Open your gallery publicly!\n");
    }
    else if (mood == 'n' || mood == 'N'){
        printf("🤑 call any one and ask for five rupees!\n");
    }
    else {
        printf("😎 Dare: loudly annouce your name in your class!🗣️\n");
    }

    printf("\nThanks for playing! 😄\n");

    return 0;
}