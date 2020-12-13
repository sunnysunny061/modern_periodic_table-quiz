#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<windows.h>
#include<process.h>
using namespace std;
	struct element
{	
   short atomic_no;
   char name[100];
   char elec_confg[50];
   short group;
   char block;
   short period;
   float atomic_w;
   float en;
   short atomic_r;
   char origin[100];
   float melt_p;
   float boil_p;
   float density;
}
		element[115];
int main()
	{
			int t,n,a,i,b;
			int x,y,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,d14,d15,d16,d17,d18,d19,d20,d21,d22,d23,d24;
			char d25;
			x=0,y=0;
			char name[50],c;
			system("COLOR 1E");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\tfun and learn at the same time with this modern periodic table game ;) ";
			Sleep(4000);
			system("cls");
			for(i=0;i<101;i++)
			{
				Sleep(5);
				system("cls");
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t welcome :)";
				cout<<"\n\n\n\n\t\t\n\n\n\n\n\n\t\t\t\t\t\t loading.."<<i<<"%";
				if(i==100)
				Sleep(1000);
				
			}
			system("cls");
	cout<<"\n\t\tTHE MODERN PERIODIC TABLE (118 ELEMENT)\n";
    cout<<"\t\t---------------------------------------\n";
    cout<<"\tH                                                      He"<<"\n\n";
    cout<<"\tLi Be                                 B  C   N  O   F  Ne"<<"\n\n";
    cout<<"\tNa Mg                                 Al Si  P  S   Cl Ar"<<"\n\n";
    cout<<"\tK  Ca Sc Ti V  Cr Mn Fe Co Ni Cu  Zn  Ga Ge  As Se  Br Kr"<<"\n\n";
    cout<<"\tRb Sr Y  Zr Nb Mo Tc Ru Rh Pd Ag  Cd  In Sn  Sb Te  I  Xe"<<"\n\n";
    cout<<"\tCs Ba La Hf Ta W  Re Os Ir Pt Au  Hg  Tl Pb  Bi Po  At Rn"<<"\n\n";
    cout<<"\tFr Ra Ac Rf Db Sg Bh Hs Mt Ds Rg  Cn  Nh Fl  Mc Lv  Ts Og"<<"\n\n\n";
    cout<<"\t\t Ce Pr Nd Pm Sm Eu Gd Tb Dy Ho Er Tm Yb Lu"<<"\n\n";
    cout<<"\t\t Th Pa U  Np Pu Am Cm Bk Cf Es Fm Md No Lr"<<"\n\n\n";
			
			system("PAUSE");
			system("cls");
			for(i=0;i<119;i++)
			{ 
					element[i].atomic_no=i;  //atomic number
			}
			//element name and their symbol
			{
				strcpy(element[1].name,"Hydrogen- H");
				strcpy(element[2].name,"Helium- He");
				strcpy(element[3].name,"Lithium- Li");
				strcpy(element[4].name,"Berylium- Be");
				strcpy(element[5].name,"Boron- B");
				strcpy(element[6].name,"Carbon- C");
				strcpy(element[7].name,"Nitrogen- N");
				strcpy(element[8].name,"Oxygen- O");
				strcpy(element[9].name,"Fluorine- F");
				strcpy(element[10].name,"Neon- Ne");
				strcpy(element[11].name,"Sodium- Na");
				strcpy(element[12].name,"Magnesium- Mg");
			    strcpy(element[13].name,"Aluminium- Al");
			    strcpy(element[14].name,"Sillicon- Si");
			    strcpy(element[15].name,"Phosphorus- P");
			    strcpy(element[16].name,"Sulphar- S");
			    strcpy(element[17].name,"Chlorine- Cl");
			    strcpy(element[18].name,"Argon- Ar");
			    strcpy(element[19].name,"Potassium- K");
			    strcpy(element[20].name,"Calcium- Ca");
			    strcpy(element[21].name,"Scandium- Sc");
			    strcpy(element[22].name,"Titanium- Ti");
			    strcpy(element[23].name,"Vanadium- V");
			    strcpy(element[24].name,"Chromium- Cr");
			    strcpy(element[25].name,"Manganese- Mn");
			    strcpy(element[26].name,"Iron- Fe");
			    strcpy(element[27].name,"Cobalt- Co");
			    strcpy(element[28].name,"Nickel- Ni");
			    strcpy(element[29].name,"Copper- Cu");
			    strcpy(element[30].name,"Zinc- Zn");
			    strcpy(element[31].name,"Gallium- Ga");
			    strcpy(element[32].name,"Germanium- Ge");
			    strcpy(element[33].name,"Arsenic- As");
			    strcpy(element[34].name,"Selenium- Se");
			    strcpy(element[35].name,"Bromine- Br");
			    strcpy(element[36].name,"Krypton- Kr");
			    strcpy(element[37].name,"Rubidium- Rb");
			    strcpy(element[38].name,"Strontium- Sr");
			    strcpy(element[39].name,"Yttrium- Y");
			    strcpy(element[40].name,"Zirconium- Zr");
			    strcpy(element[41].name,"niobium- Nb");
			    strcpy(element[42].name,"Molybdenum- Mo");
			    strcpy(element[43].name,"Technetium- Tc");
			    strcpy(element[44].name,"Ruthenium- Ru");
			    strcpy(element[45].name,"Rhodium- Rh");
			    strcpy(element[46].name,"Palladium- Pd");
			    strcpy(element[47].name,"Silver- Ag");
			    strcpy(element[48].name,"Cadmium- Cd");
			    strcpy(element[49].name,"Indium- In");
			    strcpy(element[50].name,"tin- Sn");
			    strcpy(element[51].name,"Antimony- Sb");
			    strcpy(element[52].name,"Tellurium- Te");
			    strcpy(element[53].name,"Iodine- I");
			    strcpy(element[54].name,"Xenon- Xe");
			    strcpy(element[55].name,"Caesium- Cs");
			    strcpy(element[56].name,"Barium- Ba");
			    strcpy(element[57].name,"Lantanum- La");
			    strcpy(element[58].name,"Cerium- Ce");
			    strcpy(element[59].name,"Praseodymium- Pr");
			    strcpy(element[60].name,"Neodymium- Nd");
			    strcpy(element[61].name,"Promethium- Pm");
			    strcpy(element[62].name,"Samarium- Sm");
			    strcpy(element[63].name,"Europium- Eu");
			    strcpy(element[64].name,"Gadolinium- Gd");
			    strcpy(element[65].name,"Terbium- Tb");
			    strcpy(element[66].name,"Dysprosium- Dy");
			    strcpy(element[67].name,"Holmium- Ho");
			    strcpy(element[68].name,"Erbium- Er");
			    strcpy(element[69].name,"Thulium- Tm");
			    strcpy(element[70].name,"Ytterbium- Yb");
			    strcpy(element[71].name,"Lutetium- Lu");
			    strcpy(element[72].name,"Hafnium- Hf");
			    strcpy(element[73].name,"Tantalum- Ta");
			    strcpy(element[74].name,"Tungsten- W");
			    strcpy(element[75].name,"Rhenium- Re");
			    strcpy(element[76].name,"Osmium- Os");
			    strcpy(element[77].name,"Iridium- Ir");
			    strcpy(element[78].name,"Platinum- Pt");
			    strcpy(element[79].name,"Gold- Au");
			    strcpy(element[80].name,"Mercury- Hg");
			    strcpy(element[81].name,"Thallium- Tl");
			    strcpy(element[82].name,"Lead- Pb");
			    strcpy(element[83].name,"Bismuth- Bi");
			    strcpy(element[84].name,"Polonium- Po");
			    strcpy(element[85].name,"Astatine- At");
			    strcpy(element[86].name,"Radon- Rn");
			    strcpy(element[87].name,"Francium- Fr");
			    strcpy(element[88].name,"Radium- Ra");
			    strcpy(element[89].name,"Actinium- Ac");
			    strcpy(element[90].name,"Thorium- Th");
			    strcpy(element[91].name,"Protactinium- Pa");
			    strcpy(element[92].name,"Uranium- U");
			    strcpy(element[93].name,"Neptunium- Np");
			    strcpy(element[94].name,"Plutonium- Pu");
			    strcpy(element[95].name,"Americium- Am");
			    strcpy(element[96].name,"Curium- Cm");
			    strcpy(element[97].name,"Berkelium- Bk");
			    strcpy(element[98].name,"Californium- Cf");
			    strcpy(element[99].name,"Einsteinium- Es");
			    strcpy(element[100].name,"Fermium- Fm");
			    strcpy(element[101].name,"Mendelevium- Md");
			    strcpy(element[102].name,"Nobelium- No");
			    strcpy(element[103].name,"Lawrencium- Lr");
			    strcpy(element[104].name,"Rutherfordium- Rf");
			    strcpy(element[105].name,"Dubnium- Db");
			    strcpy(element[106].name,"Seaborgium- Sg");
			    strcpy(element[107].name,"Bohrium- Bh");
			    strcpy(element[108].name,"Hassium- Hs");
			    strcpy(element[109].name,"Meitnerium- Mt");
			    strcpy(element[110].name,"Darmstadtium- Ds");
			    strcpy(element[111].name,"Rontgenium- Rg");
			    strcpy(element[112].name,"Copernicium- Cn");
			    strcpy(element[113].name,"Ununtrium- Uup");
			    strcpy(element[114].name,"Flerovium- Fl");
			    strcpy(element[115].name,"Ununpentium- Uup");
			    strcpy(element[116].name,"Livermorium- Lv");
			    strcpy(element[117].name,"Ununseptium- Uus");
			    strcpy(element[118].name,"Ununoctium- Uuo");
			    
			}
                  //electric configuration
			{
			
			    strcpy(element[1].elec_confg,"1s1");
                strcpy(element[2].elec_confg,"1s2");
                strcpy(element[3].elec_confg,"[He] 2s1");
                strcpy(element[4].elec_confg,"[He] 2s2	");
                strcpy(element[5].elec_confg,"[He] 2s2 2p1");
                strcpy(element[6].elec_confg,"[He] 2s2 2p2");
                strcpy(element[7].elec_confg,"[He] 2s2 2p3");
                strcpy(element[8].elec_confg,"[He] 2s2 2p4");
                strcpy(element[9].elec_confg,"[He] 2s2 2p5");
                strcpy(element[10].elec_confg,"[He] 2s2 2p6");
                strcpy(element[11].elec_confg,"[Ne] 3s1");
                strcpy(element[12].elec_confg,"[Ne] 3s2");
                strcpy(element[13].elec_confg,"[Ne] 3s2 3p1");
                strcpy(element[14].elec_confg,"[Ne] 3s2 3p2");
                strcpy(element[15].elec_confg,"[Ne] 3s2 3p3");
                strcpy(element[16].elec_confg,"[Ne] 3s2 3p4");
                strcpy(element[17].elec_confg,"[Ne] 3s2 3p5");
                strcpy(element[18].elec_confg,"[Ne] 3s2 3p6");
                strcpy(element[19].elec_confg,"[Ar] 4s1");
                strcpy(element[20].elec_confg,"[Ar] 4s2");
                strcpy(element[21].elec_confg,"[Ar] 3d1 4s2");
                strcpy(element[22].elec_confg,"[Ar] 3d2 4s2");
                strcpy(element[23].elec_confg,"[Ar] 3d3 4s2");
                strcpy(element[24].elec_confg,"[Ar] 3d5 4s1");
                strcpy(element[25].elec_confg,"[Ar] 3d5 4s2");
                strcpy(element[26].elec_confg,"[Ar] 3d6 4s2");
                strcpy(element[27].elec_confg,"[Ar] 3d7 4s2");
                strcpy(element[28].elec_confg,"[Ar] 3d8 4s2");
                strcpy(element[29].elec_confg,"[Ar] 3d10 4s1");
                strcpy(element[30].elec_confg,"[Ar] 3d10 4s2");
                strcpy(element[31].elec_confg,"[Ar] 3d10 4s2 4p1");
                strcpy(element[32].elec_confg,"[Ar] 3d10 4s2 4p2");
                strcpy(element[33].elec_confg,"[Ar] 3d10 4s2 4p3");
                strcpy(element[34].elec_confg,"[Ar] 3d10 4s2 4p4");
                strcpy(element[35].elec_confg,"[Ar] 3d10 4s2 4p5");
                strcpy(element[36].elec_confg,"[Ar] 3d10 4s2 4p6");
                strcpy(element[37].elec_confg,"[Kr] 5s1");
                strcpy(element[38].elec_confg,"[Kr] 5s2");
                strcpy(element[39].elec_confg,"[Kr] 4d1 5s2");
                strcpy(element[40].elec_confg,"[Kr] 4d2 5s2");
                strcpy(element[41].elec_confg,"[Kr] 4d4 5s1");
                strcpy(element[42].elec_confg,"[Kr] 4d5 5s1");
                strcpy(element[43].elec_confg,"[Kr] 4d5 5s2");
                strcpy(element[44].elec_confg,"[Kr] 4d7 5s1");
                strcpy(element[45].elec_confg,"[Kr] 4d8 5s1");
                strcpy(element[46].elec_confg,"[Kr] 4d10");
                strcpy(element[47].elec_confg,"[Kr] 4d10 5s1");
                strcpy(element[48].elec_confg,"[Kr] 4d10 5s2");
                strcpy(element[49].elec_confg,"[Kr] 4d10 5s2 5p1");
                strcpy(element[50].elec_confg,"[Kr] 4d10 5s2 5p2");
                strcpy(element[51].elec_confg,"[Kr] 4d10 5s2 5p3");
                strcpy(element[52].elec_confg,"[Kr] 4d10 5s2 5p4");
                strcpy(element[53].elec_confg,"[Kr] 4d10 5s2 5p5");
                strcpy(element[54].elec_confg,"[Kr] 4d10 5s2 5p6");
                strcpy(element[55].elec_confg,"[Xe] 6s1");
                strcpy(element[56].elec_confg,"[Xe] 6s2");
                strcpy(element[57].elec_confg,"[Xe] 5d1 6s2");
                strcpy(element[58].elec_confg,"[Xe] 4f1 5d1 6s2");
                strcpy(element[59].elec_confg,"[Xe] 4f3 6s2");
                strcpy(element[60].elec_confg,"[Xe] 4f4 6s2");
                strcpy(element[61].elec_confg,"[Xe] 4f5 6s2");
                strcpy(element[62].elec_confg,"[Xe] 4f6 6s2");
                strcpy(element[63].elec_confg,"[Xe] 4f7 6s2");
                strcpy(element[64].elec_confg,"[Xe] 4f7 5d1 6s2");
                strcpy(element[65].elec_confg,"[Xe] 4f9 6s2");
                strcpy(element[66].elec_confg,"[Xe] 4f10 6s2");
                strcpy(element[67].elec_confg,"[Xe] 4f11 6s2");
                strcpy(element[68].elec_confg,"[Xe] 4f12 6s2");
                strcpy(element[69].elec_confg,"[Xe] 4f13 6s2");
                strcpy(element[70].elec_confg,"[Xe] 4f14 6s2");
                strcpy(element[71].elec_confg,"[Xe] 4f14 5d1 6s2");
                strcpy(element[72].elec_confg,"[Xe] 4f14 5d2 6s2");
                strcpy(element[73].elec_confg,"[Xe] 4f14 5d3 6s2");
                strcpy(element[74].elec_confg,"[Xe] 4f14 5d4 6s2");
                strcpy(element[75].elec_confg,"[Xe] 4f14 5d5 6s2");
                strcpy(element[76].elec_confg,"[Xe] 4f14 5d6 6s2");
                strcpy(element[77].elec_confg,"[Xe] 4f14 5d7 6s2");
                strcpy(element[78].elec_confg,"[Xe] 4f14 5d9 6s1");
                strcpy(element[79].elec_confg,"[Xe] 4f14 5d10 6s1");
                strcpy(element[80].elec_confg,"[Xe] 4f14 5d10 6s2	");
                strcpy(element[81].elec_confg,"[Xe] 4f14 5d10 6s2 6p1");
                strcpy(element[82].elec_confg,"[Xe] 4f14 5d10 6s2 6p2");
                strcpy(element[83].elec_confg,"[Xe] 4f14 5d10 6s2 6p3");
                strcpy(element[84].elec_confg,"[Xe] 4f14 5d10 6s2 6p4");
                strcpy(element[85].elec_confg,"[Xe] 4f14 5d10 6s2 6p5");
                strcpy(element[86].elec_confg,"[Xe] 4f14 5d10 6s2 6p6");
                strcpy(element[87].elec_confg,"[Rn] 7s1");
                strcpy(element[88].elec_confg,"[Rn] 7s2");
                strcpy(element[89].elec_confg,"[Rn] 6d1 7s2");
                strcpy(element[90].elec_confg,"[Rn] 6d2 7s2");
                strcpy(element[91].elec_confg,"[Rn] 5f2 6d1 7s2");
                strcpy(element[92].elec_confg,"[Rn] 5f3 6d1 7s2");
                strcpy(element[93].elec_confg,"[Rn] 5f4 6d1 7s2");
                strcpy(element[94].elec_confg,"[Rn] 5f6 7s2");
                strcpy(element[95].elec_confg,"[Rn] 5f7 7s2");
                strcpy(element[96].elec_confg,"[Rn] 5f7 6d1 7s2");
                strcpy(element[97].elec_confg,"[Rn] 5f9 7s2");
                strcpy(element[98].elec_confg,"[Rn] 5f10 7s2");
                strcpy(element[99].elec_confg,"[Rn] 5f11 7s2");
                strcpy(element[100].elec_confg,"[Rn] 5f12 7s2");
                strcpy(element[101].elec_confg,"[Rn] 5f13 7s2");
                strcpy(element[102].elec_confg,"[Rn] 5f14 7s2");
                strcpy(element[103].elec_confg,"[Rn] 5f14 7s2 7p1");
                strcpy(element[104].elec_confg,"[Rn] 5f14 6d2 7s2");
                strcpy(element[105].elec_confg,"[Rn] 5f14 6d3 7s2	");
                strcpy(element[106].elec_confg,"[Rn] 5f14 6d4 7s2");
                strcpy(element[107].elec_confg,"[Rn] 5f14 6d5 7s2");
                strcpy(element[108].elec_confg,"[Rn] 5f14 6d6 7s2");
                strcpy(element[109].elec_confg,"[Rn] 5f14 6d7 7s2");
                strcpy(element[110].elec_confg,"[Rn] 5f14 6d8 7s2");
                strcpy(element[111].elec_confg,"[Rn] 5f14 6d9 7s2");
                strcpy(element[112].elec_confg,"[Rn] 5f14 6d10 7s2");
                strcpy(element[113].elec_confg,"[Rn] 5f14 6d10 7s2 7p1");
                strcpy(element[114].elec_confg,"[Rn] 5f14 6d10 7s2 7p2");
                strcpy(element[115].elec_confg,"[Rn] 5f14 6d10 7s2 7p3");
                strcpy(element[116].elec_confg,"[Rn] 5f14 6d10 7s2 7p4");
                strcpy(element[117].elec_confg,"[Rn] 5f14 6d10 7s2 7p5");
                strcpy(element[118].elec_confg,"[Rn] 5f14 6d10 7s2 7p6");
			}// atomic wight , radius and electeronegitivity
			{
				   element[1].atomic_w=1.008;           element[1].atomic_r=53;            element[1].en=2.20;
                   element[2].atomic_w=4.002602;        element[2].atomic_r=31;            element[2].en=0;
                   element[3].atomic_w=6.94;            element[3].atomic_r=167	;          element[3].en=0.98;
                   element[4].atomic_w=9.012182;        element[4].atomic_r=112;           element[4].en=1.57;
                   element[5].atomic_w=10.81;           element[5].atomic_r=87;            element[5].en=2.04;
                   element[6].atomic_w=12.011;          element[6].atomic_r=67;            element[6].en=2.55;
                   element[7].atomic_w=14.007;          element[7].atomic_r=56;            element[7].en=3.04;
                   element[8].atomic_w=15.999;          element[8].atomic_r=48;            element[8].en=3.44;
                   element[9].atomic_w=18.9984032;      element[9].atomic_r=42;            element[9].en=3.98;
                   element[10].atomic_w=20.1797;        element[10].atomic_r=38;           element[10].en=0;
                   element[11].atomic_w=22.98976928;    element[11].atomic_r=190;          element[11].en=0.93;
                   element[12].atomic_w=24.305;         element[12].atomic_r=145;          element[12].en=1.31;
                   element[13].atomic_w=26.9815386;     element[13].atomic_r=118;          element[13].en=1.61;
                   element[14].atomic_w=28.085;         element[14].atomic_r=111;          element[14].en=1.90;
                   element[15].atomic_w=30.973762;      element[15].atomic_r=98;           element[15].en=2.19;
                   element[16].atomic_w=32.06;          element[16].atomic_r=88;           element[16].en=2.58;
                   element[17].atomic_w=35.45;          element[17].atomic_r=79;           element[17].en=3.16;
                   element[18].atomic_w=39.948;         element[18].atomic_r=71;           element[18].en=0;
                   element[19].atomic_w=39.0983;        element[19].atomic_r=243;          element[19].en=0.82;
                   element[20].atomic_w=40.078;         element[20].atomic_r=194;          element[20].en=1.00;
                   element[21].atomic_w=44.955912;      element[21].atomic_r=184;          element[21].en=1.36;
                   element[22].atomic_w=47.867;         element[22].atomic_r=176;          element[22].en=1.54;
                   element[23].atomic_w=50.9415;        element[23].atomic_r=171;          element[23].en=1.63;
                   element[24].atomic_w=51.9961;        element[24].atomic_r=166;          element[24].en=1.66;
                   element[25].atomic_w=54.938045;      element[25].atomic_r=161;          element[25].en=1.55;
                   element[26].atomic_w=55.845;         element[26].atomic_r=156;          element[26].en=1.83;
                   element[27].atomic_w=58.933195;      element[27].atomic_r=152;          element[27].en=1.88;
                   element[28].atomic_w=58.6934;        element[28].atomic_r=149;          element[28].en=1.91;
                   element[29].atomic_w=63.546;         element[29].atomic_r=145;          element[29].en=1.90;
                   element[30].atomic_w=65.38;          element[30].atomic_r=142;          element[30].en=1.65;
                   element[31].atomic_w=69.723;         element[31].atomic_r=136;          element[31].en=1.81;
                   element[32].atomic_w=72.630;         element[32].atomic_r=125;          element[32].en=2.01;
                   element[33].atomic_w=74.92160;       element[33].atomic_r=114;          element[33].en=2.18;
                   element[34].atomic_w=78.96;          element[34].atomic_r=103;          element[34].en=2.55;
                   element[35].atomic_w=79.904;         element[35].atomic_r=94;           element[35].en=2.96;
                   element[36].atomic_w=83.798;         element[36].atomic_r=88;           element[36].en=3.00;
                   element[37].atomic_w=85.4678;        element[37].atomic_r=265;          element[37].en=0.82;
                   element[38].atomic_w=87.62;          element[38].atomic_r=219;          element[38].en=0.95;
                   element[39].atomic_w=88.90585;       element[39].atomic_r=212;          element[39].en=1.22;
                   element[40].atomic_w=91.224;         element[40].atomic_r=206;          element[40].en=1.33;
                   element[41].atomic_w=92.90638;       element[41].atomic_r=198;          element[41].en=1.6;
                   element[42].atomic_w=95.96;          element[42].atomic_r=190;          element[42].en=2.16;
                   element[43].atomic_w=98;             element[43].atomic_r=183;          element[43].en=1.9;
                   element[44].atomic_w=101.07;         element[44].atomic_r=178;          element[44].en=2.2;
                   element[45].atomic_w=102.90550;      element[45].atomic_r=173;          element[45].en=2.28;
                   element[46].atomic_w=106.42;         element[46].atomic_r=169;          element[46].en=2.20;
                   element[47].atomic_w=107.8682;       element[47].atomic_r=165;          element[47].en=1.93;
                   element[48].atomic_w=112.411;        element[48].atomic_r=161;          element[48].en=1.69;
                   element[49].atomic_w=114.818;        element[49].atomic_r=156;          element[49].en=1.78;
                   element[50].atomic_w=118.710;        element[50].atomic_r=145;          element[50].en=1.96;
                   element[51].atomic_w=121.760;        element[51].atomic_r=133;          element[51].en=2.05;
                   element[52].atomic_w=127.60;         element[52].atomic_r=123;          element[52].en=2.1;
                   element[53].atomic_w=126.90447;      element[53].atomic_r=115;          element[53].en=2.66;
                   element[54].atomic_w=131.293;        element[54].atomic_r=108;          element[54].en=2.6;
                   element[55].atomic_w=132.9054519;    element[55].atomic_r=298;          element[55].en=0.79;
                   element[56].atomic_w=137.327;        element[56].atomic_r=253;          element[56].en=0.89;
                   element[57].atomic_w=138.90547;      element[57].atomic_r=169;          element[57].en=1.10;
                   element[58].atomic_w=140.90765;      element[58].atomic_r=131;          element[58].en=1.12;
                   element[59].atomic_w=140.90765;      element[59].atomic_r=247;          element[59].en=1.13;
                   element[60].atomic_w=144.242;        element[60].atomic_r=206;          element[60].en=1.14;
                   element[61].atomic_w=145;            element[61].atomic_r=205;          element[61].en=0;
                   element[62].atomic_w=150.36;         element[62].atomic_r=238;          element[62].en=1.17;
                   element[63].atomic_w=151.964;        element[63].atomic_r=231;          element[63].en=0;
                   element[64].atomic_w=157.25;         element[64].atomic_r=233;          element[64].en=1.20;
                   element[65].atomic_w=158.92535;      element[65].atomic_r=225;          element[65].en=0;
                   element[66].atomic_w=162.500;        element[66].atomic_r=228;          element[66].en=1.22;
                   element[67].atomic_w=164.93032;      element[67].atomic_r=0;            element[67].en=1.23;
                   element[68].atomic_w=167.259;        element[68].atomic_r=226;          element[68].en=1.24;
                   element[69].atomic_w=168.93421;      element[69].atomic_r=222;          element[69].en=1.25;
                   element[70].atomic_w=173.054;        element[70].atomic_r=222;          element[70].en=0;
                   element[71].atomic_w=174.9668;       element[71].atomic_r=217;          element[71].en=1.27;
                   element[72].atomic_w=178.49;         element[72].atomic_r=208;          element[72].en=1.3;
                   element[73].atomic_w=180.94788;      element[73].atomic_r=200;          element[73].en=1.5;
                   element[74].atomic_w=183.84;         element[74].atomic_r=193;          element[74].en=2.36;
                   element[75].atomic_w=186.207;        element[75].atomic_r=188;          element[75].en=1.9;
                   element[76].atomic_w=190.23;         element[76].atomic_r=185;          element[76].en=2.2;
                   element[77].atomic_w=192.217;        element[77].atomic_r=180;          element[77].en=2.20;
                   element[78].atomic_w=195.084;        element[78].atomic_r=177;          element[78].en=2.28;
                   element[79].atomic_w=196.966569;     element[79].atomic_r=174;          element[79].en=2.54;
                   element[80].atomic_w=200.592;        element[80].atomic_r=171;          element[80].en=2.00;
                   element[81].atomic_w=204.38;         element[81].atomic_r=156;          element[81].en=1.62;
                   element[82].atomic_w=207.2;          element[82].atomic_r=154;          element[82].en=2.33;
                   element[83].atomic_w=208.98040;      element[83].atomic_r=143;          element[83].en=2.02;
                   element[84].atomic_w=209;            element[84].atomic_r=135;          element[84].en=2.0;
                   element[85].atomic_w=210;            element[85].atomic_r=0 ;           element[85].en=2.2;
                   element[86].atomic_w=222;            element[86].atomic_r=120;          element[86].en=0;
                   element[87].atomic_w=223;            element[87].atomic_r=0;            element[87].en=0.7;
                   element[88].atomic_w=226;            element[88].atomic_r=0;            element[88].en=0.9;
                   element[89].atomic_w=227;            element[89].atomic_r=0;            element[89].en=1.1;
                   element[90].atomic_w=232.03806;      element[90].atomic_r=0;            element[90].en=1.3;
                   element[91].atomic_w=231.03588;      element[91].atomic_r=0;            element[91].en=1.5;
                   element[92].atomic_w=238.02891;      element[92].atomic_r=0;            element[92].en=1.38;
                   element[93].atomic_w=237;            element[93].atomic_r=0;            element[93].en=1.36	;
                   element[94].atomic_w=244;            element[94].atomic_r=0;            element[94].en=1.28;
                   element[95].atomic_w=243;            element[95].atomic_r=0;            element[95].en=1.3;
                   element[96].atomic_w=247;            element[96].atomic_r=0;            element[96].en=1.3;
                   element[97].atomic_w=247;            element[97].atomic_r=0;            element[97].en=1.3;
                   element[98].atomic_w=251;            element[98].atomic_r=0;            element[98].en=1.3;
                   element[99].atomic_w=252;            element[99].atomic_r=0;            element[99].en=1.3;
                   element[100].atomic_w=257;           element[100].atomic_r=0;           element[100].en=1.3;
                   element[101].atomic_w=258;           element[101].atomic_r=0;           element[101].en=1.3;
                   element[102].atomic_w=259;           element[102].atomic_r=0;           element[102].en=1.3;
                   element[103].atomic_w=262;           element[103].atomic_r=0;           element[103].en=1.3;
                   element[104].atomic_w=267;           element[104].atomic_r=0;           element[104].en=1.3;
                   element[105].atomic_w=268;           element[105].atomic_r=0;           element[105].en=1.3;
                   element[106].atomic_w=269;           element[106].atomic_r=0;           element[106].en=0;
                   element[107].atomic_w=270;           element[107].atomic_r=0;           element[107].en=0;
                   element[108].atomic_w=269;           element[108].atomic_r=0;           element[108].en=0;
                   element[109].atomic_w=278;           element[109].atomic_r=0;           element[109].en=0;
                   element[110].atomic_w=281;           element[110].atomic_r=0;           element[110].en=0;
                   element[111].atomic_w=281;           element[111].atomic_r=0;           element[111].en=0;
                   element[112].atomic_w=285;           element[112].atomic_r=0;           element[112].en=0;
                   element[113].atomic_w=286;           element[113].atomic_r=0;           element[113].en=0;
                   element[114].atomic_w=289;           element[114].atomic_r=0;           element[114].en=0;
                   element[115].atomic_w=288;			element[115].atomic_r=0;		   element[115].en=0;
                   element[116].atomic_w=293;			element[116].atomic_r=0;		   element[116].en=0;
                   element[117].atomic_w=294;			element[117].atomic_r=0;		   element[117].en=0;
                   element[118].atomic_w=2;			    element[118].atomic_r=0;	       element[118].en=0;
			}
			// group number and block.
    {
                   for(i=1;i<=118;++i)
                   {
                                      if(i==1 || i==3 || i==11 || i==19 || i==37 || i==55 || i==87)
                                      {
                                           element[i].group=1;
                                           element[i].block='s';
                                      }
                                      else if(i==4 || i==12 || i==20 || i==38 || i==56 || i==88)
                                      {
                                           element[i].group=2;
                                           element[i].block='s';
                                      }
                                      else if(i==21 || i==39 || i==57 || i==89)
                                      {
                                           element[i].group=3;
                                           element[i].block='d';
                                      }
                                      else if(i==22 || i==40 || i==72 || i==104)
                                      {
                                           element[i].group=4;
                                           element[i].block='d';
                                      }
                                      else if(i==23 || i==41 || i==73 || i==105)
                                      {
                                           element[i].group=5;
                                           element[i].block='d';
                                      }
                                      else if(i==24 || i==42 || i==74 || i==106)
                                      {
                                           element[i].group=6;
                                           element[i].block='d';
                                      }
                                      else if(i==25 || i==43 || i==75 || i==107)
                                      {
                                           element[i].group=7;
                                           element[i].block='d';
                                      }
                                      else if(i==26 || i==44 || i==76 || i==108)
                                      {
                                           element[i].group=8;
                                           element[i].block='d';
                                      }
                                      else if(i==27 || i==45 || i==77 || i==109)
                                      {
                                           element[i].group=9;
                                           element[i].block='d';
                                      }
                                      else if(i==28 || i==46 || i==78 || i==110)
                                      {
                                           element[i].group=10;
                                           element[i].block='d';
                                      }
                                      else if(i==29 || i==47 || i==79 || i==111)
                                      {
                                           element[i].group=11;
                                           element[i].block='d';
                                      }
                                      else if(i==30 || i==48 || i==80 || i==112)
                                      {
                                           element[i].group=12;
                                           element[i].block='d';
                                      }
                                      else if(i==5 || i==13 || i==31 || i==49 || i==81 || i==113)
                                      {
                                           element[i].group=13;
                                           element[i].block='p';
                                      }
                                      else if(i==6 || i==14 || i==32 || i==50 || i==82 || i==114)
                                      {
                                           element[i].group=14;
                                           element[i].block='p';
                                      }
                                      else if(i==7 || i==15 || i==33 || i==51 || i==83 || i==115)
                                      {
                                           element[i].group=15;
                                           element[i].block='p';
                                      }
                                      else if(i==8 || i==16 || i==34 || i==52 || i==84 || i==116)
                                      {
                                           element[i].group=16;
                                           element[i].block='p';
                                      }
                                      else if(i==9 || i==17 || i==35 || i==53 || i==85 || i==117)
                                      {
                                           element[i].group=17;
                                           element[i].block='p';
                                      }
                                      else if(i==2 || i==10 || i==18 || i==36 || i==54 || i==86 || i==118)
                                      {
                                           element[i].group=18;
                                           element[i].block='p';
                                      }

                   }
                   for(i=57;i<=71;++i)
                   {
                   					 element[i].group=3;
                                      element[i].block='f';
                   }
                   for(i=89;i<=103;++i)
                   {
                   						 element[i].group=3;
                                       element[i].block='f';
                   }
    }
    // period number.
    {
                   for(i=1;i<=2;++i)
                   {
                                    element[i].period=1;
                   }
                   for(i=3;i<=10;++i)
                   {
                                    element[i].period=2;
                   }
                   for(i=11;i<=18;++i)
                   {
                                    element[i].period=3;
                   }
                   for(i=19;i<=36;++i)
                   {
                                    element[i].period=4;
                   }
                   for(i=37;i<=54;++i)
                   {
                                    element[i].period=5;
                   }
                   for(i=55;i<=86;++i)
                   {
                                    element[i].period=6;
                   }
                   for(i=87;i<=114;++i)
                   {
                                    element[i].period=7;
                   }
               }
			  //User Interface coding.
    do
    {
    first:
    cout<<"\n\n\n\n\n\n\n\t\t\tWhat would you like to do?"<<"\n\n\n";
    Sleep(1000);
    cout<<"\t1. Search for an element\t";
    Sleep(1000);
    cout<<"2. View the Modern Periodic Table"<<"\n\n\n";
    Sleep(1000);
    cout<<"\t3.QUIZ"<<"\n\n\n";
    Sleep(1000);
    cout<<"\t\t enter your option:    ";
    cin>>t;
  
    {
	  if(t==1)
    {
    	system("cls");
	 cout<<"\n\n\n\n\n\t\t how would you like to search an element"<<"\n\n\n";
    Sleep(1000);
    cout<<"\n\n\t1. Enter atomic number"<<"\n\n";
    Sleep(1000);
    cout<<"\t2.enter element name";
    Sleep(1000);
    cout<<"\n\n\n\t enter your choice:";
    cin>>n;
    system("cls");
    switch(n)
    { 
     case 1: cout<<"\n\n\n\n\n\t\tEnter the atomic number of the element: ";
                      one:
                      cin>>a;
                      for(i=1;i<=118;++i)
                      {
                         if(a==i)
                         {
                         	cout<<"\t name: "<<element[i].name;
                         	cout<<"\n\t atomic no: "<<element[i].atomic_no;
                         	cout<<"\n\t group: "<<element[i].group;
                         	cout<<"\n\t period: "<<element[i].period;
                         	cout<<"\n\t block: "<<element[i].block;
                         	if(element[i].atomic_r==0)
                         	{
							   cout<<"\n\t atomic radius: "<<"not available";
							 }
							 else
							 {
							 		cout<<"\n\t atmoic radius: "<<element[i].atomic_r;
							 }
							 if(element[i].en==0)
							 {
							 		cout<<"\n\t electronegtivity: "<<"not available";
							 }
							 else
							 {
							 		cout<<"\n\t electronegtivity: "<<element[i].en;
							 }
							 goto end;
						}
				   }
					 cout<<"\n\t\t\t   Please try again";
                      Sleep(2000);
                      system("cls");
                      cout<<"\n\n\n\n\n\t\tEnter the atomic number of the element: ";
                      goto one;
                      break;
                case 2: cout<<"\t   Enter the element name given by the following format: "<<"\n\n";
                      cout<<"\t\t   \"Element Name\"- \"Element Symbol\""<<"\n\n";
                      cout<<"\t\t   ";
                      cin.getline(name,50);
                      two:
                      cin.getline(name,50);
                      for(i=1;i<=118;++i)
                      {
                      		if(strcmp(name,element[i].name)==0)
                      		{
                         	cout<<"\t name: "<<element[i].name;
                         	cout<<"\n\t atomic no: "<<element[i].atomic_no;
                         	cout<<"\n\t group: "<<element[i].group;
                         	cout<<"\n\t period: "<<element[i].period;
                         	cout<<"\n\t block: "<<element[i].block;
                         	if(element[i].atomic_r==0)
                         	{
							   cout<<"\n\t atomic radius: "<<"not available";
							 }
							 else
							 {
							 		cout<<"\n\t atmoic radius: "<<element[i].atomic_r;
							 }
							 if(element[i].en==0)
							 {
							 		cout<<"\n\t electronegtivity: "<<"not available";
							 }
							 else
							 {
							 		cout<<"\n\t electronegtivity: "<<element[i].en;
							 }
							 goto end;
						}
					}
					         cout<<"\t\t\t   Please try again";
                             Sleep(2000);
                              system("cls");
                             cout<<"\t   Enter the element name given by the following format: "<<"\n\n";
                             cout<<"\t\t   \"Element Name\"- \"Element Symbol\""<<"\n\n";
                              cout<<"\t\t   ";
                              goto two;
                              break;
                              default:
                              	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t wrong!";
                              	Sleep(3000);
                              	system("cls");
                                goto two;
                                break;
                            }
                        }
                        
                            else if(t==2)
                            {
                            	cout<<"\n\t\tTHE MODERN PERIODIC TABLE (118 ELEMENT)\n";
   								cout<<"\t\t---------------------------------------\n";
    							cout<<"\tH                                                      He"<<"\n\n";
    							cout<<"\tLi Be                                 B  C   N  O   F  Ne"<<"\n\n";
    							cout<<"\tNa Mg                                 Al Si  P  S   Cl Ar"<<"\n\n";
    							cout<<"\tK  Ca Sc Ti V  Cr Mn Fe Co Ni Cu  Zn  Ga Ge  As Se  Br Kr"<<"\n\n";
    							cout<<"\tRb Sr Y  Zr Nb Mo Tc Ru Rh Pd Ag  Cd  In Sn  Sb Te  I  Xe"<<"\n\n";
    							cout<<"\tCs Ba La Hf Ta W  Re Os Ir Pt Au  Hg  Tl Pb  Bi Po  At Rn"<<"\n\n";
    							cout<<"\tFr Ra Ac Rf Db Sg Bh Hs Mt Ds Rg  Cn  Nh Fl  Mc Lv  Ts Og"<<"\n\n\n";
    							cout<<"\t\t Ce Pr Nd Pm Sm Eu Gd Tb Dy Ho Er Tm Yb Lu"<<"\n\n";
    							cout<<"\t\t Th Pa U  Np Pu Am Cm Bk Cf Es Fm Md No Lr"<<"\n\n\n";
    							goto end;
    						}
    						 else if(t==3)
                                 {
        							
        								{
												system("cls");
 									           cout<<"\n\n\n\t\t 5 marks for each correct answer";
 									           Sleep(3000);
 									           cout<<"\n\t\t 0 marks for wrong answer";
 									           Sleep(3000);
 									           cout<<"\n\n\n\t\t***** BEST OF LUCK :)  *****";
 									           Sleep(3000);
 									           system("cls");
												cout<<"\n\n\n answer should be in 1,2,3 & 4 only  :)" ;
												Sleep(2000);
												cout<<"\n\n\n 1)how many elements in modern periodic table ? ";
												Sleep(2000);
												cout<<"\n\n1)115 \n2)117 \n3)118 \n4)110";
												Sleep(2000);
												cout<<"\n\n\n enter your choice:  ";
												Sleep(2000);
												cin>>d1;
												if(d1 == 3)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t wrong answer";
													Sleep(2000);
										        }
													system("cls");
													cout<<"\n\n\n 2) which of the following is a noble gas?";
													Sleep(2000);
													cout<<"\n\n1)Oxygen \n2)Nitrogen \n3)Chlorine \n4)Neon";
													Sleep(2000);
													cout<<"\n\n\t\t ENTER YOUR CHOICE : ";
													cin>>d2;
													if(d2 == 4)
												{  
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
											   }
											   else
											   {
												    y=y+1;	
													cout<<"\n\n\t wrong answer";
													Sleep(2000);
											    }
											    system("cls");
											    cout<<"\n\n\n 3.) element with atomic number 33 belongs to which group?";
											    Sleep(2000);
												cout<<"\n\n1)group 13 \n2)group 14 \n3)group 15 \n4)group 16";
											    Sleep(2000);
											    cout<<"\n\n\t\t enter your choice: ";
											    cin>>d3;
											    if(d3==3)
											    {
											    	x=x+5;
											    	cout<<"\n\n\t right answer";
											    	Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<"\n\n\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 4)which of the following pairs of atomic numbers represents s-block elements?";
												Sleep(2000);
												cout<<"\n\n1)7,15 \n2)6,12 \n3)9,17 \n4)3,20";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d4;
												if(d4==4)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
											system("cls");
												cout<<"\n\n\n 5)The valency of noble gas in general is:";
												Sleep(2000);
												cout<<"\n\n1)0 \n2)1 \n3)3 \n4)2";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d5;
												if(d5==1)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}	
												system("cls");
												cout<<"\n\n\n 6)Among O,C,F,Cl & Br correct order of increasing radii is: ";
												Sleep(2000);
												cout<<"\n\n1)F,O,C,Cl,Br \n2)F,C,O,Cl,Br \n3)F,Cl,Br,O,C \n4)C,O,F,Cl,Br";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d6;
												if(d6==1)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 7)what is the symbol for Sillicon?";
												Sleep(2000);
												cout<<"\n\n1)S \n2)Si \n3)O \n4)Se";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d7;
												if(d7==2)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 8)What is tha atomic number of C?";
												Sleep(2000);
												cout<<"\n\n1)5 \n2)6 \n3)7 \n4)8";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d8;
												if(d8==2)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 9)how many groups are there in modern periodic table? ";
												Sleep(2000);
												cout<<"\n\n1)18 \n2)17 \n3)25 \n4)7";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d9;
												if(d9==1)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 10)how many periods are there in modern periodic table?";
												Sleep(2000);
												cout<<"\n\n1)18 \n2)6 \n3)7 \n4)25";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d10;
												if(d10==3)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 11)what is the general electronic configuration of s-block element?";
												Sleep(2000);
												cout<<"\n\n1)ns1-3 \n2)ns1-2 \n3)ns0-4 \n4)ns1-6";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d11;
												if(d11==2)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 12)element of group 13-18 are known as: ";
												Sleep(2000);
												cout<<"\n\n1)s-block \n2)d-block \n3)p-block \n4)f-block";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d12;
												if(d12==3)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 13)elements of group 3-12 are known as: ";
												Sleep(2000);
												cout<<"\n\n1)s-block \n2)d-block \n3)f-block \n4)p-block";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d13;
												if(d13==2)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 14)Elements of group-18 are known as: ";
												Sleep(2000);
												cout<<"\n\n1)Alkali metals \n2)Halogens \n3)Noble gases \n4)Alkaline earth metals";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d14;
												if(d14==3)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 15)group-17 elements are known as :";
												Sleep(2000);
												cout<<"\n\n1)Halogens \n2)Alkali metals \n3)Chalcogens \n4)Noble gases";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d15;
												if(d15==1)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 16)transition elements are also known as :";
												Sleep(2000);
												cout<<"\n\n1)s-block \n2)p-block \n3)d-block \n4)f-block";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d16;
												if(d16==3)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 17)Inner transtition element are also known as?";
												Sleep(2000);
												cout<<"\n\n1)s-block \n2)p-block \n3)d-block \n4)f-block";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d17;
												if(d17==4)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 18)What is the atomic number of Iron?";
												Sleep(2000);
												cout<<"\n\n1)25 \n2)26 \n3)27 \n4)28";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d18;
												if(d18==2)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 19)What is the atomic number of Gold?";
												Sleep(2000);
												cout<<"\n\n1)78 \n2)79 \n3)80 \n4)101";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d19;
												if(d19==2)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 20)What is first element of modern periodic table?";
												Sleep(2000);
												cout<<"\n\n1)Hydrogen \n2)Carbon \n3)Oxygen \n4)Nitrogen";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d20;
												if(d20==1)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 21)Group-2 are alkaline earth metal.";
												Sleep(2000);
												cout<<"\n\n1)Correct \n2)Incorrect";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d21;
												if(d21==1)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 22)2,8,8,18,18 and 32 are magic number in moderm periodic table.";
												Sleep(2000);
												cout<<"\n\n1)Correct \n2)Incorrect";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d23;
												if(d22==1)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 23)Group-11 are called as Chalcogens.";
												Sleep(2000);
												cout<<"\n\n1)Correct \n2)Incorrect";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d23;
												if(d23==2)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 24)Elements with atomic number 56 belong to which block?";
												Sleep(2000);
												cout<<"\n\n1)s-block \n2)p-block \n3)d-block \n4)f-block";
												Sleep(2000);
												cout<<"\n\n\t\t enter your choice: ";
												cin>>d24;
												if(d24==1)
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
												system("cls");
												cout<<"\n\n\n 25)write the symbol of element 'Nitrogen' ?";
												Sleep(2000);
												cout<<"\n\n\t\t enter your answer: ";
												cin>>d25;
												if(d25 == 'n' || d25=='N')
												{
													x=x+5;
													cout<<"\n\n\t right answer";
													Sleep(2000);
												}
												else
												{
													y=y+1;
													cout<<"\n\n\t\t wrong answer";
													Sleep(2000);
												}
										}	
									
										{
											system("cls");
											cout<<"\n\n\n\n\t\t*** correct answer: "<<x/5;
											cout<<"\t\t*** wrongs answer: "<<y;
											cout<<"\n\n\t\t*** total score: "<<x;
										}
									
										goto end;
								}
		
								
								else
								 {
        								cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\tWrong Option!";
						       Sleep(2000);
       							system("cls");
        						goto first;
       
    }
}
    
    end:
    cout<<"\n\n";
    system("PAUSE");
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\tWould you like to continue?(Y/N) ";
    cin>>c;
    if(c=='n' || c=='N')
    {
              exit(0);
    }
    
    system("cls");
    }while(c=='y' || c=='Y');
    

    getch();
    return 0;
}
							 
						 
    	
	
	
			

			
	
	




