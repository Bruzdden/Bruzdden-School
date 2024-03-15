function setup() {
    createCanvas(1280, 1280);
    
  }
  
  function draw() {
    

    translate(width / 2, height / 2);
    stroke(0,0,255);
    strokeWeight(20);
    ellipse(0,0, 500);

    stroke(0,0,255);
    strokeWeight(20);
    ellipse(0,0, 20);

    strokeWeight(4);
    for (let i = 0; i < 60; i++) {
      let angle = map(i, 0, 60, 0, TWO_PI);
      let x = cos(angle) * 215;
      let y = sin(angle) * 215;
      point(x, y);
    }

    let s = second();
    let angle = map(s, 0, 60, 0, TWO_PI);
    let x = cos(angle) * 200;
    let y = sin(angle) * 200;
    
    stroke(0,0,255);
    strokeWeight(5);
    line(0, 0, x, y);

    fill(200,200,200);
  }
