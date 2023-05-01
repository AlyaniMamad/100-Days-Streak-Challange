import java.net.*;
import java.io.*;

public class T_P2_CLIENT {
    public static void main(String[] args) throws IOException {
        try (Socket clientSocket = new Socket("localhost", 5000)) {
            System.out.println("Connected to server");

            try (BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
                PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);
                BufferedReader stdIn = new BufferedReader(new InputStreamReader(System.in))) {

                String userInput;
                while ((userInput = stdIn.readLine()) != null) {
                    out.println(userInput);
                    System.out.println("Server response: " + in.readLine());
                }
            }
        } catch (IOException e) {
            System.err.println("Error in client: " + e.getMessage());
        }
    }
}
