import java.util.*;
 
 public class problem {
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
        int n = read.nextInt();
        if(n==1){
            System.out.println(1);
            System.out.println(1);
            return;
        }
        if(n<5 && n!=4){ System.out.println(n-1); 
            switch(n){
                case 3 :
                System.out.print("1" + " " + "3");
                break;
                default :
                System.out.print(1);
                break;
            }
            return;
        }
        ArrayList<Integer>[] vec = new ArrayList[2];

        vec[0] = new ArrayList<>();
        vec[1] = new ArrayList<>();
        
        System.out.println(n);
        for(int i=1; i<=n; i++){
            if(i%2==0) vec[0].add(i);
            else vec[1].add(i);
        }
        for(int a=vec[1].size()-1; a>=0; a--) System.out.print(vec[1].get(a) + " ");
        for(int b=vec[0].size()-1; b>=0; b--) System.out.print(vec[0].get(b) + " ");
    }   
}
