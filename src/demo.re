

type scoreType = int;
let x: scoreType = 5;

let y = string_of_int(x) ^ "HI";

Js.log("Hello, BuckleScript and Reason!" ^ y);

/* That does not work

Js.log("Hello, BuckleScript and Reason!" ++ y);

*/

