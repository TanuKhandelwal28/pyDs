#include<iostream>
using namespace std;
class input
{
  public:
        float i;
};
class length:public input
  {
   public:
       void km_m();
       void km_cm();
       void km_mm();
       void km_inch();
       void km_feet();
       void km_yard();
       void km_mile();
       void m_km();
       void m_cm();
       void m_mm();
       void m_inch();
       void m_feet();
       void m_yard();
       void m_mile();
       void cm_km();
       void cm_m();
       void cm_mm();
       void cm_inch();
	   void cm_feet();
	   void cm_yard();
	   void cm_mile();
	   void mm_km();
	   void mm_m();
	   void mm_cm();
	   void mm_inch();
	   void mm_feet();
	   void mm_yard();
	   void mm_mile();
	   void inch_km();
	   void inch_m();
	   void inch_cm();
	   void inch_mm();
	   void inch_feet();
	   void inch_yard();
	   void inch_mile();
	   void feet_km();
	   void feet_m();
	   void feet_mm();
	   void feet_cm();
	   void feet_inch();
	   void feet_yard();
	   void feet_mile();
	   void yard_km();
	   void yard_m();
	   void yard_cm();
	   void yard_mm();
	   void yard_inch();
	   void yard_feet();
	   void yard_mile(); 
	   void mile_km();
	   void mile_m();
	   void mile_cm();
	   void mile_mm();
	   void mile_inch();
	   void mile_feet();
	   void mile_yard();
};
class temp:public input{
 public:
       void cel_f();
       void f_cel();
       void cel_k();
       void k_cel();
       void f_k();
       void k_f();
};
class weight:public input{
    public:
       void milligm_gm();
       void gm_milligm();
       void gm_kg();
       void kg_gm();
       void kg_mton();
       void mton_kg();
       void pound_kg();
       void kg_pound();
       void gm_pound();
       void pound_gm();
};
class area :public input{
   public:
       void mmSq_cmSq();
       void cmSq_mmSq();
       void cmSq_mSq ();
       void mSq_cmSq ();
       void mSq_kmSq ();
       void kmSq_mSq ();
       void feetSq_mSq();
       void mSq_feetSq();
       void yardSq_mSq();
       void mSq_yardSq();
       void mileSq_kmSq();
       void kmSq_mileSq();
       void acre_kmSq();
       void kmSq_acre();
       void acre_hect();
       void hect_acre();
};
class vol:public input{
   public:
       void mL_L();
       void L_mL();
       void mmQ_cmQ();
       void cmQ_mmQ();
       void cmQ_mQ ();
       void mQ_cmQ ();
       void inchQ_mQ();
       void mQ_inchQ();
       void feetQ_mQ();
       void mQ_feetQ();
       void mQ_gallon();
       void gallon_mQ();
       void L_gallon();
       void gallon_L();
};
void length::km_m(){
	double m;
	cout<<" Enter the value in km :";
	cin>>i;
	m = i*1000; 
	cout<<i<<" kilometers = "<<m <<" metres";
}
void length::km_cm(){
	double cm;
	cout<<" Enter the value in km :";
	cin>>i;
	cm = i*100000;
	cout<<i<<" kilometers = "<<cm <<" centimetres"; 
}
void length::km_mm(){
	double mm;
	cout<<" Enter the value in km :";
	cin>>i;
	mm = i*1000000; 
	cout<<i<<" kilometers = "<<mm <<" milimetres";
}
void length::km_inch(){
	double inch;
	cout<<" Enter the value in km :";
	cin>>i;
	inch = i*39370.078740;
	cout<<i<<" kilometers = "<<inch <<"inches";
}
void length::km_feet(){
	double feet;
	cout<<" Enter the value in km :";
	cin>>i;
	feet = i*3280.839895; 
	cout<<i<<" kilometers = "<<feet <<"feets";
}
void length::km_yard(){
	double yard;
	cout<<" Enter the value in km :";
	cin>>i;
    yard = i*1093.613298; 
	cout<<i<<" kilometers = "<<yard <<"yards";
}
void length::km_mile(){
	double mile;
	cout<<" Enter the value in km :";
	cin>>i;
	mile = i*0.621371; 
	cout<<i<<" kilometers = "<<mile <<"miles";
}
void length::m_km(){
	double km;
	cout<<" Enter the value in m :";
	cin>>i;
	km = i*0.001; 
	cout<<i<<"meters="<<km <<"kilometers";
}
void length::m_cm(){
	double cm;
	cout<<" Enter the value in m :";
	cin>>i;
    cm = i*100; 
	cout<<i<<"meters="<<cm <<"centimeters";
}
void length::m_mm(){
	double mm;
	cout<<" Enter the value in m :";
	cin>>i;
	mm = i*1000.00000; 
	cout<<i<<"meters="<<mm <<"milimeters";
}
void length::m_inch(){
	double inch;
	cout<<" Enter the value in m :";
	cin>>i;
	inch = i*39.370079; 
	cout<<i<<"meters="<<inch <<"inches";
}
void length::m_feet(){
	double feet;
	cout<<" Enter the value in m :";
	cin>>i;
	feet = i*3.280840; 
	cout<<i<<"meters="<<feet <<"feets";
}
void length::m_yard(){
	double yard;
	cout<<" Enter the value in m :";
	cin>>i;
	yard = i*1.093613; 
	cout<<i<<"meters="<<yard <<"yards";
}
void length::m_mile(){
	double mile;
	cout<<" Enter the value in m :";
	cin>>i;
	mile = i*0.000621; 
	cout<<i<<"meters="<<mile <<"miles";
}
void length::cm_km(){
	double km;
	cout<<" Enter the value in cm :";
	cin>>i;
	km = i*0.000010; 
	cout<<i<<"centimeters="<<km<<"kilometers ";
}
void length::cm_m(){
	double m;
	cout<<" Enter the value in cm :";
	cin>>i;
	m = i*0.01000; 
	cout<<i<<"centimeters="<<m<<"meters ";
}
void length::cm_mm(){
	double mm;
	cout<<" Enter the value in cm :";
	cin>>i;
	mm = i*0.1; 
	cout<<i<<"centimeters="<<mm<<"milimeters ";
}
void length::cm_inch(){
	double inch;
	cout<<" Enter the value in cm :";
	cin>>i;
    inch = i*0.393701; 
    cout<<i<<"centimeters="<<inch<<"inches ";
}
void length::cm_feet(){
	double feet;
	cout<<" Enter the value in cm :";
	cin>>i;
	feet = i*0.032808; 
	cout<<i<<"centimeters="<<feet<<"feets";
}
void length::cm_yard(){
	double yard;
	cout<<" Enter the value in cm :";
	cin>>i;
	yard = i*0.0109; 
	cout<<i<<"centimeters="<<yard<<"yards ";
}
void length::cm_mile(){
	double mile;
	cout<<" Enter the value in cm :";
	cin>>i;
	mile = i*0.00000621; 
	cout<<i<<"centimeters="<<mile<<"miles ";
}
void length::mm_km(){
	double km;
	cout<<" Enter the value in mm :";
	cin>>i;
	km = i*0.000001; 
	cout<<i<<"milimeters="<<km<<"kilometers ";
}
void length::mm_m(){
	double m;
	cout<<" Enter the value in mm :";
	cin>>i;
	m = i*0.001; 
    cout<<i<<"milimeters="<<m<<"meters ";
}
void length::mm_cm(){
	double cm;
	cout<<" Enter the value in mm :";
	cin>>i;
	cm = i*0.1; 
	cout<<i<<"milimeters="<<cm<<"centimeters ";
}
void length::mm_inch(){
	double inch;
	cout<<" Enter the value in mm :";
	cin>>i;
	inch = i*0.0393700; 
	cout<<i<<"milimeters="<<inch<<"inches ";
}
void length::mm_feet(){
	double feet;
	cout<<" Enter the value in mm :";
	cin>>i;
	feet = i*0.0003280839; 
    cout<<i<<"milimeters="<<feet<<"feets ";
}
void length::mm_yard(){
	double yard;
	cout<<" Enter the value in mm :";
	cin>>i;
	yard = i*0.0010936; 
	cout<<i<<"milimeters"<<yard<<"yards ";
}
void length::mm_mile(){
	double mile;
	cout<<" Enter the value in mm :";
	cin>>i;
	mile = i*0.000000621371; 
	cout<<i<<"milimeters="<<mile<<"miles ";
}
void length::inch_km(){
	double km;
	cout<<" Enter the value in inch :";
	cin>>i;
	km = i*0.0000254; 
	cout<<i<<"inches="<<km<<"kilometer ";
}
void length::inch_m(){
	double m;
	cout<<" Enter the value in inch :";
	cin>>i;
	m = i*0.0254; 
	cout<<i<<"inches="<<m<<"meters ";
}
void length::inch_cm(){
	double cm;
	cout<<" Enter the value in inch :";
	cin>>i;
	cm = i*2.54; 
	cout<<i<<"inches="<<cm<<"centimeters ";
}
void length::inch_mm(){
	double mm;
	cout<<" Enter the value in inch :";
	cin>>i;
	mm = i*25.4; 
	cout<<i<<"inches="<<mm<<"milimeters ";
}
void length::inch_feet(){
	double feet;
	cout<<" Enter the value in inch :";
	cin>>i;
	feet = i*0.083333333333;
	cout<<i<<"inches="<<feet<<"feets ";
}
void length::inch_yard(){
	double yard;
	cout<<" Enter the value in inch :";
	cin>>i;
	yard = i*0.027; 
    cout<<i<<"inches="<<yard<<"yards ";
}
void length::inch_mile(){
	double mile;
	cout<<" Enter the value in inch :";
	cin>>i;
	mile = i*0.000015782828;
	cout<<i<<"inches="<<mile<<"miles ";
}
void length::feet_km(){
	double km;
	cout<<" Enter the value in feet :";
	cin>>i;
	km = i*0.0003048; 
	cout<<i<<"feets="<<km<<"kilometers ";
}
void length::feet_m(){
	double m;
	cout<<" Enter the value in feet :";
	cin>>i;
	m = i*0.3048; 
	cout<<i<<"feets="<<m<<"meters ";
}
void length::feet_mm(){
	double mm;
	cout<<" Enter the value in feet :";
	cin>>i;
	mm = i*304.8; 
	cout<<i<<"feets="<<mm<<"milimeters ";
}
void length::feet_cm(){
	double cm;
	cout<<" Enter the value in feet :";
	cin>>i;
	cm = i*30.48;
	cout<<i<<"feets="<<cm<<"centimeters ";
}
void length::feet_inch(){
	double inch;
	cout<<" Enter the value in feet :";
	cin>>i;
	inch = i*12;
	cout<<i<<"feets="<<inch<<"inch ";
}
void length::feet_yard(){
	double yard;
	cout<<" Enter the value in feet :";
	cin>>i;
	yard = i*0.333333;
	cout<<i<<"feets="<<yard<<"yards ";
}
void length::feet_mile(){
	double mile;
	cout<<" Enter the value in feet :";
	cin>>i;
	mile = i*0.000189393939;
	cout<<i<<"feets="<<mile<<"miles "; 
}
void length::yard_km(){
	double km;
	cout<<" Enter the value in yard :";
	cin>>i;
	km = i*0.0009144; 
	cout<<i<<"yards="<<km<<"kilometers ";
}
void length::yard_m(){
	double m;
	cout<<" Enter the value in yard :";
	cin>>i;
	m = i*0.9144; 
	cout<<i<<"yards="<<m<<"meters ";
}
void length:: yard_cm(){
	double cm;
	cout<<" Enter the value in yard :";
	cin>>i;
	cm = i*91.44; 
	cout<<i<<"yards="<<cm<<"centimeters ";
}
void length::yard_mm(){
	double mm;
	cout<<" Enter the value in yard :";
	cin>>i;
	mm = i*914.4; 
	cout<<i<<"yards="<<mm<<"milimeters ";
}
void length::yard_inch(){
	double inch;
	cout<<" Enter the value in yard :";
	cin>>i;
	inch = i*36; 
	cout<<i<<"yards="<<inch<<"inch ";
}
void length::yard_feet(){
	double feet;
	cout<<" Enter the value in yard :";
	cin>>i;
	feet = i*3; 
	cout<<i<<"yards="<<feet<<"feets ";
}
void length::yard_mile(){
	double mile;
	cout<<" Enter the value in yard :";
	cin>>i;
	mile = i*0.000561818; 
	cout<<i<<"yards="<<mile<<"miles ";
}
void length::mile_km(){
	double km;
	cout<<" Enter the value in mile :";
	cin>>i;
	km = i*1.609344; 
	cout<<i<<"miles="<<km<<"kilometers ";
}
void length::mile_m(){
	double m;
	cout<<" Enter the value in mile :";
	cin>>i;
	m = i*1609.344; 
	cout<<i<<"miles="<<m<<"meters ";
}
void length::mile_cm(){
	double cm;
	cout<<" Enter the value in mile :";
	cin>>i;
	cm = i*160934.4; 
	cout<<i<<"miles="<<cm<<"centimeters ";
}
void length::mile_mm(){
	double mm;
	cout<<" Enter the value in mile :";
	cin>>i;
	mm = i*1609344; 
	cout<<i<<"miles="<<mm<<"milimeters ";
}
void length::mile_inch(){
	double inch;
	cout<<" Enter the value in mile :";
	cin>>i;
	inch = i*63360; 
	cout<<i<<"miles="<<inch<<"inch ";
}
void length::mile_feet(){
	double feet;
	cout<<" Enter the value in mile :";
	cin>>i;
	feet = i*5280; 
	cout<<i<<"miles="<<feet<<"feets ";
}
void length::mile_yard(){
	double yard;
	cout<<" Enter the value in mile :";
	cin>>i;
	yard = i*1760; 
	cout<<i<<"miles="<<yard<<"yards";
}
void temp::cel_f(){
	double f;
	cout<<"Enter the value in cel: ";
	cin>>i;
	f=i*9/5+32;
	cout<<i<<"celsius="<<f<<"fahrenheit";
}
void temp::f_cel(){
	double cel;
	cout<<"Enter the value in f:";
	cin>>i;
	cel=(i-32)*5/9;
	cout<<i<<"fahrenheit="<<cel<<"celsius";
}
void temp::cel_k(){
	double k;
	cout<<"Enter the value in cel:";
	cin>>i;
	k=i+273;
	cout<<i<<"celsius="<<k<<"kelvin";
}
void temp::k_cel(){
	double cel;
	cout<<"Enetr the value in k:";
	cin>>i;
	cel=i-273;
	cout<<i<<"kelvins="<<cel<<"celsius";
}
void temp::f_k(){
	double k;
	cout<<"Enetr the value in f:";
	cin>>i;
	k=(i-32)*5/9+273;
	cout<<i<<"fahrenheit="<<k<<"kelvin";
}
void temp::k_f(){
	double f;
	cout<<"Enetr the value in k:";
	cin>>i;
	f=(i-273)*9/5+32;
	cout<<i<<"kelvins="<<f<<"fahrenheit";
}
void weight::milligm_gm(){
	double gm;
	cout<<"Enter the value in milligm:";
	cin>>i;
	gm=1000*i;
	cout<<i<<"milligms="<<gm<<"gram";
}
void weight::gm_milligm(){
	double milligm;
	cout<<"Eneter the value in gm:";
	cin>>i;
	milligm=0.001*i;
	cout<<i<<"grams="<<milligm<<"milligm";
}
void weight::gm_kg(){
	double kg;
	cout<<"Enter the value in gm:";
	cin>>i;
	kg=1000*i;
	cout<<i<<"gram="<<kg<<"kilogram";
}
void weight::kg_gm(){
	double gm;
	cout<<"Enter the value in kg:";
	cin>>i;
	gm=0.001*i;
	cout<<i<<"kilogram="<<gm<<"gram";
}
void weight::kg_mton(){
	double mton;
	cout<<"Enter the value in kg:";
	cin>>i;
	mton=1000*i;
	cout<<i<<"kilogram="<<mton<<"mton";
}
void weight::mton_kg(){
	double kg;
	cout<<"Enter the value in mton:";
	cin>>i;
	kg=0.001*i;
	cout<<i<<"mton="<<kg<<"kilogram";
}
void weight::pound_kg(){
	double kg;
	cout<<"Enter the value in pound:";
	cin>>i;
	kg=2.20462*i;
	cout<<i<<"pound="<<kg<<"kilogram";
}
void weight::kg_pound(){
	double pound;
	cout<<"Enter the value in kg:";
	cin>>i;
	pound=0.453592*i;
	cout<<i<<"kilogram="<<pound<<"pound";
}
void weight::gm_pound(){
	double pound;
	cout<<"Enter the value in gm";
	cin>>i;
	pound=453.592*i;
	cout<<i<<"gram="<<pound<<"pound";
}
void weight::pound_gm(){
	double gm;
	cout<<"Enter the value in pound";
	cin>>i;
	gm=0.00220462*i;
	cout<<i<<"pound="<<gm<<"gram";
}
void area::mmSq_cmSq(){
	double cmSq;
	cout<<"Enter the value in mmSq";
	cin>>i;
	cmSq=100*i;
	cout<<i<<"square millimeters="<<cmSq<<"square centimeters";
}
void area::cmSq_mmSq(){
	double mmSq;
	cout<<"Enter the value in cmSq";
	cin>>i;
	mmSq=0.01*i;
	cout<<i<<"square centimeters="<<mmSq<<"square millimeters";
}
void area::cmSq_mSq(){
	double mSq;
	cout<<"Enter the value in cmSq";
	cin>>i;
	mSq=10000*i;
	cout<<i<<"square centimeters="<<mSq<<"square meters";
}
void area::mSq_cmSq(){
	double cmSq;
	cout<<"Enter the value in mSq";
	cin>>i;
	cmSq=0.0001*i;
	cout<<i<<"square meters="<<cmSq<<"square centimeters";
}
void area::mSq_kmSq(){
	double kmSq;
	cout<<"Enter the value in mSq";
	cin>>i;
	kmSq=(1e+6)*i;
	cout<<i<<"square meters="<<kmSq<<"square kilometers";
}
void area::kmSq_mSq(){
	double mSq;
	cout<<"Enter the value in kmSq";
	cin>>i;
	mSq=(1e-6)*i;
	cout<<i<<"square kilometers="<<mSq<<"square meters";
}
void area::feetSq_mSq(){
	double mSq;
	cout<<"Enter the value in feetSq";
	cin>>i;
	mSq=10.7639*i;
	cout<<i<<"square feet="<<mSq<<"square meters";
}
void area::mSq_feetSq(){
	double feetSq;
	cout<<"Enter the value in mSq";
	cin>>i;
	feetSq=0.092903*i;
	cout<<i<<"square meters="<<feetSq<<"square feet";
}
void area::yardSq_mSq(){
	double mSq;
	cout<<"Enter the value in yardSq";
	cin>>i;
	mSq=1.19599*i;
	cout<<i<<"square yard="<<mSq<<"square meters";
}
void area::mSq_yardSq(){
	double yardSq;
	cout<<"Enter the value in mSq";
	cin>>i;
	yardSq=0.836127*i;
	cout<<i<<"square meters="<<yardSq<<"square yard";
}
void area::mileSq_kmSq(){
	double kmSq;
	cout<<"Enter the value in mileSq";
	cin>>i;
	kmSq=0.386102*i;
	cout<<i<<"square mile="<<kmSq<<"square kilometers";
}
void area::kmSq_mileSq(){
	double mileSq;
	cout<<"Enter the value in kmSq";
	cin>>i;
	mileSq=2.58999*i;
	cout<<i<<"square kilometers="<<mileSq<<"square milemeters";
}
void area::acre_kmSq(){
	double kmSq;
	cout<<"Enter the value in acre";
	cin>>i;
	kmSq=247.105*i;
	cout<<i<<"acre="<<kmSq<<"square kilometers";
}
void area::kmSq_acre(){
	double acre;
	cout<<"Enter the value in kmSq";
	cin>>i;
	acre=0.00404686*i;
	cout<<i<<" square kilometers="<<acre<<"acre";
}
void area::acre_hect(){
	double hect;
	cout<<"Enter the value in acre";
	cin>>i;
	hect=2.47105*i;
	cout<<i<<"acre="<<hect<<"hect";
}
void area::hect_acre(){
	double acre;
	cout<<"Enter the value in hect";
	cin>>i;
	acre=0.404686*i;
	cout<<i<<"hect="<<acre<<"acre";
}
void vol::mL_L(){
	double L;
	cout<<"Enter the value in mL:";
	cin>>i;
	L=1000*i;
	cout<<i<<"millileters="<<L<<"Leters";
} 
void vol::L_mL(){
	double mL;
	cout<<"Enter the value in L:";
	cin>>i;
	mL=0.001*i;
	cout<<i<<"Leters="<<mL<<"millileters";
}
void vol::mmQ_cmQ(){
	double cmQ;
	cout<<"Enter the value in mmQ:";
	cin>>i;
	cmQ=1000*i;
	cout<<i<<"cube millimeters="<<cmQ<<"cube centimeters";
}
void vol::cmQ_mmQ(){
	double mmQ;
	cout<<"Enter the value in cmQ:";
	cin>>i;
	mmQ=0.001*i;
	cout<<i<<"cube centimeters="<<mmQ<<"cube millimeters";
}
void vol::cmQ_mQ(){
	double mQ;
	cout<<"Enter the value in cmQ:";
	cin>>i;
	mQ=(1e+6)*i;
	cout<<i<<"cube centimeters="<<mQ<<"cube meters";
}
void vol::mQ_cmQ(){
	double cmQ;
	cout<<"Enter the value in mQ:";
	cin>>i;
	cmQ=(1e-6)*i;
	cout<<i<<"cube meters="<<cmQ<<"cube centimeters";
}
void vol::inchQ_mQ(){
	double mQ;
	cout<<"Enter the value in inchQ:";
	cin>>i;
	mQ=61023.7*i;
	cout<<i<<"cube inch="<<mQ<<"cube meters";
}
void vol::mQ_inchQ(){
	double inchQ;
	cout<<"Enter the value in mQ:";
	cin>>i;
	inchQ=1.6387e-5*i;
	cout<<i<<"cube meters="<<inchQ<<"cube inch";
}
void vol::feetQ_mQ(){
	double mQ;
	cout<<"Enter the value in feetQ:";
	cin>>i;
	mQ=35.3147*i;
	cout<<i<<"cube feet="<<mQ<<"cube meters";
}
void vol::mQ_feetQ(){
	double feetQ;
	cout<<"Enter the value in mQ:";
	cin>>i;
	feetQ=0.0283168*i;
	cout<<i<<"cube meters="<<feetQ<<"cube feet";
}
void vol::mQ_gallon(){
	double gallon;
	cout<<"Enter the value in mQ:";
	cin>>i;
	gallon=0.00378541*i;
	cout<<i<<"cube meters="<<gallon<<"gallon";
}
void vol::gallon_mQ(){
	double mQ;
	cout<<"Enter the value in gallon:";
	cin>>i;
	mQ=264.172*i;
	cout<<i<<"gallon="<<mQ<<"cube meters";
}
void vol::L_gallon(){
	double gallon;
	cout<<"Enter the value in L:";
	cin>>i;
	gallon=3.78541*i;
	cout<<i<<"Leters="<<gallon<<"gallon";
}
void vol::gallon_L(){
	double L;
	cout<<"Enter the value in gallon:";
	cin>>i;
	L=0.264172*i;
	cout<<i<<"gallon="<<L<<"Leters";
}
void same(){
	cout<<"Both conversable and coverted unit are same.";
}
double convert1(int z,int y){
	length b;
		switch(z){
			case 1:
		       	{
			  switch(y){
			 	case 1:
			 		same();
			 		break;
			 	case 2:
			 		b.km_m();
			 		break;
			 	case 3:
			 		b.km_cm();
			 		break;
			 	case 4:
			 		b.km_mm();
			 		break;
			 	case 5:
			 		b.km_inch();
			 		break;
			 	case 6:
			 		b.km_feet();
			 		break;
			 	case 7:
			 		b.km_yard();
			 		break;
			 	case 8:
			 		b.km_mile();
			 		break;
				default:
					cout<<"you enter a wrong choice";
				}   
			break;
			}
			case 2:
				{
				
			 switch(y){
			 	case 1:
			 		b.m_km();
			 		break;
			 	case 2:
			 		same();
			 		break;
			 	case 3:
			 		b.m_cm();
			 		break;
			 	case 4:
			 		b.m_mm();
			 		break;
			 	case 5:
			 		b.m_inch();
			 		break;
			 	case 6:
			 		b.m_feet();
			 		break;
			 	case 7:
			 		b.m_yard();
			 		break;
			 	case 8:
			 		b.m_mile();
			 		break;
				default:
					cout<<"you enter a wrong choice";
			 }
			 break;
			 }
			case 3:
				{
			 switch(y){
			 	case 1:
			 		b.cm_km();
			 		break;
			 	case 2:
			 		b.cm_m();
			 		break;
			 	case 3:
			 		same();
			 		break;
			 	case 4:
			 		b.cm_mm();
			 		break;
			 	case 5:
			 		b.cm_inch();
			 		break;
			 	case 6:
			 		b.cm_feet();
			 		break;
			 	case 7:
			 		b.cm_yard();
			 		break;
			 	case 8:
			 		b.cm_mile();
			 		break;
				default:
					cout<<"you enter a wrong choice";
			 }
				break;
			}
			case 4:
				{
				
			 switch(y){
			 	case 1:
			 		b.mm_km();
			 		break;
			 	case 2:
			 		b.mm_m();
			 		break;
			 	case 3:
			 		b.mm_cm();
			 		break;
			 	case 4:
			 		same();
			 		break;
			 	case 5:
			 		b.mm_inch();
			 		break;
			 	case 6:
			 		b.mm_feet();
			 		break;
			 	case 7:
			 		b.mm_yard();
			 		break;
			 	case 8:
			 		b.mm_mile();
			 		break;
				default:
					cout<<"you enter a wrong choice";
				}
				break;
			}
			case 5:
				{
			
			 switch(y){
			 	case 1:
			 		b.inch_km();
			 		break;
			 	case 2:
			 		b.inch_m();
			 		break;
			 	case 3:
			 		b.inch_cm();
			 		break;
			 	case 4:
			 		b.inch_mm();
			 		break;
			 	case 5:
			 		same();
			 		break;
			 	case 6:
			 		b.inch_feet();
			 		break;
			 	case 7:
			 		b.inch_yard();
			 		break;
			 	case 8:
			 		b.inch_mile();
			 		break;
				default:
					cout<<"you enter a wrong choice";
				}
				break;
			}
			case 6:
				{
				
			 switch(y){
			 	case 1:
			 		b.feet_km();
			 		break;
			 	case 2:
			 		b.feet_m();
			 		break;
			 	case 3:
			 		b.feet_cm();
			 		break;
			 	case 4:
			 		b.feet_mm();
			 		break;
			 	case 5:
			 		b.feet_inch();
			 		break;
			 	case 6:
			 		same();
			 		break;
			 	case 7:
			 		b.feet_yard();
			 		break;
			 	case 8:
			 		b.feet_mile();
			 		break;
				default:
					cout<<"you enter a wrong choice";
				}
				break;
			}
			case 7:
				{
				
			 switch(y){
			 	case 1:
			 		b.yard_km();
			 		break;
			 	case 2:
			 		b.yard_m();
			 		break;
			 	case 3:
			 		b.yard_cm();
			 		break;
			 	case 4:
			 		b.yard_mm();
			 		break;
			 	case 5:
			 		b.yard_inch();
			 		break;
			 	case 6:
			 		b.yard_feet();
			 		break;
			 	case 7:
			 		same();
			 		break;
			 	case 8:
			 		b.yard_mile();
			 		break;
				default:
					cout<<"you enter a wrong choice";
				}
				break;
			}
			case 8:
			{
			switch(y){
			 	case 1:
			 		b.mile_km();
			 		break;
			 	case 2:
			 		b.mile_m();
			 		break;
			 	case 3:
			 		b.mile_cm();
			 		break;
			 	case 4:
			 		b.mile_mm();
			 		break;
			 	case 5:
			 		b.mile_inch();
			 		break;
			 	case 6:
			 		b.mile_feet();
			 		break;
			 	case 7:
			 		b.mile_yard();
			 		break;
			 	case 8:
			 		same();
			 		break;
				default:
					cout<<"you enter a wrong choice";
				}
				break;
			}
			default:
				cout<<"you enter a wrong choice";		
		}
	}
