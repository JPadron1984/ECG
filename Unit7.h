//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include <FStream.h>
#include <math.h>

//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TBevel *Bevel1;
	TBevel *Bevel2;
	TButton *Button1;
	TButton *Button2;
	TOpenDialog *OpenDialog1;
	TOpenDialog *OpenDialog2;
	TEdit *Edit1;
	TEdit *Edit2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations

float W,H,n;
float *datos1;
float *datos2;
float *derivada;


float fmaximo (float *lista,int k);
float fminimo (float *lista,int k);

void Areagrafica();
void Graficar (float * dato,int k);
void Derivada (float * dato,int k);


float Frecuencia (float * dato, int k);

TRect R;

	__fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
