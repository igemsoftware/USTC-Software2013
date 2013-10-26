strpre="<p><small> Go and Click</small></p><h3 onclick='select()'>Take a gFinder</h3>";
running=0;
count=0;
st=0;
function select()
{
	res="";
	$("#select").slideUp(500);
	$.get("http://localhost:8080/api.json?find=findbestbydata", function(json)
			{
				progress_select(json);
			});
	setTimeout("seleafter()",500);
}
function seleafter()
{
	$("#select").html(strpre+"<p>Waitting for running </p>");
	$("#select").slideToggle(500);
	running=1;
}
function progress_select(t)
{
	var json=eval('('+t+')');
	if(json.lock=="running"||json.lock=="stop")
		running=1;
	else if(json.lock=="wait")
	{
		running=0;
		result=json.result;
		$("#select").html(strpre+"<div id='res_select' style='display:none;'>"+"<p>result </p>"+"<h3 style='color: #7F9F7F;'>"+result+"</h3>"+"</div>");
		$("#res_select").slideToggle(500);
	}
}

function seletfromeva()
{
	$.get("http://localhost:8080/api.json?find=findfromeva");
	res="";
	$("#select").slideUp(500);
	$.get("http://localhost:8080/api.json?find=findbestbydata", function(json)
			{
				progress_eva(json);
			});
}

function eva_after()
{
	$("#selectfromeval").html(strpre+"<p>Waitting for running </p>");
	$("#selectfromeval").slideToggle(500);
	running=1;
	setTimeout("progress_eva()",300);
}

function progress_eva(t)
{
	var json=eval('('+t+')');
	if(json.lock=="running"||json.lock=="stop")
		running=1;
	else if(json.lock=="wait")
	{
		running=0;
		result=json.result;
		$("#select").html(strpre+"<div id='res_eva' style='display:none;'>"+"<p>result </p>"+"<h3 style='color: #7F9F7F;'>"+result+"</h3>"+"</div>");
		$("#res_eva").slideToggle(500);
	}
}
function handleFileSelect(evt) 
{
	var files= evt.target.files; // FileList object
	// files is a FileList of File objects. List some properties.
	var output= [];
	for (var i = 0, f; f = files[i]; i++) 
	{
		output.push('<li><strong>', escape(f.name), '</strong> (', f.type || 'n/a', ') - ',
		f.size, ' bytes, last modified: ',
		f.lastModifiedDate.toLocaleDateString(), '</li>');
	}
	document.getElementById('list').innerHTML = '<ul>' + output.join('') + '</ul>';
}

document.getElementById('files').addEventListener('change', handleFileSelect, false);
