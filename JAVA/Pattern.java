class Pattern {
    public static void main(String[] args) {
        int num = 1;   // Tracks the current number to print
        for (int i = 1; i <= 5; i++) {        // Row loop
            int start = i;                     // Row i starts with value i
            int cols = (i <= 3) ? i : i + 1;
            for (int j = 0; j < cols; j++) {   // Column loop
                System.out.print(start + j);
                if (j < cols - 1) System.out.print(" ");
            }
            System.out.println();
        }
    }
}