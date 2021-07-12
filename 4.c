//Day4

//structure in C
// wow
/* Lets just talk about its syntex like how to define a structure
struct nikko{
    admins
};
now let's see this here nikko is the entire type of structure and admins are 
variables within the struct

let's simply creatre a single structure in a single line 
struct nikko name_of_the single_struct;

now as we define it we also want to access right ? 
so thats also so easy (tip think this as a Database)
name_of_the_name.name_of_the_variable;
like in our case admin.nikko
for example something like this 
struct example {
  int x;
};
struct example an_example; 
an_example.x = 33;

well now i think we are ready to code some shit out
and plz always remember there is a difference between a good programmer and a programmer
well now days i see there are lot's of kids willing to code but not understanding how 
memory works :) well anyways here we code
*/


    struct telegram{
        int user;
        int id;
        float token;
    };
    int main()
    {
        struct telegram sudo;
        telegram.user = 23;
        telegram.id = 7;
        telegram.token =45776429879704670674867.784543;
    }

    //remember = The '.' operator is used to access different variables inside a union also.
