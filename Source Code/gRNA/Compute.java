import java.util.*;

public class Compute{

 int num ;   

 ArrayList originalMatrix = new ArrayList();

 ArrayList newMatrix = new ArrayList();

 ArrayList originalGene = new ArrayList();

 ArrayList newGene = new ArrayList();
 public Compute(int i){

 num = i;
 }


 public void InitializeGene(){
  originalGene.clear();
  int i;
  for(i=0;i<num;i++){
    originalGene.add(1.0);
  }
 }

 public void ShowGene(){
  int i;
  for(i=0;i<num;i++){
  System.out.println(originalGene.get(i));
  }
 }

 public void ProduceMatrix(){
 
   int i,j,k;
   int[] count;
   boolean ok=false;
   count=new int[num];
   for(k=0;k<num;k++){
         count[k]=0;
       } 
   while(!ok){
   originalMatrix.clear();
   for(i=0;i<num;i++){
       for(j=0;j<num;j++){
        if(j<i){
         Integer temp = (Integer)originalMatrix.get(j*num+i);
         int t = temp.intValue();
         double d =Math.random();
         if(t==0){
          if(d<0.3){
          originalMatrix.add(1);      
        }else if(d>=0.3&&d<0.6){
         originalMatrix.add(-1);
       }else{
         originalMatrix.add(0);
         count[i]++;
         count[j]++;
        }
       }else{
         originalMatrix.add(0);
         count[i]++;
         count[j]++;
         }
      }else{
         double d;
         d=Math.random();
         if(i==j){
         originalMatrix. add(0);
        }else if(d<0.3){
         originalMatrix.add(1);      
        }else if(d>=0.3&&d<0.6){
         originalMatrix.add(-1);
       }else{
         originalMatrix.add( 0);
         count[i]++;
         count[j]++;
         }
        }
     }
   }
   ok=true;
   
   for(k=0;k<num;k++){
    if(count[k]==(num-1)*2){
      ok=false;
      for(i=0;i<num;i++){
       count[i]=0;
      }
      break;
    }
   }
  }
 }

 public double numerator(int j){
       double sum=0.2;
       Double tempDouble;
       Integer tempInt;
       int i;
       for(i=0;i<num;i++){
         tempInt = (Integer)originalMatrix.get(j*num+i);
         int temp = tempInt.intValue();
         if(temp == 1){
         tempDouble = (Double)originalGene.get(i);
         sum=sum+tempDouble.doubleValue();
         }                 
       }
       return sum;     
}   

  public double denominator(int j){
       double sum=1.0;
       Double tempDouble;
       Integer tempInt;
       int i;
       for(i=0;i<num;i++){
         tempInt = (Integer)originalMatrix.get(j*num+i);
         int temp = tempInt.intValue();
         if(temp==1||temp==-1){
         tempDouble = (Double)originalGene.get(i);
         sum=sum+tempDouble.doubleValue();             
         }
       }
       return sum;
}

 public void Equation(){
  int i;
  boolean stable = false;
  double change;
  do{
   stable =true;
   for(i=0;i<num;i++){
   Double tempDoublt = (Double)(originalGene.get(i));
   double temp = tempDoublt.doubleValue();
   change = -0.2*temp+numerator(i)/denominator(i);
   originalGene.set(i,temp+change);
   if(Math.abs(change)>=0.0001){
    stable = false;
   }
  }
 }while(!stable);
 }
  public void ShowOriginalMatrix(){
   int i,j;
   for(i=0;i<num;i++){
       for(j=0;j<num;j++){
         System.out.println(originalMatrix.get(i*num+j));
       }
       System.out.println("\n");
   }
 }
   public void ShowNewMatrix(){
   int i,j;
   for(i=0;i<num-1;i++){
       for(j=0;j<num-1;j++){
         System.out.println(newMatrix.get(i*(num-1)+j));
       }
       System.out.println("\n");
   }
 }
  public void RemoveOneGene(int i){
   int j,k;
   

   newGene.clear();
   for(j=0;j<num-1;j++){
   
    newGene.add(1.0);
   
  }

   newMatrix.clear();
   for(j=0;j<num;j++){
    for(k=0;k<num;k++){
     if(j==i){
      newMatrix.add("2");
     }else if(j!=i&&k==i){
      newMatrix.add("2");
     }else{
      newMatrix.add(originalMatrix.get(j*num+k));
     } 
    }
   }
   while(newMatrix.size()!=(num-1)*(num-1)){
    newMatrix.remove("2");
   }
 }
  public void NewEquation(){
   int i;
   boolean stable = false;
   double change;
   do{
   stable =true;
   for(i=0;i<num-1;i++){
    Double tempDoublt = (Double)(newGene.get(i));
    double temp = tempDoublt.doubleValue();
    change = -0.2*temp+NewNumerator(i)/NewDenominator(i);
    newGene.set(i,temp+change);
    if(Math.abs(change)>=0.0001){
     stable = false;
   }
  }
 }while(!stable);
  }

   public double NewNumerator(int j) {
       double sum=0.2;
       Double tempDouble;
       Integer tempInt;
       int i;
       for(i=0;i<num-1;i++){
         tempInt = (Integer)newMatrix.get(j*(num-1)+i);
         int temp = tempInt.intValue();
         if(temp == 1){
         tempDouble = (Double)newGene.get(i);
         sum=sum+tempDouble.doubleValue();
         }                 
       }
       return sum; 
    }

   public double NewDenominator(int j) {
       double sum=1.0;
       Double tempDouble;
       Integer tempInt;
       int i;
       for(i=0;i<num-1;i++){
         tempInt = (Integer)newMatrix.get(j*(num-1)+i);
         int temp = tempInt.intValue();
         if(temp==1||temp==-1){
         tempDouble = (Double)newGene.get(i);
         sum=sum+tempDouble.doubleValue();             
         }
       }
       return sum;
    }
   public void ShowNewGene(){
     int i;
    for(i=0;i<num-1;i++){
    System.out.println(newGene.get(i));
    }
   }
}

