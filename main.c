 #include "../../Library/KIT.h"
 #include "../../Library/utils.h"
 #include "../RGB_CONFIG.h"
 
 
 int main (void)
 {
	int IR; 
	int S1;
	int S2;
		
	enum RGB_T RGB_state=Red;
	while (1){
	IR=PTD->PDOR;
	IR=0x20;
	if (IR != 0x20){
		SET_COLOR (Red);
		break;
	}
	S1=PTD->PDOR;
	S1&=0x4;
	//switch 1
	if (S1==0x4){
		switch (RGB_state){
		case Red:
			SET_COLOR(RGB_state);
			delay(1);
			RGB_state=Off;
		case Green:
			SET_COLOR(RGB_state);
			delay(1);
			RGB_state=Red;
		case Blue:
			SET_COLOR(RGB_state);
			delay(1);
			RGB_state=Green;
		case Yellow:
			SET_COLOR(RGB_state);
			delay(1);
			RGB_state=Blue;
		case Cyan:
			SET_COLOR(RGB_state);
			delay(1);
			RGB_state=Yellow;
		case Magenta:
			SET_COLOR(RGB_state);
			delay(1);
			RGB_state=Cyan;
		case White:
			SET_COLOR(RGB_state);
			delay(1);
			RGB_state=Magenta;
		case Off:
			SET_COLOR(RGB_state);
			delay(1);
			RGB_state=White;
	}
}
		S2=PTD->PDOR;
		S2&=0x8;
		if (S1!=0x4 && S2==0x8){
			switch(RGB_state){
				case Red:
					SET_COLOR(RGB_state);
					delay(1);
					RGB_state=Green;
				case Green:
					SET_COLOR(RGB_state);
					delay(1);
					RGB_state=Blue;
				case Blue:
					SET_COLOR(RGB_state);
					delay(1);
					RGB_state=Off;
				case Yellow:
					SET_COLOR(RGB_state);
					delay(1);
					RGB_state=Red;
				case Cyan:
					SET_COLOR(RGB_state);
					delay(1);
					RGB_state=Red;
				case Magenta:
					SET_COLOR(RGB_state);
					delay(1);
					RGB_state=Red;
				case White:
					SET_COLOR(RGB_state);
					delay(1);
					RGB_state=Red;
				case Off:
					SET_COLOR(RGB_state);
					delay(1);
					RGB_state=Red;
			}
		}
				if (S2!=0x8 && S1!=0x4 && IR==0x10){
					switch(RGB_state){
						case Red:
								SET_COLOR(RGB_state);
								delay(1);
								RGB_state=Green;
						case Green:
								SET_COLOR(RGB_state);
								delay(1);
								RGB_state=Blue;
						case Blue:
								SET_COLOR(RGB_state);
								delay(1);
								RGB_state=Yellow;
						case Yellow:
								SET_COLOR(RGB_state);
								delay(1);
								RGB_state=Cyan;
						case Cyan:
								SET_COLOR(RGB_state);
								delay(1);
								RGB_state=Magenta;
						case White:
								SET_COLOR(RGB_state);
								delay(1);
								RGB_state=Off;
						case Off:
								SET_COLOR(RGB_state);
								delay(1);
								RGB_state=Red;
					}
				}
			}
	 return 0;
 }
 