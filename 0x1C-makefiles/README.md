# Makefile

A Makefile is a build automation tool primarily used for compiling files in C and building projects, but its utility extends beyond just the C programming language. While it is commonly associated with compiling C programs, Makefiles are versatile and can be used for any project that involves multiple source files, dependencies, and build steps. Here are some key reasons why Makefiles are beneficial:

A Makefile is a build automation tool primarily used for compiling and building projects, but its utility extends beyond just the C programming language. While it is commonly associated with compiling C programs, Makefiles are versatile and can be used for any project that involves multiple source files, dependencies, and build steps. Here are some key reasons why Makefiles are beneficial:

    Dependency Management:
        Makefiles allow you to define dependencies between files. When certain source files change, Make can automatically determine which parts of the project need to be recompiled.

    Build Automation:
        Make simplifies the process of compiling complex projects by automating the build steps. It tracks dependencies and only recompiles what is necessary, saving time and resources.

    Multi-Language Support:
        While Makefiles are often associated with C, they are not limited to any specific programming language. They can be used for projects written in C, C++, Fortran, Python, or any other language.

    Modularization:
        Makefiles allow you to organize your project into modular components, making it easier to manage and maintain. Each module can have its own set of rules and dependencies.

    Consistent Build Process:
        Make provides a consistent and reproducible build process. This is crucial for collaborative projects or when transitioning between different development environments.

    Portability:
        Makefiles are platform-independent, making it easier to maintain and share projects across different operating systems.

    Customization:
        Make allows you to define custom build commands, making it flexible for various build processes, testing, documentation generation, etc.

    Integration with Version Control:
        Makefiles are often used in conjunction with version control systems (e.g., Git) to ensure that builds are reproducible across different machines and at different points in time.

## Variables

Variables are often created to avoid uneccesary repetition of commands or target mostly used. e.g:

CC = gcc. This is same as saying CC := gcc
CFLAGS = -Wextra -Werror -Wall -pedantic


### Sample of a Makefile

```text
    CC = gcc
    SRC = $(wildcard *.c)
    OBJ = $(SRC:.c=.o)
    NAME = school
    RM = rm -f
    CFLAGS = -Wall -Werror -Wextra -pedantic

    all: $(OBJ)
        ${CC} ${CFLAGS} ${OBJ} -o ${NAME}

    clean:
        ${RM} *~ ${NAME}

    oclean:
        ${RM} ${OBJ}

    fclean: clean oclean

    re: fclean all
```

#### Usage

* `make` `target_to_run` -f `file_name`
* `make` `target_to_run` -c `path/to/file` -f `file_name`

By default, make runs only the first target defined in the makefile. So, if no `target_to_run` is specify, the first target on our makefile will be run. In order to ensures that the required target is run and not just the first target on the list, we specify `target_to_run`. The -f flag specifies our makefile file to run while -c specifies the directory where our makefile is located.

More information, visit [GNU](https://www.gnu.org/software/make/manual/make.html)
