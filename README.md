[blockscheme.drawio](https://github.com/user-attachments/files/33507628/blockscheme.drawio)
<mxfile host="app.diagrams.net">
  <diagram name="Блок-схема" id="d1">
    <mxGraphModel dx="2684" dy="570" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="1654" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="m1" parent="1" style="rounded=1;arcSize=50;fillColor=#d5e8d4;strokeColor=#82b366;whiteSpace=wrap;html=0;fontSize=12;" value="Начало" vertex="1">
          <mxGeometry height="40" width="240" x="180" y="20" as="geometry" />
        </mxCell>
        <mxCell id="m2" parent="1" style="rounded=0;fillColor=#dae8fc;strokeColor=#6c8ebf;whiteSpace=wrap;html=0;fontSize=12;" value="UCL = 64.32" vertex="1">
          <mxGeometry height="50" width="240" x="180" y="100" as="geometry" />
        </mxCell>
        <mxCell id="m3" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#fff2cc;strokeColor=#d6b656;whiteSpace=wrap;html=0;fontSize=8;" value="Вывод: «Введите температуру сырья X (10...70 °C)»" vertex="1">
          <mxGeometry height="60" width="280" x="160" y="190" as="geometry" />
        </mxCell>
        <mxCell id="m4" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#fff2cc;strokeColor=#d6b656;whiteSpace=wrap;html=0;fontSize=12;" value="Ввод X" vertex="1">
          <mxGeometry height="50" width="240" x="180" y="290" as="geometry" />
        </mxCell>
        <mxCell id="m5" parent="1" style="shape=process;fillColor=#e1d5e7;strokeColor=#9673a6;whiteSpace=wrap;html=0;fontSize=12;" value="result = Q(X)" vertex="1">
          <mxGeometry height="50" width="240" x="180" y="380" as="geometry" />
        </mxCell>
        <mxCell id="m6" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#fff2cc;strokeColor=#d6b656;whiteSpace=wrap;html=0;fontSize=12;" value="Вывод: Q(X) = result" vertex="1">
          <mxGeometry height="50" width="240" x="180" y="470" as="geometry" />
        </mxCell>
        <mxCell id="m7" parent="1" style="rhombus;fillColor=#f8cecc;strokeColor=#b85450;whiteSpace=wrap;html=0;fontSize=12;" value="result &gt; UCL?" vertex="1">
          <mxGeometry height="100" width="240" x="180" y="560" as="geometry" />
        </mxCell>
        <mxCell id="m8" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#fff2cc;strokeColor=#d6b656;whiteSpace=wrap;html=0;fontSize=5;" value="Вывод: «ВНИМАНИЕ! Превышена верхняя контрольная граница UCL = 64.32»" vertex="1">
          <mxGeometry height="80" width="260" x="-60" y="710" as="geometry" />
        </mxCell>
        <mxCell id="m9" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;fillColor=#fff2cc;strokeColor=#d6b656;whiteSpace=wrap;html=0;fontSize=6;" value="Вывод: «Значение находится в пределах верхней контрольной границы»" vertex="1">
          <mxGeometry height="80" width="260" x="400" y="710" as="geometry" />
        </mxCell>
        <mxCell id="m10" parent="1" style="rounded=1;arcSize=50;fillColor=#d5e8d4;strokeColor=#82b366;whiteSpace=wrap;html=0;fontSize=12;" value="Конец" vertex="1">
          <mxGeometry height="40" width="240" x="180" y="850" as="geometry" />
        </mxCell>
        <mxCell id="me0" edge="1" parent="1" source="m1" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" target="m2" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="me1" edge="1" parent="1" source="m2" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" target="m3" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="me2" edge="1" parent="1" source="m3" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" target="m4" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="me3" edge="1" parent="1" source="m4" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" target="m5" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="me4" edge="1" parent="1" source="m5" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" target="m6" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="me5" edge="1" parent="1" source="m6" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" target="m7" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="me6" edge="1" parent="1" source="m7" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="m8" value="Да">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="me7" edge="1" parent="1" source="m7" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" target="m9" value="Нет">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="me8" edge="1" parent="1" source="m8" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" target="m10" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="me9" edge="1" parent="1" source="m9" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=1;entryY=0.5;entryDx=0;entryDy=0;" target="m10" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="q0" parent="1" style="rounded=1;arcSize=50;fillColor=#d5e8d4;strokeColor=#82b366;whiteSpace=wrap;html=0;fontSize=12;" value="Функция Q(X)" vertex="1">
          <mxGeometry height="40" width="200" x="1000" y="20" as="geometry" />
        </mxCell>
        <mxCell id="q1" parent="1" style="rhombus;fillColor=#f8cecc;strokeColor=#b85450;whiteSpace=wrap;html=0;fontSize=12;" value="X &lt; 25?" vertex="1">
          <mxGeometry height="90" width="200" x="1000" y="100" as="geometry" />
        </mxCell>
        <mxCell id="q2" parent="1" style="rounded=0;fillColor=#dae8fc;strokeColor=#6c8ebf;whiteSpace=wrap;html=0;fontSize=12;" value="return 3*(X-25)+10" vertex="1">
          <mxGeometry height="50" width="220" x="720" y="120" as="geometry" />
        </mxCell>
        <mxCell id="q3" parent="1" style="rhombus;fillColor=#f8cecc;strokeColor=#b85450;whiteSpace=wrap;html=0;fontSize=12;" value="X &lt;= 45?" vertex="1">
          <mxGeometry height="90" width="200" x="1000" y="240" as="geometry" />
        </mxCell>
        <mxCell id="q4" parent="1" style="rounded=0;fillColor=#dae8fc;strokeColor=#6c8ebf;whiteSpace=wrap;html=0;fontSize=12;" value="return 2*sqrt(X-35+10)+45" vertex="1">
          <mxGeometry height="50" width="220" x="720" y="260" as="geometry" />
        </mxCell>
        <mxCell id="q5" parent="1" style="rounded=0;fillColor=#dae8fc;strokeColor=#6c8ebf;whiteSpace=wrap;html=0;fontSize=12;" value="return (X-45)*(X-45)/4+55" vertex="1">
          <mxGeometry height="50" width="240" x="980" y="380" as="geometry" />
        </mxCell>
        <mxCell id="q6" parent="1" style="rounded=1;arcSize=50;fillColor=#d5e8d4;strokeColor=#82b366;whiteSpace=wrap;html=0;fontSize=12;" value="Конец" vertex="1">
          <mxGeometry height="40" width="200" x="1000" y="480" as="geometry" />
        </mxCell>
        <mxCell id="qe0" edge="1" parent="1" source="q0" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" target="q1" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="qe1" edge="1" parent="1" source="q1" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=1;entryY=0.5;entryDx=0;entryDy=0;" target="q2" value="Да">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="qe2" edge="1" parent="1" source="q1" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" target="q3" value="Нет">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="qe3" edge="1" parent="1" source="q3" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=1;entryY=0.5;entryDx=0;entryDy=0;" target="q4" value="Да">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="qe4" edge="1" parent="1" source="q3" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" target="q5" value="Нет">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="qe5" edge="1" parent="1" source="q2" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" target="q6" value="">
          <mxGeometry relative="1" as="geometry">
            <Array as="points">
              <mxPoint x="680" y="145" />
              <mxPoint x="680" y="500" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="qe6" edge="1" parent="1" source="q4" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" target="q6" value="">
          <mxGeometry relative="1" as="geometry">
            <Array as="points">
              <mxPoint x="680" y="285" />
              <mxPoint x="680" y="500" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="qe7" edge="1" parent="1" source="q5" style="edgeStyle=orthogonalEdgeStyle;rounded=0;endArrow=classic;html=0;fontSize=12;" target="q6" value="">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
