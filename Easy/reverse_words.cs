using System.IO;
using System.Collections.Generic;
using System;

class Program
{
    static void Main(string[] args)
    {
        using (StreamReader reader = File.OpenText(args[0]))
        while (!reader.EndOfStream)
        {
            string line = reader.ReadLine();
            
            if (null == line)
                continue;

            IList<string> words = line.Split(' ');
            for (int i = words.Count - 1; i >= 0; i--)
            {
                if (i < words.Count - 1)
                    Console.Write(" ");

                Console.Write(words[i]);
            }

            Console.Write("\n");
        }
    }
}