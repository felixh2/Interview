#include<stdio.h>
#include<math.h>



// TASK 1
//void MakeMeBinary(Fill here) {}

// TASK 2
//int BinaryToDecimal(Fill here) {}

// TASK 3
//void SwapNumbers(Fill here) {}

// TASK 4
//float DotProduct(Vector A, Vector B) {}

// TASK 6 
struct Force{
	Vector* Acceleration;
	float Mass;
}

int main() {


	// TASK 1 - make a 'binary' array 1010101010 //
	int arr[10] = { 0 };
	MakeMeBinary(Fill here);
	for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
	//--------------------------------------------------------------------------// 



	// TASK 2 - from binary to decimal - what is the decimal value of 1010101010 //
	printf("%d\n", BinaryToDecimal(Fill here));
	//--------------------------------------------------------------------------// 


	// TASK 3 - swap two integers //
	int a = 9;
	int b = 6;
	printf("a is %d, b is %d\n", a, b);
	SwapNumbers(Fill here);
	printf("a is %d, b is %d\n", a, b);
	//--------------------------------------------------------------------------// 


	// TASK 4 - dot product between two vectors - make a *3d* Vector class with a dot product function inside //
	Vector VecA(1.f, 2.f, 3.f);
	Vector VecB(0.f, 4.f, 5.f);
	float DotSum_1 = VecA.DotProduct(&VecB);
	//--------------------------------------------------------------------------// 
	
	// TASK 5 - dot product between two vectors - make a *2d* Vector class  //
	Vector2 VecC(1.f, 2.f);
	Vector2 VecD(0.f, 4.f);
	float DotSum_2 = VecC.DotProduct(&VecD);
	//--------------------------------------------------------------------------// 
	
	
	// TASK 6 - Calculate the force acting on a mass of 100 kg moving at acceleration of 2 m/sec^2  //
	struct Force;
	//printf("%f\n",)
	//--------------------------------------------------------------------------// 

	while (1);
	return 0;
}