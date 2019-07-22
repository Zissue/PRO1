#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;





int bin_to_dec(int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}



void say_hex(const vector <int>& s) {
	cout<<"]: 0x";
	int k=0;
	for (int i=0; i<4; i++) {
		int binnum=0;
		for (int j=0; j<4; j++) { //Creates binnum (4 times)
			binnum=binnum*10;
			binnum=binnum+s[k];
			k++;
		}
		binnum=bin_to_dec(binnum);
		if (binnum==10) cout<<"A";
		else if (binnum==11) cout<<"B";
		else if (binnum==12) cout<<"C";
		else if (binnum==13) cout<<"D";
		else if (binnum==14) cout<<"E";
		else if (binnum==15) cout<<"F";
		else cout<<binnum;
	}
}



int dec_to_bin(int n)
{
    int binaryNumber = 0;
    int remainder, i = 1 ;//step = 1
 
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}



int dec_to_ca2_6bits(int n)
{	
	int n2=n;
	if (n<0) n2=64+n;
    int binaryNumber = 0;
    int remainder, i = 1;// step = 1;
 
    while (n2!=0)
    {
        remainder = n2%2;
        n2 /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}



void save(vector <int>& v, int n) {
	for (int i=((v.size())-1); i>=0; i--) {
				v[i] = n%10;
				n /= 10;
			}
}

bool write_3(vector <int>& R) {
	int input_int=0;
	cin>>input_int;
	if (input_int<0 || input_int>=8) {cout<<"!X!]: Number must be between 0 and 7"<<endl; return true;}
	cout<<input_int;
	input_int = dec_to_bin(input_int);
	save(R,input_int);
	return false;
}



bool write_6(vector <int>& N) {
	int input_int;
	cin>>input_int; //Input N6
	if (input_int >= 32 || input_int < -32) {cout<<"!X!]: N must be a number between -32 and 31"<<endl; return true;}
	cout<<input_int;
	input_int = dec_to_ca2_6bits(input_int);
	save(N,input_int);
	return false;
}


bool enter(char c) {
	char input_char;
	cin>>input_char;
			if (input_char!=c) {cout<<"!X!]: ERROR: Expected a '"<<c<<"'"<<endl; return true;}
			cout<<input_char;
			return false;
}



bool introduce_hex(vector <int>& FINAL) {
	for (int i=0;i<16;i=i+4) {
		int input_int=0;
		char input_char;
		cin>>input_char;
		if (input_char=='0') input_int=0;
		else if (input_char=='1') input_int=1;
		else if (input_char=='2') input_int=2;
		else if (input_char=='3') input_int=3;
		else if (input_char=='4') input_int=4;
		else if (input_char=='5') input_int=5;
		else if (input_char=='6') input_int=6;
		else if (input_char=='7') input_int=7;
		else if (input_char=='8') input_int=8;
		else if (input_char=='9') input_int=9;
		else if (input_char=='A') input_int=10;
		else if (input_char=='B') input_int=11;
		else if (input_char=='C') input_int=12;
		else if (input_char=='D') input_int=13;
		else if (input_char=='E') input_int=14;
		else if (input_char=='F') input_int=15;
		else {cout<<"!X!]: ERROR: INVALID INPUT"<<endl; return true;}
		cout<<input_char;
		input_int = dec_to_bin(input_int);
		for (int j=0; j<4; j++) {
			FINAL[i+3-j] = input_int%10;
			input_int = input_int/10;
		}
	}
		return false;
}



void move_to(vector <int>& FINAL, int n, vector <int>& R) {
	for (int i=0; i<R.size(); i++) {
		R[i] = FINAL[i+n];
	}
}



void convert(vector <int>& R, int& input_int) {
	input_int=0;
	for (int i=0; i<R.size(); i++) {
		input_int=input_int*10;
		input_int=input_int+R[i];
	}
}



void convert_ca2(vector <int>& N, int& input_int) {
	input_int=0;
	for (int i=0; i<N.size(); i++) {
		input_int=input_int*10;
		input_int=input_int+N[i];
	}
	if (N[0]==1) {
		input_int = -32 + bin_to_dec(input_int%100000);
	}
	else input_int=bin_to_dec(input_int);
}
	









void mnemo_to_hex() {
	string mnemo;
	//char input_char;
	//int input_int;
	vector <int> Ra(3,0);
	vector <int> Rb(3,0);
	vector <int> Rd(3,0);
	vector <int> F(3,0);
	vector <int> N(6,0);
	vector <int> FINAL(16,0);
	cout << "[ENTER MNEMONIC]: ";
	cin>>mnemo;
	if (mnemo=="LD") {
			cout<<"["<<mnemo<<" ";
			if (enter('R')) return;
			if (write_3(Rd)) return;
			if (enter(',')) return;
			if (write_6(N)) return;
			if (enter('(')) return;
			if (enter('R')) return;
			if (write_3(Ra)) return;
			if (enter(')')) return;
			for (int i=0; i<6; i++) FINAL[10+i] = N[i];
			for (int i=0; i<3; i++) FINAL[7+i] = Rd[i];
			for (int i=0; i<3; i++) FINAL[4+i] = Ra[i];
			FINAL[0]=0;
			FINAL[1]=0;
			FINAL[2]=1;
			FINAL[3]=1;
			say_hex(FINAL);
			cout<<endl;
		}
		
		else if (mnemo=="ST") {
			cout<<"["<<mnemo<<" ";
			if (write_6(N)) return;
			if (enter('(')) return;
			if (enter('R')) return;
			if (write_3(Ra)) return;
			if (enter(')')) return;
			if (enter(',')) return;
			if (enter('R')) return;
			if (write_3(Rb)) return;
			for (int i=0; i<6; i++) FINAL[10+i] = N[i];
			for (int i=0; i<3; i++) FINAL[7+i] = Rb[i];
			for (int i=0; i<3; i++) FINAL[4+i] = Ra[i];
			FINAL[0]=0;
			FINAL[1]=1;
			FINAL[2]=0;
			FINAL[3]=0;
			say_hex(FINAL);
			cout<<endl;
		}
		
		else if (mnemo=="LDB") {
			cout<<"["<<mnemo<<" ";
			if (enter('R')) return;
			if (write_3(Rd)) return;
			if (enter(',')) return;
			if (write_6(N)) return;
			if (enter('(')) return;
			if (enter('R')) return;
			if (write_3(Ra)) return;
			if (enter(')')) return;
			for (int i=0; i<6; i++) FINAL[10+i] = N[i];
			for (int i=0; i<3; i++) FINAL[7+i] = Rd[i];
			for (int i=0; i<3; i++) FINAL[4+i] = Ra[i];
			FINAL[0]=0;
			FINAL[1]=1;
			FINAL[2]=0;
			FINAL[3]=1;
			say_hex(FINAL);
			cout<<endl;
		}
		
		else if (mnemo=="STB") {
			cout<<"["<<mnemo<<" ";
			if (write_6(N)) return;
			if (enter('(')) return;
			if (enter('R')) return;
			if (write_3(Ra)) return;
			if (enter(')')) return;
			if (enter(',')) return;
			if (enter('R')) return;
			if (write_3(Rb)) return;
			for (int i=0; i<6; i++) FINAL[10+i] = N[i];
			for (int i=0; i<3; i++) FINAL[7+i] = Rb[i];
			for (int i=0; i<3; i++) FINAL[4+i] = Ra[i];
			FINAL[0]=0;
			FINAL[1]=1;
			FINAL[2]=1;
			FINAL[3]=0;
			say_hex(FINAL);
			cout<<endl;
		}
		
		else if (mnemo=="AND" || mnemo=="OR" || mnemo=="XOR" || mnemo=="NOT" || mnemo=="ADD" || mnemo=="SUB" || mnemo=="SHA" || mnemo=="SHL") {
			cout<<"["<<mnemo<<" ";
			if (enter('R')) return;
			if (write_3(Rd)) return;
			if (enter(',')) return;
			if (enter('R')) return;
			if (write_3(Ra)) return;
			if (enter(',')) return;
			if (enter('R')) return;
			if (write_3(Rb)) return;
			for (int i=0; i<3; i++) FINAL[4+i] = Ra[i];
			for (int i=0; i<3; i++) FINAL[7+i] = Rb[i];
			for (int i=0; i<3; i++) FINAL[10+i] = Rd[i];
			if (mnemo=="AND") {FINAL[13]=0;FINAL[14]=0;FINAL[15]=0;}
			else if (mnemo=="OR") {FINAL[13]=0;FINAL[14]=0;FINAL[15]=1;}
			else if (mnemo=="XOR") {FINAL[13]=0;FINAL[14]=1;FINAL[15]=0;}
			else if (mnemo=="NOT") {FINAL[13]=0;FINAL[14]=1;FINAL[15]=1;}
			else if (mnemo=="ADD") {FINAL[13]=1;FINAL[14]=0;FINAL[15]=0;}
			else if (mnemo=="SUB") {FINAL[13]=1;FINAL[14]=0;FINAL[15]=1;}
			else if (mnemo=="SHA") {FINAL[13]=1;FINAL[14]=1;FINAL[15]=0;}
			else if (mnemo=="SHL") {FINAL[13]=1;FINAL[14]=1;FINAL[15]=1;}
			FINAL[0]=0;
			FINAL[1]=0;
			FINAL[2]=0;
			FINAL[3]=0;
			say_hex(FINAL);
			cout<<endl;
		}
			
			
			
		else {
			cout<<"INVALID MNEMONIC";
			return;
	}
}










void hex_to_mnemo() {
	string mnemo;
	char input_char;
	int input_int=0;
	vector <int> Ra(3,0);
	vector <int> Rb(3,0);
	vector <int> Rd(3,0);
	vector <int> F(3,0);
	vector <int> N(6,0);
	vector <int> FINAL(16,0);
	cout << "[ENTER HEXADECIMAL]: ";
	cin>>input_char;
	if (input_char!='0') {cout<<"!X!]: ERROR: Expected a '0'"<<endl; return;}
	cout<<"["<<input_char;
	if (enter('x')) return;
	if (introduce_hex(FINAL)) return;
	cout<<"]: ";
	for (int i=0; i<4; i++) {
		input_int=input_int*10;
		input_int=input_int+FINAL[i];
	}
	input_int=bin_to_dec(input_int);
	if (input_int==0) {
		move_to(FINAL,4,Ra);
		move_to(FINAL,7,Rb);
		move_to(FINAL,10,Rd);
		move_to(FINAL,13,F);
		convert(F,input_int);
		input_int=bin_to_dec(input_int);
		switch (input_int) {
			case 0: cout<<"AND "; break;
			case 1: cout<<"OR "; break;
			case 2: cout<<"XOR "; break;
			case 3: cout<<"NOT "; break;
			case 4: cout<<"ADD "; break;
			case 5: cout<<"SUB "; break;
			case 6: cout<<"SHA "; break;
			case 7: cout<<"SHL "; break;
		}
		convert(Rd,input_int);
		cout<<"R"<<bin_to_dec(input_int)<<",";
		convert(Ra,input_int);
		cout<<"R"<<bin_to_dec(input_int)<<",";
		convert(Rb,input_int);
		cout<<"R"<<bin_to_dec(input_int)<<endl;
		return;
	}
	else if (input_int==1) {}
	else if (input_int==2) {}
	else if (input_int==3) {
		cout<<"LD ";
		move_to(FINAL,4,Ra);
		move_to(FINAL,7,Rd);
		move_to(FINAL,10,N);
		convert(Rd,input_int);
		cout<<"R"<<bin_to_dec(input_int)<<",";
		convert_ca2(N,input_int);
		cout<<input_int;
		convert(Ra,input_int);
		cout<<"(R"<<bin_to_dec(input_int)<<")"<<endl;
		return;
		}
	else if (input_int==4) {
		cout<<"ST ";
		move_to(FINAL,4,Ra);
		move_to(FINAL,7,Rb);
		move_to(FINAL,10,N);
		convert_ca2(N,input_int);
		cout<<input_int;
		convert(Ra,input_int);
		cout<<"(R"<<bin_to_dec(input_int)<<")";
		convert(Rb,input_int);
		cout<<",R"<<bin_to_dec(input_int)<<endl;
		return;
		}
	else if (input_int==5) {
		cout<<"LDB ";
		move_to(FINAL,4,Ra);
		move_to(FINAL,7,Rd);
		move_to(FINAL,10,N);
		convert(Rd,input_int);
		cout<<"R"<<bin_to_dec(input_int)<<",";
		convert_ca2(N,input_int);
		cout<<input_int;
		convert(Ra,input_int);
		cout<<"(R"<<bin_to_dec(input_int)<<")"<<endl;
		return;
		}
	else if (input_int==6) {
		cout<<"STB ";
		move_to(FINAL,4,Ra);
		move_to(FINAL,7,Rb);
		move_to(FINAL,10,N);
		convert_ca2(N,input_int);
		cout<<input_int;
		convert(Ra,input_int);
		cout<<"(R"<<bin_to_dec(input_int)<<")";
		convert(Rb,input_int);
		cout<<",R"<<bin_to_dec(input_int)<<endl;
		return;
		}
	else if (input_int==7) {}
	else if (input_int==8) {}
	else if (input_int==9) {}
	else if (input_int==10) {}
	else if (input_int==11) {}
	else if (input_int==12) {}
	else if (input_int==13) {}
	else if (input_int==14) {}
	else if (input_int==15) {}
	else {
		cout<<"!X!]: ERROR: INVALID INPUT"<<endl;
		return;
	}
}










void help() {
	string mnemo;
	cout<<"['MNEMONIC' / ALL]: ";
	cin>>mnemo;
	if (mnemo=="ALL") {
	cout<<"AND Rd,Ra,Rb"<<endl;
	cout<<"OR Rd,Ra,Rb"<<endl;
	cout<<"XOR Rd,Ra,Rb"<<endl;
	cout<<"NOT Rd,Ra,Rb"<<endl;
	cout<<"ADD Rd,Ra,Rb"<<endl;
	cout<<"SUB Rd,Ra,Rb"<<endl;
	cout<<"SHA Rd,Ra,Rb"<<endl;
	cout<<"SHL Rd,Ra,Rb"<<endl;
	cout<<"CMPLT Rd,Ra,Rb"<<endl;
	cout<<"CMPLE Rd,Ra,Rb"<<endl;
	cout<<"CMPEQ Rd,Ra,Rb"<<endl;
	cout<<"CMPLTU Rd,Ra,Rb"<<endl;
	cout<<"CMPLEU Rd,Ra,Rb"<<endl;
	cout<<"LD Rd,6N(Ra)"<<endl;
	cout<<"ST 6N(Ra),Rd"<<endl;
	cout<<"LDB Rd,6N(Ra)"<<endl;
	cout<<"STB 6N(Ra),Rd"<<endl;
	}
	else if (mnemo=="AND") 		cout<<"AND Rd,Ra,Rb"<<endl;
	else if (mnemo=="OR") 		cout<<"OR Rd,Ra,Rb"<<endl;
	else if (mnemo=="XOR") 		cout<<"XOR Rd,Ra,Rb"<<endl;
	else if (mnemo=="NOT") 		cout<<"NOT Rd,Ra,Rb"<<endl;
	else if (mnemo=="ADD") 		cout<<"ADD Rd,Ra,Rb"<<endl;
	else if (mnemo=="SUB") 		cout<<"SUB Rd,Ra,Rb"<<endl;
	else if (mnemo=="SHA") 		cout<<"SHA Rd,Ra,Rb"<<endl;
	else if (mnemo=="SHL") 		cout<<"SHL Rd,Ra,Rb"<<endl;
	else if (mnemo=="CMPLT") 	cout<<"CMPLT Rd,Ra,Rb"<<endl;
	else if (mnemo=="CMPLE") 	cout<<"CMPLE Rd,Ra,Rb"<<endl;
	else if (mnemo=="CMPEQ") 	cout<<"CMPEQ Rd,Ra,Rb"<<endl;
	else if (mnemo=="CMPLTU") 	cout<<"CMPLTU Rd,Ra,Rb"<<endl;
	else if (mnemo=="CMPLEU") 	cout<<"CMPLEU Rd,Ra,Rb"<<endl;
	else if (mnemo=="LD") 		cout<<"LD Rd,6N(Ra)"<<endl;
	else if (mnemo=="ST") 		cout<<"ST 6N(Ra),Rd"<<endl;
	else if (mnemo=="LDB") 		cout<<"LDB Rd,6N(Ra)"<<endl;
	else if (mnemo=="STB") 		cout<<"STB 6N(Ra),Rd"<<endl;
	return;
}










int main() {
	cout<<endl;
	cout << "+=============================================+"<<endl;
	cout << " Type IN to translate from MNEMONIC to HEX" << endl;
	cout << " Type OUT to translate from HEX to MNEMONIC" << endl;
	cout << " Type HELP to see how every MNEMONIC is written" << endl;
	cout << "+=============================================+"<<endl<<endl;
	cout << "[IN/OUT/HELP]: ";
	string type;
	while (cin >> type) {
		if (type=="IN") mnemo_to_hex();
		else if (type=="OUT") hex_to_mnemo();
		else if (type=="HELP") help();
		cout << endl << endl << "[IN/OUT/HELP]: ";
}
}


// (c) Carlos Sansón (Best pro1 delegate ever for sure) @csansoon