class Ex5B {
    public static void main(String[] args) {
        
        int column = 0;
        int raw = 0;

        while (column < 5) {
            while(raw < 5) {
                System.out.print("* ");
                raw ++;
            }
            System.out.println("");
            raw = 0;
            column ++;
        }

        for(column = 1; column <= 5; column ++) {
            
            for(raw = 0; raw < 5 - column; raw ++) {
                System.out.print(" ");
            }

            for(raw = 0; raw < column; raw ++) {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
}