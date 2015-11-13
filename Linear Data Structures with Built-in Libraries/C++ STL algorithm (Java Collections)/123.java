import java.util.Scanner;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.io.PrintWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class data{
  String keyWord;
  String[] tile;
  int keyWordIndex;

  data(String keyWord,String[] tile,int index){
    this.keyWord = keyWord;
    this.tile = tile;
    this.keyWordIndex = index;
  }

  void print(){
    PrintWriter out = new PrintWriter(System.out);
    for(int i=0; i<tile.length;i++){
      if(i>0)out.print(" ");
      if(i==keyWordIndex)
        out.print(tile[i].toUpperCase());
      else
        out.print(tile[i]);
    }
    out.println();
    out.flush();
  }
}

public class Main{
  public static void main(String[] args) throws IOException{
    BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    ArrayList<data> dataStorage = new ArrayList<data>();
    HashMap<String, Boolean> ignoreableWords = new HashMap<String,Boolean>();

    String ignoreWord;
    while(true){
      ignoreWord=in.readLine();
      if(ignoreWord.equals("::"))
        break;
      ignoreableWords.put(ignoreWord.toLowerCase(), true);
    }

    String tile;
    while((tile=in.readLine())!=null){
      String tileWords[] = tile.split("\\s");

      for(int i=0;i<tileWords.length;i++)
        tileWords[i] = tileWords[i].toLowerCase();

      for(int i=0;i<tileWords.length;i++)
        if(!ignoreableWords.containsKey(tileWords[i])){
          data d = new data(tileWords[i],tileWords,i);
          dataStorage.add(d);
        }
    }
    Collections.sort(dataStorage,new Comparator<data>(){
      @Override
      public int compare(data s1, data s2){
        return s1.keyWord.compareTo(s2.keyWord);
      }
    });
    Iterator<data> it = dataStorage.iterator();

    while(it.hasNext())
      it.next().print();
  }
}
