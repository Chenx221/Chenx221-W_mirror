package cf.chenx221.others;

import java.io.FileReader;
import java.io.FileWriter;

public class NotepadTellMe {
    public static void main(String[] args) throws Exception{
        Runtime rt = Runtime.getRuntime();
        rt.exec("notepad.exe C:\\Users\\Chenx221\\Documents\\GitHub\\Chenx221-W\\JavaCode\\temp.txt");
        FileReader reader = new FileReader("C:\\Users\\Chenx221\\Documents\\GitHub\\Chenx221-W\\JavaCode\\temp.txt");
        int data;
        while ((data=reader.read())!=-1){
            System.out.print((char) data);
        }
        reader.close();
    }
}
