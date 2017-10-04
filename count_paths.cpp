
int count_paths(int rows, int cols) {
    /* recursive: takes too long
    if (rows == 1 || cols == 1)
        return 1;
        
    return count_paths(rows-1, cols-1);
    */
    
    // create an nxm matric and use dynamic programming to add the previous iterations
    
    // initalize matrix to 0
    int matrix[cols][rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[j][i] = 1;
        }
    }
    
    // fill cells
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            matrix[j][i] = matrix[j-1][i] + matrix[j][i-1];
        }
    }
    
    return matrix[cols-1][rows-1];
}
