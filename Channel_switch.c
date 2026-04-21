#include <stdio.h>

int main() {
    int channel;

    printf("Enter your channel number: ");
    scanf("%d", &channel);

    switch(channel) {
        case 1:
            printf("Star Plus\n");
            break;
        case 2:
            printf("Sony TV\n");
            break;
        case 3:
            printf("Nick\n");
            break;
        case 4:
            printf("Star Sports\n");   // duplicate हटाएर change गरियो
            break;
        case 5:
            printf("Sagarmatha TV\n");
            break;
        case 6:
            printf("Kishan TV\n");
            break;
        default:
            printf("Invalid channel\n"); 
    }

    return 0;
}