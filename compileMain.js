// compile c static libs

const { exec } = require('child_process');

const files = ["main.c"];



files.push("myLib/myStrLib.c");
//
files.push("myLib/enableANSI.c");
files.push("myLib/printC.c");
//
files.push("myLib/inputStr.c");
//
files.push("myLib/handleFile.c");
files.push("myLib/createHtmFile.c");
//
files.push("myLib/endA.c");
//


let fullCommand = "gcc -o app.exe";

function setGcc(files) {

  for (let file of files) {
    fullCommand += " "+file;
  }
  return fullCommand;
}

function execFun() {
  let cmdCommnd = setGcc(files);
  console.log(`command : \'${cmdCommnd}\'`);
  exec(cmdCommnd, (error) => {
    if (error) {
      console.error(`\nexec error:\n${error}`);
      return;
    }

    console.log(`end of exec .`);
  });
}

execFun();


