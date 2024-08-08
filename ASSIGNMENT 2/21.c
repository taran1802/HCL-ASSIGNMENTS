#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    if (argc != 2) {
        printf("Usage: %s <ENV_VARIABLE_NAME>\n", argv[0]);
        return 1; 
    }

    
    const char *env_var_name = argv[1];

    
    const char *env_var_value = getenv(env_var_name);

    
    if (env_var_value != NULL) {
        printf("%s=%s\n", env_var_name, env_var_value);
    } else {
        printf("Environment variable '%s' not found.\n", env_var_name);
    }

    return 0;
}

