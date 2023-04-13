# ICI CA COMPILE

New programming language using a Flex/Bison transpiler in C that produces IL Assembly code. 





## How to ??

This project enables you to develop small executables in a new language (Facile). First, you can write a small program in the facile language, and compile it using the commands at the end of this README file.



`<filename>.facile`

## Quick start documentation

| Code             | Meaning                                                                |
| ----------------- | ------------------------------------------------------------------ |
| := | affectation |
| print | print a value |
| read | read an input value |
| > | greater than |
| < | lesser than |
| = | equals |
| # | not equals |
| if | if statement |

Example program:

`example.facile`
``` 
read a;
read b;
if (a>b) {
    print a;
} else {
    print b;
} 
```

## Run Locally

Clone the project

```bash
  git clone https://github.com/iliesso/ici-ca-compile.git
```

Go to the project directory build folder

```bash
  cd ici-ca-compile/build
```

make project

```bash
  make
```

write your "facile" code in a <filename>.facile file, then compile it as an executable

```bash
  ./facile <filename>.facile
  ilasm <filename>.il
  ./<filename>.exe
```

