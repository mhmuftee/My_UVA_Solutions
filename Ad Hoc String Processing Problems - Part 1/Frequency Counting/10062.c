#include<stdio.h>
#include<string.h>
struct al
{
    int i;
    char c;
};
typedef struct al f;
int main() {

    int i,j,n,k=0;;
    f b[156],t;


    char s[10001];
    while(gets(s)) {
        n=strlen(s);
        for(i=32; i<=128; i++)
        {
            b[i].i=0;
            b[i].c=i;
        }
        for(i=0; i<n; i++)

            switch (s[i]) {

            case 32: {
                b[32].i++;
                break;
            }
            case 33: {
                b[33].i++;
                break;
            }
            case 34: {
                b[34].i++;
                break;
            }
            case 35: {
                b[35].i++;
                break;
            }
            case 36: {
                b[36].i++;
                break;
            }
            case 37: {
                b[37].i++;
                break;
            }
            case 38: {
                b[38].i++;
                break;
            }
            case 39: {
                b[39].i++;
                break;
            }
            case 40: {
                b[40].i++;
                break;
            }
            case 41: {
                b[41].i++;
                break;
            }
            case 42: {
                b[42].i++;
                break;
            }
            case 43: {
                b[43].i++;
                break;
            }
            case 44: {
                b[44].i++;
                break;
            }
            case 45: {
                b[45].i++;
                break;
            }
            case 46: {
                b[46].i++;
                break;
            }
            case 47: {
                b[47].i++;
                break;
            }
            case 48: {
                b[48].i++;
                break;
            }
            case 49: {
                b[49].i++;
                break;
            }
            case 50: {
                b[50].i++;
                break;
            }
            case 51: {
                b[51].i++;
                break;
            }
            case 52: {
                b[52].i++;
                break;
            }
            case 53: {
                b[53].i++;
                break;
            }
            case 54: {
                b[54].i++;
                break;
            }
            case 55: {
                b[55].i++;
                break;
            }
            case 56: {
                b[56].i++;
                break;
            }
            case 57: {
                b[57].i++;
                break;
            }
            case 58: {
                b[58].i++;
                break;
            }
            case 59: {
                b[59].i++;
                break;
            }
            case 60: {
                b[60].i++;
                break;
            }
            case 61: {
                b[61].i++;
                break;
            }
            case 62: {
                b[62].i++;
                break;
            }
            case 63: {
                b[63].i++;
                break;
            }
            case 64: {
                b[64].i++;
                break;
            }
            case 65: {
                b[65].i++;
                break;
            }
            case 66: {
                b[66].i++;
                break;
            }
            case 67: {
                b[67].i++;
                break;
            }
            case 68: {
                b[68].i++;
                break;
            }
            case 69: {
                b[69].i++;
                break;
            }
            case 70: {
                b[70].i++;
                break;
            }
            case 71: {
                b[71].i++;
                break;
            }
            case 72: {
                b[72].i++;
                break;
            }
            case 73: {
                b[73].i++;
                break;
            }
            case 74: {
                b[74].i++;
                break;
            }
            case 75: {
                b[75].i++;
                break;
            }
            case 76: {
                b[76].i++;
                break;
            }
            case 77: {
                b[77].i++;
                break;
            }
            case 78: {
                b[78].i++;
                break;
            }
            case 79: {
                b[79].i++;
                break;
            }
            case 80: {
                b[80].i++;
                break;
            }
            case 81: {
                b[81].i++;
                break;
            }
            case 82: {
                b[82].i++;
                break;
            }
            case 83: {
                b[83].i++;
                break;
            }
            case 84: {
                b[84].i++;
                break;
            }
            case 85: {
                b[85].i++;
                break;
            }
            case 86: {
                b[86].i++;
                break;
            }
            case 87: {
                b[87].i++;
                break;
            }
            case 88: {
                b[88].i++;
                break;
            }
            case 89: {
                b[89].i++;
                break;
            }
            case 90: {
                b[90].i++;
                break;
            }
            case 91: {
                b[91].i++;
                break;
            }
            case 92: {
                b[92].i++;
                break;
            }
            case 93: {
                b[93].i++;
                break;
            }
            case 94: {
                b[94].i++;
                break;
            }
            case 95: {
                b[95].i++;
                break;
            }
            case 96: {
                b[96].i++;
                break;
            }
            case 97: {
                b[97].i++;
                break;
            }
            case 98: {
                b[98].i++;
                break;
            }
            case 99: {
                b[99].i++;
                break;
            }
            case 100: {
                b[100].i++;
                break;
            }
            case 101: {
                b[101].i++;
                break;
            }
            case 102: {
                b[102].i++;
                break;
            }
            case 103: {
                b[103].i++;
                break;
            }
            case 104: {
                b[104].i++;
                break;
            }
            case 105: {
                b[105].i++;
                break;
            }
            case 106: {
                b[106].i++;
                break;
            }
            case 107: {
                b[107].i++;
                break;
            }
            case 108: {
                b[108].i++;
                break;
            }
            case 109: {
                b[109].i++;
                break;
            }
            case 110: {
                b[110].i++;
                break;
            }
            case 111: {
                b[111].i++;
                break;
            }
            case 112: {
                b[112].i++;
                break;
            }
            case 113: {
                b[113].i++;
                break;
            }
            case 114: {
                b[114].i++;
                break;
            }
            case 115: {
                b[115].i++;
                break;
            }
            case 116: {
                b[116].i++;
                break;
            }
            case 117: {
                b[117].i++;
                break;
            }
            case 118: {
                b[118].i++;
                break;
            }
            case 119: {
                b[119].i++;
                break;
            }
            case 120: {
                b[120].i++;
                break;
            }
            case 121: {
                b[121].i++;
                break;
            }
            case 122: {
                b[122].i++;
                break;
            }
            case 123: {
                b[123].i++;
                break;
            }
            case 124: {
                b[124].i++;
                break;
            }
            case 125: {
                b[125].i++;
                break;
            }
            case 126: {
                b[126].i++;
                break;
            }
            case 127: {
                b[127].i++;
                break;
            }






            }

        for(i=32; i<127; i++)
            for(j=i+1; j<=127; j++)
                if(b[i].i>b[j].i)
                {
                    t=b[i];
                    b[i]=b[j];
                    b[j]=t;
                }

        for(i=32; i<127; i++)
            for(j=i+1; j<=127; j++)
                if(b[i].i==b[j].i && b[i].c<b[j].c)
                {
                    t=b[i];
                    b[i]=b[j];
                    b[j]=t;
                }
        if(k!=0)printf("\n");
        for(i=32; i<=128; i++)
            if(b[i].i!=0)
                printf("%d %d\n",b[i].c,b[i].i);
        k++;
    }
    return 0;
}
