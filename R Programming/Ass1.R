#a=c(5,10,15,20,25,30)
#a
#print(paste("Minimum value in the vector is: ", min(a)))
#print(paste("Max value in the vector is: ", max(a)))





# num=readline()
# num<-as.integer(readline(prompt = "Enter a number: "))
# fact<-1
# 
# if(num<0){
#   print("Sorry, the number is negative")
#   
# } else if(num == 0){
#   print("The factorial of 0 is 1")
# } else{
#   for(i in 1:num){
#     fact=fact*i
#   }
#   print(paste("The factorial of the number is", fact))
# }
# 
# recurse_fibonacci<-function(n){
#   if(n<=1){
#     return(n)
#   } else{
#     return(recurse_fibonacci(n-1) + recurse_fibonacci(n-2))
#   }
# }
# 
# nterm=as.integer(readline(prompt = "Enter the number of terms"))
# if(nterm<=0){
#   print("Enter a valid term number")
# } else{
#   for(i in 0:(nterm-1)){
#     print(recurse_fibonacci(i))
#   }
# }

# add <- function(x, y) {
#   return(x + y)
# }
# subtract <- function(x, y) {
#   return(x - y)
# }
# multiply <- function(x, y) {
#   return(x * y)
# }
# divide <- function(x, y) {
#   return(x / y)
# }
# # take input from the user
# print("Select operation.")
# print("1.Add")
# print("2.Subtract")
# print("3.Multiply")
# print("4.Divide")
# choice = as.integer(readline(prompt="Enter choice[1/2/3/4]: "))
# n1 = as.integer(readline(prompt="Enter first number: "))
# n2 = as.integer(readline(prompt="Enter second number: "))
# operator <- switch(choice,"+","-","*","/")
# result <- switch(choice, add(n1, n2), subtract(n1, n2), multiply(n1, n2), divide(n1, n2))
# print(paste(n1, operator, n2, "=", result))



