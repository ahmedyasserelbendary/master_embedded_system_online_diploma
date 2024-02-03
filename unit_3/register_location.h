#ifndef ___REGISTER___LOCATIONS____H____
#define ___REGISTER___LOCATIONS____H____
typedef union
{
  /*
  ************************************
  *   to access bits in register     *
  ************************************
  */
  struct BITS
  {

      volatile unsigned int bit0   :1;
      volatile unsigned int bit1   :1;
      volatile unsigned int bit2   :1;
      volatile unsigned int bit3   :1;
      volatile unsigned int bit4   :1;
      volatile unsigned int bit5   :1;
      volatile unsigned int bit6   :1;
      volatile unsigned int bit7   :1;
      volatile unsigned int bit8   :1;
      volatile unsigned int bit9   :1;
      volatile unsigned int bit10  :1;
      volatile unsigned int bit11  :1;
      volatile unsigned int bit12  :1;
      volatile unsigned int bit13  :1;
      volatile unsigned int bit14  :1;
      volatile unsigned int bit15  :1;
      volatile unsigned int bit16  :1;
      volatile unsigned int bit17  :1;
      volatile unsigned int bit18  :1;
      volatile unsigned int bit19  :1;
      volatile unsigned int bit20  :1;
      volatile unsigned int bit21  :1;
      volatile unsigned int bit22  :1;
      volatile unsigned int bit23  :1;
      volatile unsigned int bit24  :1;
      volatile unsigned int bit25  :1;
      volatile unsigned int bit26  :1;
      volatile unsigned int bit27  :1;
      volatile unsigned int bit28  :1;
      volatile unsigned int bit29  :1;
      volatile unsigned int bit30  :1;
      volatile unsigned int bit31  :1;

  }bit;


  /*
  *****************************************
  *   to access half bytes in register    *
  *****************************************
  */

   struct HALF_BYTE
   {
       volatile unsigned int bits0_3   :4;
       volatile unsigned int bits4_7   :4;
       volatile unsigned int bits8_11  :4;
       volatile unsigned int bits12_15 :4;
       volatile unsigned int bits16_19 :4;
       volatile unsigned int bits20_23 :4;
       volatile unsigned int bits24_27 :4;
       volatile unsigned int bits28_31 :4;

   }nibble;



  /*
  ************************************
  *   to access bytes in register    *
  ************************************
  */

  struct BYTES
  {

      volatile unsigned int port0   :8;
      volatile unsigned int port1   :8;
      volatile unsigned int port2   :8;
      volatile unsigned int port3   :8;


  }byte;

  /*
  ************************************
  *   to access 2bytes in register   *
  ************************************
  */

  struct HALF_WORD
  {
      volatile unsigned int first_half   :16;
      volatile unsigned int second_half  :16;

  }half_word;
  /*
  ******************************
  *   to access all register   *
  ******************************
  */
  volatile unsigned int all_ports;

}register_;

#endif   //___REGISTER___LOCATIONS____H____
