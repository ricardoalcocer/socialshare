function share(args) {
    var intent = null;
    intent = Ti.Android.createIntent({
        action: Ti.Android.ACTION_SEND
    });
    args.status && intent.putExtra(Ti.Android.EXTRA_TEXT, args.status);
    if (args.image) {
        intent.type = "image/*";
        intent.putExtraUri(Ti.Android.EXTRA_STREAM, args.image);
    } else {
        intent.type = "text/plain";
        intent.addCategory(Ti.Android.CATEGORY_DEFAULT);
    }
    Ti.Android.currentActivity.startActivity(Ti.Android.createIntentChooser(intent, args.androidDialogTitle));
}

exports.share = share;