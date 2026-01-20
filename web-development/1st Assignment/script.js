// Canvas dots animation
(function(){
  const c = document.getElementById('dotCanvas'); if(!c) return; const ctx = c.getContext('2d');
  const dots = Array.from({length:80},()=>({x:Math.random()*c.width,y:Math.random()*c.height,dx:(Math.random()-.5)*1.5,dy:(Math.random()-.5)*1.5}));
  function tick(){
    ctx.clearRect(0,0,c.width,c.height);
    for(const d of dots){
      d.x+=d.dx; d.y+=d.dy; if(d.x<0||d.x>c.width) d.dx*=-1; if(d.y<0||d.y>c.height) d.dy*=-1;
      ctx.beginPath(); ctx.arc(d.x,d.y,2,0,Math.PI*2); ctx.fill();
    }
    requestAnimationFrame(tick);
  }
  tick();
})();

// Simple form handler demonstrating output, dialog & template
const form = document.querySelector('form');
const out = document.getElementById('formStatus');
const dialog = document.getElementById('okDialog');
if(form){
  form.addEventListener('submit', (e)=>{
    e.preventDefault();
    out.value = 'Sending…';
    setTimeout(()=>{ out.value='Message sent!'; dialog.showModal(); }, 600);
  });
}

// Range → Output hookup example
const rangeFe = document.getElementById('range-fe');
const outFe = document.getElementById('out-fe');
if(rangeFe && outFe){
  rangeFe.addEventListener('input', ()=>{
    outFe.value = rangeFe.value;
  });
}
