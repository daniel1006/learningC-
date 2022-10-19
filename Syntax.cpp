#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream> // used for external files

using namespace std;

int main() {

// Printing 

    cout << "Hello" << endl;  // endl: prints out a new line and works like an enter key on a keyboard.
    cout << "world";          // no endl with have anything after that print write next to the declared text.
    cout << "!" << endl;
    cout << "/n" << endl; // the /n will word as an enter key to create a new line after that point. must be in brackets.

// variable. 
    
    /* these are case sensitive and can begin with letters or numbers. convention is CAMEL case. the two parts of a variable are the declatation,
     and assignment    */

    string name = "Daniel"; // string of characters
    char testGrade = 'A'; // single 8-bit character (includes punctuations) using single quotations.

    // can make all of the following unsigned by doing "unsigned int age0 = ";
    short age0 = 10; // atleast 16-bits signed integer
    int age1 = 20; // atleast 16-bits signed integer but not smaller than a short
    long age2 = 30; // atleast 32-bits signed integer
    long long age3 = 40; // atleast 64-bits signed integer

    float gpa0 = 2.5f; // single percision floating point
    double gpa1 = 3.5; // double percision floating point
    long double gpa2 = 3.5; // extended pecision floating point

    bool isTall; // 1 bit boolean as true of false
    isTall = true;

    name = " Daniel ";
    cout << " your name is " << name << endl; // example of a string with a variable weaved in.


// constants    
    int const BIRTH_YEAR = 1999; // const naming conventions are all in capital with an underscore.
    cout << BIRTH_YEAR;

// Casting, converts data types in other data types.
    cout << (int)3.14 << endl;
    cout << (double) 3 / 2 << endl;

//pointers
    /* is a type of information that works like a memory address.
        To be more specific intergers are stored in out computers working memory (RAM), each of which is stored in a container that is stored
        in a memory address. So when a computer wants to access a particular interger it will go to that memory address to retrieve the data.
    */
    int num = 10;
    cout << &num << endl; // the & tells the computer to go the memory adress where the variable 'num' is stored.
                            // Note that if you store the reference in an 'int' the pointer must also be in an  'int'.

    int *pNum = &num;  // the (*p)Num is the pointer that stores the memory address '&num'.
    cout << pNum << endl; //prints out the pointer that is storing the memory address so you will see a long set of characters. 

    // De-referencing pointers will grab the value that is inside the memory address.
    cout << *pNum; // this will print the value of 10
    cout << *&pNum; // this would also print out the value of 10.

// strings
    #include <string> // need to be implemented at top of file if youre using string.
    string greeting = "Hello";

    cout << greeting.length() << endl; // will type out the lenght of the string.
    cout << greeting[2] << endl; // will type out the 2nd character.
    cout << greeting.find("llo") << endl; // will look for llo in the string.
    cout << greeting.substr(2) << endl; //will type out all characters including and after the 2nd one.

//Numbers
    // note that for many of these you need to #include <cmath>
    cout << 2 * 3 << endl; // Basic math
    cout << 10 % 3 << endl; // this is not division, rather it will show the remainder of 10/3.
    cout << (1+2) * 3 << endl; // will follow order of operations
    cout << 10 / 3.333 << endl; // a number with a decimal will output decimals.

    int num = 100;
    num += 100; // adds 100 to nums.
    cout << num << endl; // will print out the final value. 

    num++; // will add 1 to the number
    num--; // will substract 1 to the number.

    cout << pow(2, 4); // this will raise 2 to the power of 4.
    cout << sqrt(36); // this will sqaure root 36.
    cout << round(4.3); //this will round the variable.
    cout << ceil(3.2); // this will round the number up. so in this case it would be 4.
    cout << floor(6.8); // similarly this will round the number done. In this case being 6.
    cout << fmax(3, 47); // will give the highest number, 47.
    cout << fmin(4, 50); //will give the lowest number 4.

// User input
    string enterName;
    cout << "Enter your name: ";
    cin >> enterName; // cin will pause the program untill the user enters something into it. 
    cout << "Hello " << enterName << endl; // This will the say Hello NAME.

    int num1, num2;
    cout << " Enter first number: ";
    cin >> num1; // the string will store the the users input.
    cout << " Enter second number: ";
    cin >> num2; // stores input of user
    cout << " Answer: " <<num1 + num2 << endl; // This will add the two number previously entered by the user.

    getline(cin, address); // getline allows the compiler to use a sentence entered by the user. address is the varibles name which will hold the data entered by the user.
    cout << "I know where that is" << address; // this is an example of how you could use it.

// Arrays
    int favoriteNumbers[3] = {24, 69, 666}; //keep in mind with arrays that the first value in them is 0 and not 1. Each number in an arrray is called an element.
    cout << favoriteNumbers[1] << endl; // this would print out 69.

    int luckyNumbers[6]; // This is another way to create an array if you don't know what values you want to put it. it means it will hold 6 elements.
    luckyNumbers[0] = 90; // This shows how 0 out of 6 is now populated in the array. It allows you to do it one at a time.

// 2-D arrays
    // This is a 2 dimentional array that represent the rows and columns.
    int numberGrid[2][3] = { // the first number indicates how many arrays their are while the 2nd one shows how many numbers are in each of those arrays.
                            {1, 2, 3}, 
                            {4, 5, 6} }; 
    numberGrid[2][2] = 99; // can also label them individually. so in the 2nd arrays the 3rd number will be 99 because the frist are considered 0 and not 1.
 
// Vector
    // these are dinamic arrays. note you nede to include it at top of code.

    vector<string> friends; // this says were using strings in our vector and we labelled it as friends.
    friends.push_back("Oscar"); // push_back pushed a variable into the vector.
    friends.push_back("Angela");
    friends.push_back("kevin");
    friends.insert(friends.begin() + 1, "Jim"); //Begin is a pointer that starts at the begining of the vector and will place Jim at the 1 position.

    friends.erase(friends.begin() + 3); //This will erase what ever is in the 3rd position starting from the beginning of the vector.

    cout << friends.at(2) << endl; // This calls to print the second position of the array.

// Functions
    // can usually create the function outside of the code.

    string lullaby = "Marry had a little lamb";
    cout << lullaby.length(); // this will print how many characters there are in the string lullyby.
    cout << lullaby[4]; // similarly this will print the 4th character of the string. 
    lullaby[0] = 'B'; // this will change the first chracter of the string to B, so Barry had a little lamb.
    cout << lullaby.find("had", 0); // this will scearch for "had" in the string and print at which character the word starts. 
    cout << lullaby.substr(4, 3); //this will starting at the 4th character grab the next 3 and print them out on the screen. 

    void sayHi() { // void is the simplest function as its purpose is to not return anything. sayHi is the name of the function.
        cout << "Hello friend"; //anything inside the curly brackets is the working elements of the function. 
}
    sayHi(); // this is how you call the function.

    void sayHi(string name, int age) { // this is how you can pass parameters into a functions.
        cout << "Hello " << name << age; // how you would use those parameters.
}
    sayHi(Daniel, 23); // calling the funtion along with its parameters. 

// Exponent functions
    // is a function that will take a number to a specific power.

    int power(int bottomNumber, int powerNumber) { // here you have variables for the base number and the number it will be to the power of.
    int result = 1; // the goal is for the 'result' variable to equal that of the above calculation.
    for (int i = 0; i < powerNumber;) // this will loop as many times as 'powerNumber'.
    {
        result = result * powerNumber; // this works because its saying it will multiply the bottomNumber by itself for a total of powerNumber times.
    }
    return result;
}

    cout << power(2,3); // calling the power functions and plugging in the two perameters.

// IF Statements

    bool isStudent = false;
    bool isSmart = false;

    if(isStudent && isSmart) {
        cout << "You are a smart student" << endl;
}   else if(isStudent && !isSmart) { // else if is another condition that will be checked before the program goes to 'else'. the !isSmart is a negation operator that negates the operation next to it. here it means not smart. 
        cout << "You are not a smart student. sorry." << endl;
} else { // else is used as the other otion for anf if satement. so if 'if' is true, else would be false.
        cout << "You are neither smart nor a student " << endl;
}

//If Comparison  
    // you can also apply condition like (>, greater than) (<, less than) (>==, greater than or equal too) (<==, less than or eqaul too)
    //                                   (!==, not equal too) (==, equal too)

    if(1<3) {
        cout << "number comparison was true" << endl;
}
    if('a' > 'b') {
        cout << "character comparison was true" << endl;
}

    string myString = "cat";
    if(myString.compare("cat") == 0) {
        cout << " string comparison was equal" << endl;
}

// Switch Statements
    // compares one value to a bunch of different values.

string dayOfTheWeek (int dayNumber) {
    string dayName; // string used to lable the days of the week.

    switch (dayNumber) // this is the value that will be compared to everything else.
    {
    case 0: // this simply means that in the case of the parameter '0', the code below it will run.
        dayName =  "Monday";
        break; // without this statement the code will keep running downward.
    
    case 1:
        dayName = "Tuesday";
        break;
    case 2:
        dayName = "Wenesday";
        break;
    default: // This acts as a safety net and will fire if none of the cases are met.
        dayName = "Invalid";
    }
}

    cout << dayOfTheWeek(1) // this is how you would call the function and pass in a parameter so it could print out "Tuesday".

//While loop
    // will continue to loop will a certain condition is true so be sure to make sure that at some point the condition will be false.
    int index = 1;
    while (index <= 5) { // this is the condition that will have the loop continue until it is met/true.
    cout << index << endl;
    index ++; //this will continue to add +1 to the index until the condition is met.
}

//Do While loop
    // the difference here is that the loop is cycled through first and then the condition is met. Used for things like passwords.
    do {
    cout << index << endl;
    index++;
} while (index <=5); // so here if the index was 6 it would print out 6 then stop.

//For Loop
    // Will allow you to continuously keep track of how many times you've gone through the loop. Notice how it uses less code than a 'while loop'.
    for(int i = 0; i < 5; i++) { // "i < 5" is called a loop guard and is supposed to stop the loop from going on forever.
    cout << i << index; // this says that the value starts at zero, prints up to less than 5 then stops.
}

    //this is another example of how a for loop can be used.
    int nums[] = {3, 5, 7, 90, 4, 0.5};
    for (int i = 0; i < 6; i++) // the 3 parameters are the counter variable(which is the entire array), the condition it will check, and the incrementer.
    {
        cout << nums[i] << endl; // so this will continue to print out figures in the array until it reaches 6 characters.
    }

// Nested For loop
    // is a loop inside of another loop
    
    int numberGrid[2][3] = { 
                            {1, 2, 3}, 
                            {4, 5, 6} }; 
    numberGrid[2][2] = 99;

    for (int i = 0; i < 2; i ++) // less than 2 is meant so that it can loop through each array (given that theirs ).
    {                            // so for each i loop the j loop will fully go through its cycles.
        for(int j = 0; j<3; j ++) // j is 3 because there are 3 numbers in each array.
        cout << numberGrid[i][j]; // this will prin the arrays above
    }
    

//Exception catchin
    // creates exeptions that will help the code continue to run if it encouters something that could break it.
    try
    {
        division(10,0); // division would be a previously created function that does not allow divisions by 0. it would contain execptions.
    }
    catch(const char*msg) // In the envent the function finds catched an exception it will output this diameter which in this case is a message.
    {
    cerr << msg << endl;
    }
    
//Return statement
    // returns the result of a function.
    // the following functions purpose is to cube a number.

    double cube (double num) { // here a function 'cube' is creates with a parameter called 'num'.
    return num * num * num; // here the parameter num it multiplied 3 times is to be returned. it also mean that were done excuting the code. so anything under it won't run.
}
    cout << cube(5.5); // the function 'cube' is called with 5.5 being passed into the num parameter.

// Classes & Objects
    // Class is essentially a blueprint for new kinds of data type that aren't automatically stored with c++ (such as numbers,characters). 
    // An onbect is an intance of the blueprint we created or its an instance of that class.

//This class should be outside the int main()

class Book { // here we can difine the data type of 'Book', by giving it attributes.
    public:
        string title; // these would be the template for our data type.
        string author;
        int pages;
};

    // This is called inside the int main()

    Book book1; // this gives book1 the data set of Book. You can also pass in values like book1("Harry Potter").
    book1.title = "Harry Potter";
    book1.author = "your mum";
    book1.pages = 666;

    cout << book1.title; // This would print out 'Harry Potter'.

// Constructor functions
    // Is a special function that gets called when we use an object of a class.

class Book { 
    public:
        string title; 
        string author;
        int pages;
        Book() { // this is a contructor that now acts as a special function whenever the Book object gets called. can also pass in value Book(name), which given example from above would print out 'Harry Potter'.
        cout << "New object" << endl;
};
};

    // This is just a more efficient way of plugging data into the object.
class Book { 
    public:
        string title; 
        string author;
        int pages;
        Book(string aTitle, string aAuthor, int aPages) { 
            title = aTitle; // can also specify the information here and just call like this book1.title and you would get the information.
            author = aAuthor;
            pages = aPages;
};
};

    Book book1("Harry Potter", "Your mum", 666);


// Object functions
    // a function that can be put into a class which an object can use.
    // this is using a simple example of a class.
    // the goal is that we want to determine is a student is on the honour role.
    class Student {
        public:
            string name;
            string path;
            double average;
        Student(string aName, string aPath, double aAverage); {

            name = aName;
            path = aPath;
            average = aAverage;
    }
        bool hasHonours() { // this is the function the object can call upon.
            if (average >= 3.5)
            {
                return true;
            } return false;
            
    }
    };

    // Inside the int main()
    Student student1("JIm", "ethic", 3.4);
    Student student2("Pam", "arts", 4.3);

    cout << student1.hasHonours(); // this will now print Jims info and say if he has honours with 0 as true ans 1 as false.


// Geeters and setters
    // allows you to control the access to different attributes within classes.
    class Student {
        private: // this means that only code within the student class can access the name attribute.
                string name; // this makes it so nonesense like '47' can't be put down as a name for a student.
        public:// allows the code to be changed outside the class Student.
            string name;
            string path;
            double average;
        Student(string aName, string aPath, double aAverage); {

            setName = aName; // notice the change here given the new funciton.
            path = aPath;
            average = aAverage;
    }
        void setName(string aName) { // this makes it so is we want to change name we have to go through this function.
            if(aName == "Daniel" || aName == "Dan") // || means or. This are setting rules for what name can be.
                name = aName
    }       else {
            name = "Not valid"; // what happens if the name entered is not valid.
    }
            string getName() { // this is neccesary because name was put in private.
            return name;
    };
    };
    };

    // Inside the int main()
    Student getName("Daniel"); // notive how getName was necessary.


// Inheritance
    // this is where a class can be defined and allow other classes to inherit the functionalitys of each other.

    class ItalianChef: public Chef { // this makes it so all functions within chef are inherited by ItalianChef.
            // can also add new objects here.
    };

// Text files
    // As opposed to getting information from a user we can get and send info to a seperate text file. This can be used when a lot of data is required.

    ifstream iFile; // delcaring the input file
    ofstream iFile; // declaring the output file

    iFile.open("nameOfFile.txt"); // open input file
    oFile.open("out.txt");  // opens output file.

    int fileData = 0;
    while (ifile >> fileData ){ // will loop through the code through each element.
        oFile << fileData * 2; // for example will multiply all data by 2 
    }

    iFIle.close() // closing the files
    oFile.close()

    return 0;
}