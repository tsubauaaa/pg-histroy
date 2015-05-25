using System;

class WhileSample
{
  static void Main()
  {
    for(int x=1; x<=9; ++x)
    {
      for(int y=1; y<=9; ++y)
      {
        Console.Write((x*y).ToString().PadLeft(3, ' '));
      }
      Console.Write("\n");
    }
  }
}
