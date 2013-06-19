window.onload = function() {
	var photowidth = 1000;
	if (window.innerWidth <= 600) {
	  photowidth = 500;
  }
	setTimeout(function() {
		// preload images
		new Image().src = "/sites/all/themes/civicampdc2013/images/howard"+photowidth+".jpg";
	}, 1000);
	setTimeout(function() {
		new Image().src = "/sites/all/themes/civicampdc2013/images/ost"+photowidth+".jpg";
	}, 1000);
	setTimeout(function() {
		new Image().src = "/sites/all/themes/civicampdc2013/images/metro"+photowidth+".jpg";
	}, 1000);
	setTimeout(function() {
		new Image().src = "/sites/all/themes/civicampdc2013/images/chair"+photowidth+".jpg";
	}, 1000);
	setTimeout(function() {
		new Image().src = "/sites/all/themes/civicampdc2013/images/buffalo"+photowidth+".jpg";
	}, 1000);
	setTimeout(function() {
		new Image().src = "/sites/all/themes/civicampdc2013/images/canal"+photowidth+".jpg";
	}, 1000);
	setTimeout(function() {
		new Image().src = "/sites/all/themes/civicampdc2013/images/cathedral"+photowidth+".jpg";
	}, 1000);
	setTimeout(function() {
		new Image().src = "/sites/all/themes/civicampdc2013/images/columns"+photowidth+".jpg";
	}, 1000);
	setTimeout(function() {
		new Image().src = "/sites/all/themes/civicampdc2013/images/malcolmx"+photowidth+".jpg";
	}, 1000);
	setTimeout(function() {
		new Image().src = "/sites/all/themes/civicampdc2013/images/dupont"+photowidth+".jpg";
	}, 1000);
	setTimeout(function() {
		new Image().src = "/sites/all/themes/civicampdc2013/images/dcmem"+photowidth+".jpg";
	}, 1000);
	setTimeout(function() {
		new Image().src = "/sites/all/themes/civicampdc2013/images/eckington"+photowidth+".jpg";
	}, 1000);
};
