# SocialShare


This library is part of the code included in the book

![](http://sht.tl/ya57YM)

[Get the book today!](http://bit.ly/alloybook)

SocialShare is a CommonJS Module for Titanium that implements cross-platform sharing of text and images over social networks.

## iOS
On iOS, the module uses the native sharing Action Sheet and offers options for sharing with Facebook and Twitter (if the native apps are installed),
plus AirDrop, Text Message, Email and other built-in iOS mechanisms.

## Android
On Android it uses the Native Sharing Intent, which brings up a list of installed apps to choose from.

![](http://drops.ricardoalcocer.com/drops/ios_android_sharing-y54AvtkxtS.png)

## Usage

If you want to send an image, set the image property to the Native Path to the image.  If you wish to only send text, simply don't send the image property.
```javascript
require('com.alcoapps.socialshare').share({
	status 					: 'This is the status to share',
	image 					: fileToShare.nativePath,
	androidDialogTitle 		: 'Sharing is caring!!!'
})
```

**BOOM!  That's it!  You're sharing!**

## The Alloy Widget

To use the Widget, copy it to your widgets folder and declare it as a dependecy in your ```config.json```.  Then to use it, use a similar syntax:

```javascript
function shareTextWidget(e){
	// share text status
	var socialWidget=Alloy.createWidget('com.alcoapps.socialshare');
	socialWidget.share({
		status 				: 'This is the status to sahre',
		androidDialogTitle 	: 'Caption!!!'
	})
}
```

## Dependencies
This module requires dk.napp.social for iOS which you can get from [https://github.com/viezel/TiSocial.Framework](https://github.com/viezel/TiSocial.Framework)


## Why more sharing options on Android

Because Android is awesome!

No, really.  The reason is because the "sharing intent" is a method "baked" into the Android SDK, so you simply call it with the data you want to share, and Android will return the installed apps that can handle that type of data.  iOS on the other hand offers some built-in methods, but others need to be added by native code.  The dk.napp.social module does just that, but only for Twitter, Facebook and Weibo (which is only relevant for China users).

## Facebook and Twitter not showing even when the apps are installed?

The TiSocial.Framework module gets its Twitter and Facebook credentials from iOS and not from the Facebook and Twitter apps.  If the Facebook and/or Twitter icons are not showing in, make sure accounts are added to the iOS social settings.

## Get it
You can get it from the [/app/lib](https://github.com/ricardoalcocer/socialshare/tree/master/app/lib) folder or the Widget from the [/app/widgets/com.alcoapps.socialshare](https://github.com/ricardoalcocer/socialshare/tree/master/app/widgets/com.alcoapps.socialshare) folder.

## NOTE
iOS Sharing **CAN** be achieved from the Titanium core SDK using the DocumentViewer object.

```javascript
docViewer = Ti.UI.iOS.createDocumentViewer({url:'appicon.png'});

navButton.addEventListener('click', function(){
    docViewer.show({view:navButton, animated: true});
});
```

The code above will effectively show the UIActivityViewController, but will only allow you to send files and not status updates, because it is designed to open documents.

## Credits
This module borrows from from code and ideas by:

* [Mads Møller](https://github.com/viezel/)
* [Adam Paxton](https://github.com/adampax/)
* [Dan Tamas](https://github.com/rborn)

## License
[MIT - http://alco.mit-license.org](http://alco.mit-license.org)