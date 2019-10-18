open System

[<EntryPoint>]
let main _ =

    let rec f = function
        | 0 -> ()
        | r -> printfn "Hello World"; f (r-1)

    let n = System.Int32.Parse(Console.ReadLine())
    f n
    0
