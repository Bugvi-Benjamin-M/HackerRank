open System

[<EntryPoint>]
let main _ =
    
    let s = Int32.Parse(Console.ReadLine())

    let read _ = Console.ReadLine()
    let isValid = function 
        | null -> false 
        | _ -> true
    let seq = 
        Seq.initInfinite read
        |> Seq.takeWhile isValid
        |> Seq.collect (fun e -> Seq.init s (fun _ -> e))
        |> Seq.toList
        |> List.iter (fun e -> printfn "%s" e)
    seq    
    0    