var s,tu:string; i,d:longint;
function kt(s:string):boolean;
var i:longint;
begin
        for i:=1 to length(s) do
        if not(upcase(s[i]) in ['A'..'Z']) then exit(true);
        exit(false);
end;
begin
        readln(s);
        while pos(#32#32,s) <> 0 do
        delete(s,pos(#32#32,s),1);
        if s[1]=#32 then delete(s,1,1);
        if s[length(s)]=#32 then delete(s,length(s),1);
        s:=s+#32;
        d:=0;
        while s<>'' do
        begin
                tu:=copy(s,1,pos(#32,s)-1);
                if kt(tu) then inc(d);
                delete(s,1,pos(#32,s));
        end;
        write(d);
        readln;
end.
