/*
jQuery.get("xml/example", function(data) {
	console.log('got got');
	xmldoc = jQuery.parseXML(data);
	console.log(data);
	var folders = jQuery(data).find('folders').children();
	console.log(folders.size());
	jQuery(folders).each(function(i) {
		console.log('#'+i+' : '+ jQuery(this).attr('name'));
	});
});
*/