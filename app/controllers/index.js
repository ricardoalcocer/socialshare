function shareImage(e) {
	var fileToShare = null;

	// generate image from screen
	if (OS_ANDROID){
		var img = $.newimage.toImage().media;
		fileToShare = Titanium.Filesystem.getFile(Titanium.Filesystem.externalStorageDirectory,'tempimage.jpg');
	}else{
		var img = $.newimage.toImage();
		fileToShare = Titanium.Filesystem.getFile(Titanium.Filesystem.applicationDataDirectory,'tempimage.jpg');
	}
	fileToShare.write(img);
	//

	// share image
	require('com.alcoapps.socialshare').share({
		status 					: 'This is the status to share',
		image 					: fileToShare.nativePath,
		androidDialogTitle 		: 'Sharing is caring!!!',
		view 					: $.label2
	})
}

function shareText(e){
	// share text status
	require('com.alcoapps.socialshare').share({
		status 				: 'This is the status to sahre',
		androidDialogTitle 	: 'Caption!!!',
		view 					: $.label1
	})
}

function shareImageWidget(e) {
	var fileToShare = null;

	// generate image from screen
	if (OS_ANDROID){
		var img = $.newimage.toImage().media;
		fileToShare = Titanium.Filesystem.getFile(Titanium.Filesystem.externalStorageDirectory,'tempimage.jpg');
	}else{
		var img = $.newimage.toImage();
		fileToShare = Titanium.Filesystem.getFile(Titanium.Filesystem.applicationDataDirectory,'tempimage.jpg');
	}
	fileToShare.write(img);
	//

	// share image
	var socialWidget=Alloy.createWidget('com.alcoapps.socialshare');
	socialWidget.share({
		status 					: 'This is the status to share',
		image 					: fileToShare.nativePath,
		androidDialogTitle 		: 'Sharing is caring!!!',
		view 					: $.label4
	})
}

function shareTextWidget(e){
	// share text status
	var socialWidget=Alloy.createWidget('com.alcoapps.socialshare');
	socialWidget.share({
		status 				: 'This is the status to share',
		androidDialogTitle 	: 'Caption!!!',
		view 					: $.label3
	})
}

$.index.open();
