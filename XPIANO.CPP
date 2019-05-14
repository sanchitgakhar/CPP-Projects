#include<dos.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
void beats(int k)
{
int a=7,b=8;
clrscr();
for(int i=0;i<7;i++)
{
char p[10],pp[10],sp[10],ssp[10];
for(int l=0;l<5;l++) p[l]=219;
p[l]='\0';
for(l=0;l<2;l++) pp[l]=219;
pp[l]='\0';
for(l=0;l<6;l++) sp[l]=219;
sp[l]='\0';
cprintf("            ");
if(k==0) textcolor(b);
cprintf(p);
if(k==0) textcolor(a);
textcolor(0);
if(k==1) textcolor(b);
cprintf(sp);
if(k==1) textcolor(a);
textcolor(a);
if(k==2) textcolor(b);
cprintf(p);
if(k==2) textcolor(a);
if(k==3) textcolor(b);
cprintf(p);
if(k==3) textcolor(a);
textcolor(0);
if(k==4) textcolor(b);
cprintf(sp);
if(k==4) textcolor(a);
textcolor(a);
if(k==5) textcolor(b);
cprintf(p);
if(k==5) textcolor(a);
if(k==6) textcolor(b);
cprintf(p);
if(k==6) textcolor(a);
textcolor(0);
if(k==7) textcolor(b);
cprintf(sp);
if(k==7) textcolor(a);
textcolor(a);
if(k==8) textcolor(b);
cprintf(pp);
if(k==8) textcolor(a);
textcolor(0);
if(k==9) textcolor(b);
cprintf(sp);
if(k==9) textcolor(a);
textcolor(a);
if(k==10) textcolor(b);
cprintf(p);
if(k==10) textcolor(a);
cout<<endl;
}

int k2=k;
if(k2==1||k2==4||k2==7||k2==9) k2=-1;
if(k>1) k2--;
if(k>4) k2--;
if(k>7) k2--;
if(k>9) k2--;
for(int i1=0;i1<4;i1++){cprintf("            ");for(int m=0;m<7;m++)
{char ssp[10];
for(int l=0;l<8;l++) ssp[l]=219;
ssp[l]='\0';
if(k2==m) textcolor(b);
cprintf(ssp);
if(k2==m) textcolor(a);
}
cout<<endl;}

}
void lol()
{
cout<<"\nPlaylist:\n\n1.Bach's Minuet\nSongs composed by me:\n\n2.Fairies\t3.Hairies\t4.Aires\n5.Spaceship\t6.Electric\t7.Rainbow\n8.Mandrilla";
}
void bullt(char str[],int k)
{
for(int l=0;str[l]!='\0';l++);
for(int i=0;i<k;i++)
{
cout<<" ";
cout<<str;
delay(20);
for(int j=0;j<l;j++) cout<<'\b';
}
}
char convo[500];

