#include <stdio.h>
#include <stdlib.h>

int main() {
    // Command to be executed
    const char *command = "/home/user/abzug-receiver/weston/img.sh";

    // Invoke the system shell with the command
    int status = system(command);

    // Check if the command was executed successfully
    if (status == -1) {
        // Error occurred while attempting to fork
        perror("system");
        return 1;
    } else {
        // Command executed successfully or returned an error code
        printf("Command executed with exit status: %d\n", WEXITSTATUS(status));
        return 0;
    }
}
