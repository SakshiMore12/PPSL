#include <iostream> 
#include <fstream> 
#include <string> 
using  namespace  std ; 
   
   int  main () { 
  
  // Name of the file to be created 
    string  filename =  "sample.txt" ; 
  
  // Create an ofstream object for writing to the file 
    ofstream  outFile (filename); 
  
  // Check if the file is created successfully 
     if  (!outFile) { 
        cout  <<  "Error: File could not be created!"  <<  endl ; 
      return  1 ;  // Exit the program with an error code 
  } 

  // Write some general text into the file 
       outFile <<  "This is a sample text file."  <<  endl ; 
       outFile <<  "It contains some basic content for demonstration purposes."  <<  endl ; 
       outFile <<  "File handling in C++ is essential for data management." <<  endl ; 
  
  // Close the output file 
      outFile.close(); 
  
  // Create an ifstream object for reading from the file 
     ifstream  inFile (filename); 
 
  
  // Check if the file is opened successfully for reading 
    if  (!inFile) { 
       cout  <<  "Error: File could not be opened for  reading!"  <<  endl ; 
    return  1 ;  // Exit the program with an error  code 
  } 
  
  // Read and display the content of the file 
     string  line; 
      cout  <<  "Contents of the file:"  <<  endl ; 
        while  (getline(inFile, line)) { 
          cout  << line <<  endl ;  // Print each line from  the file 
  } 
  
  // Close the input file 
      inFile.close(); 
     
     return  0 ;  // Exit the program successfully 

} 
