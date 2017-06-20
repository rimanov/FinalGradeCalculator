//FINAL GRADE CALCULATOR
//Rasul Imanov
#include <iostream>
using namespace std;


int main()
{
  bool okay = true;
double possibleHomework, possibleQuiz, possibleExam, possibleFinal;
double pointHomework, pointQuiz, pointExam, pointFinal;
double percentageFinal, totalHomeworkPercentage, totalQuizPercentage, totalExamPercentage, totalFinalPercentage;
double totalPointHomework, totalPointQuiz, totalPointExam;
double possibleOverall;
double weightHomework, weightQuiz, weightExam, weightFinal;

cout<<"Please enter total of points you can receive from this course: ";
cin>>possibleOverall;

cout<<"Please enter total of HOMEWORK points possible: ";
cin>>possibleHomework;


do{
cout<<"Homework score (enter '0' to move on): ";
cin>>pointHomework;
totalPointHomework += pointHomework;
}
while(pointHomework != 0);

weightHomework = (possibleHomework/possibleOverall);
totalHomeworkPercentage = (totalPointHomework/possibleHomework);


cout<<endl<<"Now enter total of QUIZ points possible: ";
cin>>possibleQuiz;

do{
cout<<"Quiz score (enter '0' to move on): ";
cin>>pointQuiz;
totalPointQuiz += pointQuiz;
}
while(pointQuiz != 0);

weightQuiz = (possibleQuiz/possibleOverall);
totalQuizPercentage = (totalPointQuiz/possibleQuiz);

cout<<endl<<"Finally enter total of EXAM points possible: ";
cin>>possibleExam;

do{
cout<<"Exam score (enter '0' to move on): ";
cin>>pointExam;
totalPointExam += pointExam;
}
while(pointExam != 0);

weightExam = (possibleExam/possibleOverall);
totalExamPercentage = (totalPointExam/possibleExam);

cout<<"Enter total FINAL points possible: ";
cin>>possibleFinal;

cout<<"Final score: ";
cin>>pointFinal;

weightFinal = (possibleFinal/possibleOverall);
totalFinalPercentage = (pointFinal/possibleFinal);


percentageFinal = ((weightHomework*totalHomeworkPercentage)+(weightQuiz*totalQuizPercentage)+(weightExam*totalExamPercentage)+(weightFinal*totalFinalPercentage))*100;

cout<<"It looks like your final grade will be a " <<percentageFinal <<endl;
}
