#include <stdio.h>

int main(void) {
    int age;
    int has_voter_id;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Do you have a voter ID? (1 for Yes, 0 for No): ");
    if (scanf("%d", &has_voter_id) != 1 ||
        (has_voter_id != 0 && has_voter_id != 1)) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Eligible to vote: %d\n", age >= 18 && has_voter_id);
    printf("Age or voter ID condition: %d\n", age >= 18 || has_voter_id);
    printf("Not eligible by age: %d\n", !(age >= 18));

    return 0;
}
