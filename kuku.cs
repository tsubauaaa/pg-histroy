using System;

class WhileSample
{
  static void Main()
  {
    //九九表を作成
    for(int x=1; x<=9; ++x) // xを1～9まで、1ずつ増やして繰り返し
    {
      for(int y=1; y<=9; ++y) // yを1～9まで、1ずつ増やして繰り返し
      {
        // xy の値を、幅をそろえて表示
        Console.Write((x*y).ToString().PadLeft(3, ' '));
      }
      Console.Write("\n");
    }
  }
}
