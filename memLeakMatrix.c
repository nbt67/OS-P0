#include <stdlib.h>

//ls-la (list all the files)
//which ls (folder information)
//cat main.c (print file content)
//pwd
//sleep 5 & (wait 5 seconds, the & character tells the shell to execute it concurrently and return immediately to shell console waiting for keyboard input)
//ps (show procesess)
//echo "something" (it will print something)
//myvar = "something" (creates a new variable with something, later we can call echo with $myvar)
//wc help (to see all the comands avilable)
//rm src (removes a file)
//to execute do ./nameofexecutable
//wc −l main.c (counts lines in arg or standardinput)
//chmod u+x src (u is user, permission (r: read , w: write, x: execute), src source file)
//to compile it is: gcc filename.c -o compilerName Then write ./compilerName

int** mat;

int** createMatrix( int n, int m) {
    int i;
    int** mat = malloc( n * sizeof(int*) );
    for(i=0;i<n;i++) {
        mat[i] = malloc( m * sizeof(int) );
    }
    return mat;
}

void freeMatrix(int** mat, int n, int m) {
    int i;
    free(mat);
}


int main() {
    int n = 5;
    int m = 10;
	mat = createMatrix(n,m);
	freeMatrix(mat,n,m);

    mat[5][10] = 0;   // fill two positions
    mat[0][0] = 0;

	return 0;
}
