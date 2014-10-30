function __processArg(obj, key) {
    var arg = null;
    if (obj) {
        arg = obj[key] || null;
        delete obj[key];
    }
    return arg;
}

function Controller() {
    function shareImage() {
        var fileToShare = null;
        var img;
        var img = $.newimage.toImage().media;
        fileToShare = Titanium.Filesystem.getFile(Titanium.Filesystem.externalStorageDirectory, "tempimage.jpg");
        fileToShare.write(img);
        require("socialshare").share({
            status: "This is the status to share",
            image: fileToShare.nativePath,
            androidDialogTitle: "Sharing is caring!!!"
        });
    }
    function shareText() {
        require("socialshare").share({
            status: "This is the status to sahre",
            androidDialogTitle: "Caption!!!"
        });
    }
    require("alloy/controllers/BaseController").apply(this, Array.prototype.slice.call(arguments));
    this.__controllerPath = "index";
    if (arguments[0]) {
        {
            __processArg(arguments[0], "__parentSymbol");
        }
        {
            __processArg(arguments[0], "$model");
        }
        {
            __processArg(arguments[0], "__itemTemplate");
        }
    }
    var $ = this;
    var exports = {};
    var __defers = {};
    $.__views.index = Ti.UI.createWindow({
        backgroundColor: "white",
        id: "index"
    });
    $.__views.index && $.addTopLevelView($.__views.index);
    $.__views.newimage = Ti.UI.createView({
        id: "newimage",
        height: Ti.UI.FILL,
        width: Ti.UI.FILL,
        backgroundColor: "red",
        top: "20",
        layout: "vertical"
    });
    $.__views.index.add($.__views.newimage);
    $.__views.label = Ti.UI.createButton({
        font: {
            fontSize: 12
        },
        title: "Share Text",
        id: "label",
        color: "#fff",
        height: "100"
    });
    $.__views.newimage.add($.__views.label);
    shareText ? $.__views.label.addEventListener("click", shareText) : __defers["$.__views.label!click!shareText"] = true;
    $.__views.label = Ti.UI.createButton({
        font: {
            fontSize: 12
        },
        title: "Share Image",
        id: "label",
        color: "#fff",
        height: "100"
    });
    $.__views.newimage.add($.__views.label);
    shareImage ? $.__views.label.addEventListener("click", shareImage) : __defers["$.__views.label!click!shareImage"] = true;
    exports.destroy = function() {};
    _.extend($, $.__views);
    $.index.open();
    __defers["$.__views.label!click!shareText"] && $.__views.label.addEventListener("click", shareText);
    __defers["$.__views.label!click!shareImage"] && $.__views.label.addEventListener("click", shareImage);
    _.extend($, exports);
}

var Alloy = require("alloy"), Backbone = Alloy.Backbone, _ = Alloy._;

module.exports = Controller;