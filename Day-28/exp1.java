public class exp1{
        public static void main(String args[]){
            try{
                int a=10;
                int b=0;
                System.out.println(a/b);
            }
            catch(ArithmeticException e){
                System.out.println(e.getMessage());
            }
            try{
                String str="Alyani";
                System.out.println(str.charAt(10));
            }
            catch(StringIndexOutOfBoundsException s){
                System.out.println(s.getMessage());
            }
        }
}