double convert2(int g,int h){
	temp f;
	switch(g){
		case 1:
			{
				switch(h){
					case 1:
						same();
						break;
	      			case 2:
						f.cel_f();
						break;
					case 3:
						f.cel_k();
						break;
					default:
						cout<<"You enter a wrong choice";
				}
				break;
			}
		case 2:
			{
				switch(h){
					case 1:
						f.f_cel();
						break;
					case 2:
						same();
						break;
					case 3:
						f.f_k();
						break;
					default:
						cout<<"You enter a wrong choice";	
				}
				break;
			}
		case 3:
			{
				switch(h){
					case 1:
						f.k_cel();
						break;
					case 2:
						f.k_f();
						break;
					case 3:
						same();
						break;
					default:
						cout<<"You enter a wrong choice";
				}
				break;
			}
		            default:
						cout<<"You enter a wrong choice";
	}
}
int main(){
	length b;
    weight c;
    vol d;
    area e;
    temp f;
	int x,y,z,a,n,g,h;
	system("color 31");
    while(1)
    {
        system("CLS");
        cout<<"\t\t\tWELCOME TO UNIT CONVERTION\n";
        cout<<"\n      TYPE"<<"\n     ------";
        C:
        cout<<"\n  1: Length\n" << "  2: Temparature\n"<<"  3: Weight\n"<<"  4: Area\n"<<"  5: Volume\n" <<"  6: Exit\n";
        cout<<"\n\nPlease choose your Convertion Type:" ;
        cin>>x;
        if(x==1)
        {           
		 system("ClS");
	     A:
		 system("CLS");
		 while(1){
			cout<<" 1. km    "<<endl
				<<" 2. m     "<<endl
				<<" 3. cm    "<<endl
				<<" 4. mm    "<<endl
				<<" 5. inch  "<<endl
				<<" 6. feet  "<<endl
				<<" 7. yard  "<<endl
				<<" 8. mile  ";
	    	cout<<"\n Enter the choice from which you want to convert :";
       	    cin>>z; 
        	if((z>=9)||(z==0)){
    			cout<<"you enter a wrong choice."<<"\nPlease eneter a valid input \n";
    			system("pause");
    			system("CLS");
    			goto A;
    		}
    		else
    		{
    			goto B;
			}
	}
	  B:
	  system("CLS");
		while(1){
			cout<<" 1. km   "<<endl
				<<" 2. m    "<<endl
				<<" 3. cm   "<<endl
				<<" 4. mm   "<<endl
				<<" 5. inch "<<endl
				<<" 6. feet "<<endl
				<<" 7. yard "<<endl
				<<" 8. mile ";
			cout<<"\n Enter the choice to which you want to convert :";
   			cin>>y;
    	    if((y>=9)||(y==0)){
    		    cout<<"you enter a wrong choice."<<"\nPlease eneter a valid input \n";
    			system("pause");
    			system("CLS");
    			goto B; 
        	}
        	else
        	{
        		break;
			}
       }
       convert1(z,y);
       cout<<"\n Do you want to continue.....";
       cout<<"\n Press 1 to continue or press 2 to goto at main menu....";
       cin>>a;
       if(a==1){
       	goto A;
	   }
	   else if(a==2){
	   	goto C;
	   }
       }
       else if(x==2){
	    system("ClS");
	     D:
		 system("CLS");
		 while(1){
			cout<<" 1.Degree Celcius     "<<endl
				<<" 2.Degree Feranhite     "<<endl
				<<" 3.Kelvin   ";
	    	cout<<"\n Enter the choice from which you want to convert :";
       	    cin>>g; 
        	if((g>=4)||(g==0)){
    			cout<<"you enter a wrong choice."<<"\nPlease eneter a valid input \n";
    			system("pause");
    			system("CLS");
    			goto D;
    		}
    		else
    		{
    			goto E;
			}
	}
	  E:
	  system("CLS");
		while(1){
			cout<<" 1.Degree Celcius     "<<endl
				<<" 2.Degree Feranhite     "<<endl
				<<" 3.Kelvin   ";
	    	cout<<"\n Enter the choice from which you want to convert :";
       	    cin>>h; 
        	if((h>=4)||(h==0)){
    			cout<<"you enter a wrong choice."<<"\nPlease eneter a valid input \n";
    			system("pause");
    			system("CLS");
    			goto E;
    		}
        	else
        	{
        		break;
			}
       }
       convert2(g,h);
       cout<<"\n Do you want to continue.....";
       cout<<"\n Press 1 to continue or press 2 to goto at main menu....";
       cin>>a;
       if(a==1){
       	goto D;
	   }
	   else if(a==2){
	   	goto A;
	   }
	   
	  
                  
}
}
	return 0;
}