void main ()
{ clrscr();
char c=' ',charr[36]="qazwsxedcrfvtgbyhnujmik,ol.p;/[']";
float fre[36]={3729.31,3322.44,2959.96,2489.02,2217.46,1864.66,1479.98,1244.51,1108.73,932.328,739.989,622.254,554.365,466.164,415.305,369.994,311.127,277.183,233.082,184.997,155.563,138.591,116.541,103.826,92.4986,77.7817,69.2957,58.2705,51.9131,46.2493,38.8908,34.6478,29.1352};
float frequency[140] = {587.3,392.0,440.0,493.9,523.3,587.3,392.0,392.0,659.3,523.3,587.3,659.3,740.0,784.0,392.0,392.0,523.3,587.3,523.3,493.9,440.0,493.9,523.3,493.9,440.0,392.0,370.0,392.0,440.0,493.9,392.0,493.9,440.0,587.3,392.0,440.0,493.9,523.3,587.3,392.0,392.0,659.3,523.3,587.3,659.3,740.0,784.0,392.0,392.0,523.3,587.3,523.3,493.9,440.0,493.9,523.3,493.9,440.0,392.0,440.0,493.9,440.0,392.0,370.0,392.0,987.8,784.0,880.0,987.8,784.0,880.0,587.3,659.3,740.0,587.3,784.0,659.3,740.0,784.0,587.3,554.4,493.9,554.4,440.0,440.0,493.9,554.4,587.3,659.3,740.0,784.0,740.0,659.3,740.0,440.0,554.4,587.3,587.3,392.0,370.0,392.0,659.3,392.0,370.0,392.0,587.3,523.3,493.9,440.0,392.0,370.0,392.0,440.0,293.7,329.6,370.0,392.0,440.0,493.9,523.3,493.9,440.0,493.9,587.3,392.0,370.0,392.0} ;
char string[]="'''[p///;lllloi,,,kjkkkiummmjhjjjuynnnhghhhytbbbgfgggtrvvvfdfffrecccdsyyngjnntjqwertyuiop[]';lkjhgfdsa";
char str[]="azzqqqsxxwwwdcceeefvvrrrgbbttthnnyyyjmmuuuk,,iiil..ooo;//pppasdfghjkl;'/.,mnbvcxzqwertyuiop[]';lkjhgfdsa";
char s[]="yynnghhjjuummhjjkkrrnnfhhjjoo,,fkkllrrvvdffggeemmfggjjyyvvfgghheebbdgghhpp..gjjkkuummhkklleeccsffggoollkll;;yynnghhjjqq";
char ss[]="quiwgfvhxzbckbalhfpqjwpfjjdvkk]slg;'kl''ds/snv,bzxkjvgdhgj;awretuohbjkblbpdqwertyuiop[]';lkjhgfdsazxcvbnm,./qwertyuiop[]';lkjhgfdsazxcvbnm,./";
char sss[]="/p/'''.o.;;;,i,lllmumkkknynjjjbtbhhhvrvgggcecfffxwxdddzqzsss";
char s4[]="qazwsxedcrfvtgbyhnujmik,ol.p;/[']/;p.lo,kimjunhybgtvfrcdexswzaq";
char s5[]="yynhjttgjyygkkhyynhjttgjkkmkoi";
int search(char[]),d5[]={60,200,200,60,200,60,200,60,340,60,200,200,80,80,640,60,200,200,60,200,60,150,60,240,60,150,150,90,60,90};
int ddd[]={0,0,0,130,130,400};
int d[]={80,180,80,180,180,80,180,80,250};
int du[]={650,150,650,150,150,900};
float dur[]={200,200,270,100,300};
float duration[140] = {0.545,0.273,0.273,0.273,0.273,0.545,0.545,0.545,0.545,0.273,0.273,0.273,0.273,0.545,0.545,0.545,0.545,0.273,0.273,0.273,0.273,0.545,0.273,0.273,0.273,0.273,0.545,0.273,0.273,0.273,0.273,0.273,1.364,0.545,0.273,0.273,0.273,0.273,0.545,0.545,0.545,0.545,0.273,0.273,0.273,0.273,0.545,0.545,0.545,0.545,0.273,0.273,0.273,0.273,0.545,0.273,0.273,0.273,0.273,0.545,0.273,0.273,0.273,0.273,1.636,0.545,0.273,0.273,0.273,0.273,0.545,0.273,0.273,0.273,0.273,0.545,0.273,0.273,0.273,0.273,0.545,0.273,0.273,0.545,0.273,0.273,0.273,0.273,0.273,0.273,0.545,0.545,0.545,0.545,0.545,0.545,1.636,0.545,0.273,0.273,0.545,0.545,0.273,0.273,0.545,0.545,0.545,0.545,0.273,0.273,0.273,0.273,0.545,0.273,0.273,0.273,0.273,0.273,0.273,0.545,0.545,0.545,0.273,0.273,0.545,0.545,1.636 } ;
int i,j,k=0,t=100,f=0;
int oo;
cout<<"need instructions?? (Enter-->yes)\n";
char cc=getch();
if(cc==13)
{
clrscr();
bullt("The Grand Piano...",30);
cout<<'\n';
bullt("by SSRK a.k.a Sir Saurabh Kumar",45);
cout<<"\n\n\n";
bullt("Gonna checkout my piano",15);
cout<<'\n';
bullt("then brace yourself homo [sapien ;)]",30);
cout<<'\n';
bullt("As I present you the world's best piano..",15);
cout<<'\n';
bullt("I dont really care about the world, but its atleast better than Shubham's :P",1);
cout<<"\n\n\nHow to use:\n\nYou can use the whole keyboard to produce sounds (all alphabets + special symbols adjacent to them..i.e []\;',./)\n\nTo increase the time of a note press '=', to decrease press '-'\n\nTo play a predefined note sequence press the number assigned to them\n\nHave Fun ;)";
getch();
}
for(j=0;j<400;j++) convo[j]=' ';
while(1)
{
if(c=='1')
{
for(j=0;j<140;j++)
{
sound(frequency[j]);
beats((frequency[j]-360)/40);
cout<<"\n\n\nTime of a note :"<<duration[j]*1000<<" milliseconds \n\nLast frequency : ";
cout<<frequency[j];
lol();
delay(duration[j]*1000);
}
}
if(c=='2')
{
for(j=0;string[j]!='\0';j++)
{
for(i=0;i<33;i++) if(string[j]==charr[i]) break;
sound(fre[i]);
int hoho=i;
beats(i/3);
oo=j%5;
cout<<"\n\n\nTime of a note :"<<100<<" milliseconds \n\nLast frequency : ";
cout<<fre[hoho];
lol();
delay(170);
nosound();
delay(dur[oo]);
}
}
if(c=='3')
{
for(j=0;str[j]!='\0';j++)
{
for(i=0;i<33;i++) if(str[j]==charr[i]) break;
sound(fre[i]);
int hoho=i;
beats(i/3);
oo=j%6;
cout<<"\n\n\nTime of a note :"<<100<<" milliseconds \n\nLast frequency : ";
cout<<fre[hoho];
lol();
delay(100);
nosound();
delay(du[oo]);
}
}
if(c=='4')
{
for(j=0;s[j]!='\0';j++)
{
for(i=0;i<33;i++) if(s[j]==charr[i]) break;
sound(fre[i]);
int hoho=i;
beats(i/3);
oo=j%9;
cout<<"\n\n\nTime of a note :"<<100<<" milliseconds \n\nLast frequency : ";
cout<<fre[hoho];lol();
delay(100);
nosound();
delay(d[oo]);
}
}

if(c=='5')
{
for(j=0;ss[j]!='\0';j++)
{
for(i=0;i<33;i++) if(ss[j]==charr[i]) break;
sound(fre[i]);
int hoho=i;
beats(i/3);
oo=j%9;
cout<<"\n\n\nTime of a note :"<<100<<" milliseconds \n\nLast frequency : ";
cout<<fre[hoho];
lol();
delay(100);
nosound();
delay(30);
}
}
if(c=='6')
{
for(j=0;sss[j]!='\0';j++)
{
for(i=0;i<33;i++) if(sss[j]==charr[i]) break;
sound(fre[i]);
int hoho=i;
beats(i/3);
oo=j%6;
cout<<"\n\n\nTime of a note :"<<200<<" milliseconds \n\nLast frequency : ";
cout<<fre[hoho];
lol();
delay(200);
nosound();
delay(ddd[oo]);
}
}
if(c=='7')
{
for(j=0;s4[j]!='\0';j++)
{
for(i=0;i<33;i++) if(s4[j]==charr[i]) break;
sound(fre[i]);
int hoho=i;
beats(i/3);
cout<<"\n\n\nTime of a note :"<<200<<" milliseconds \n\nLast frequency : ";
cout<<fre[hoho];
lol();
delay(150);
nosound();
delay(0);
}
}
if(c=='8')
{
for(j=0;s5[j]!='\0';j++)
{
for(i=0;i<33;i++) if(s5[j]==charr[i]) break;
sound(fre[i]);
int hoho=i;
beats(i/3);
cout<<"\n\n\nTime of a note :"<<200<<" milliseconds \n\nLast frequency : ";
cout<<fre[hoho];
lol();
delay(100);
nosound();
delay(d5[j]);

}
}

for(i=0;i<33;i++) if(c==charr[i]) break;
sound(fre[i]);
int mm=i;
for(j=0;j<33;j++) if(c==charr[j]) {f++;k=j/3;break;}
beats(k);
cout<<"\n\n\nTime of a note :"<<t<<" milliseconds \nLast frequency : ";
if(f!=0) cout<<fre[mm];
else cout<<'0';
cout<<endl;
textcolor(12);
if(search("hbaruas")) cprintf("Aww yeah, SauRabh Kumar aka SRK 8-)");
if(search("ybbob")) cprintf("Bobby Pro!! :P");
if(search("eninytxis")) cprintf("69...\t well what were you expecting?? :P");
if(search("bojwolb")) cprintf("I am just a piano, you play me not blow me..");
if(search("sboob")) cprintf("  (.Y.)....  (.Y.)... happy? :P");
if(search("mahbuhs")) cprintf("Gaaaaayyyyyyy.....!!!!!!!");
if(search("tixe")) {cprintf("huh.. you could've just pressed escape..");nosound();getch();break;}
if(search("stiderc")) cprintf("Made by Sir SauRabh Kumar, who else.. :P");
if(search("ih")) cprintf("Hello there fellow human..");
if(search("pustahw")) cprintf("The ceiling maybe? xD");
if(search("amamoy")) cprintf("Yo mama, so fat I took her picture last year and its still printing");
if(search("aamamoy")) cprintf("Yo mama so fat not even Dora can exlore her");
if(search("aaamamoy")) cprintf("Yo mama so fat when she steps on a scale it says to be continued");
if(search("aaaamamoy")) cprintf("Yo mama so fat when she wears one of those X jackets, helicopters try to land        on her");
if(search("kcuhc")) cprintf("Chuck Norris once visited the Virgin Islands. They are now just The Islands");
if(search("kkcuhc")) cprintf("Chuck Norris died years ago, the Grim Reaper just can't build up the courage to tell him");
if(search("kkkcuhc")) cprintf("Chuck Norris invented spoon, cause killing with knife was too easy");
if(search("derobmai")) cprintf(".. -_-.. try playing the piano then...");
if(search("kcusuoy")) cprintf("No I dont, I am a PIANO");
if(search("uoyerawoh")) cprintf("You know I am just a PIANO, questioning my well being doesnt make sense...");
textcolor(7);
lol();
delay(t);
nosound();
c=getch();
if(c==27) break;
if(c=='=') t+=20;
if(c=='-') t-=20;
for(int q=10;q>0;q--) convo[q]=convo[q-1];
convo[0]=c;

}
getch();
}
int search(char a[])
{
for(int l=0;a[l]!='\0';l++);
for(int i=0;i<l;i++) if(convo[i]!=a[i]) return 0;
return 1;
}