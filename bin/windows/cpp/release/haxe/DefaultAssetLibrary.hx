package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.net.HTTPRequest;
import lime.system.CFFI;
import lime.text.Font;
import lime.utils.Bytes;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import haxe.io.Path;
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	#if windows
	private var rootPath = FileSystem.absolutePath (Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
	#else
	private var rootPath = "";
	#end
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__data_fonts_opensans_opensans_ttf);
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__data_fonts_pixelfj8_pixelfj8_ttf);
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__data_fonts_seraphimb1_seraphimb1_ttf);
		
		
		
		
		
		
		
		#end
		
		#if flash
		
		path.set ("data/music/music.ogg", "data/music/music.ogg");
		type.set ("data/music/music.ogg", AssetType.SOUND);
		path.set ("data/text/hi.txt", "data/text/hi.txt");
		type.set ("data/text/hi.txt", AssetType.TEXT);
		path.set ("data/fonts/opensans/opensans.eot", "data/fonts/opensans/opensans.eot");
		type.set ("data/fonts/opensans/opensans.eot", AssetType.BINARY);
		path.set ("data/fonts/opensans/opensans.ttf", "data/fonts/opensans/opensans.ttf");
		type.set ("data/fonts/opensans/opensans.ttf", AssetType.FONT);
		path.set ("data/fonts/opensans/opensans.woff", "data/fonts/opensans/opensans.woff");
		type.set ("data/fonts/opensans/opensans.woff", AssetType.BINARY);
		path.set ("data/fonts/opensans/opensans.woff2", "data/fonts/opensans/opensans.woff2");
		type.set ("data/fonts/opensans/opensans.woff2", AssetType.BINARY);
		path.set ("data/fonts/pixelFJ8/pixelFJ8.eot", "data/fonts/pixelFJ8/pixelFJ8.eot");
		type.set ("data/fonts/pixelFJ8/pixelFJ8.eot", AssetType.BINARY);
		path.set ("data/fonts/pixelFJ8/pixelFJ8.ttf", "data/fonts/pixelFJ8/pixelFJ8.ttf");
		type.set ("data/fonts/pixelFJ8/pixelFJ8.ttf", AssetType.FONT);
		path.set ("data/fonts/pixelFJ8/pixelFJ8.woff", "data/fonts/pixelFJ8/pixelFJ8.woff");
		type.set ("data/fonts/pixelFJ8/pixelFJ8.woff", AssetType.BINARY);
		path.set ("data/fonts/Seraphimb1/Seraphimb1.eot", "data/fonts/Seraphimb1/Seraphimb1.eot");
		type.set ("data/fonts/Seraphimb1/Seraphimb1.eot", AssetType.BINARY);
		path.set ("data/fonts/Seraphimb1/Seraphimb1.ttf", "data/fonts/Seraphimb1/Seraphimb1.ttf");
		type.set ("data/fonts/Seraphimb1/Seraphimb1.ttf", AssetType.FONT);
		path.set ("data/fonts/Seraphimb1/Seraphimb1.woff", "data/fonts/Seraphimb1/Seraphimb1.woff");
		type.set ("data/fonts/Seraphimb1/Seraphimb1.woff", AssetType.BINARY);
		path.set ("data/graphics/16pal_v20.png", "data/graphics/16pal_v20.png");
		type.set ("data/graphics/16pal_v20.png", AssetType.IMAGE);
		path.set ("data/graphics/card.png", "data/graphics/card.png");
		type.set ("data/graphics/card.png", AssetType.IMAGE);
		path.set ("data/graphics/dog.png", "data/graphics/dog.png");
		type.set ("data/graphics/dog.png", AssetType.IMAGE);
		path.set ("data/graphics/persona_tarot_card_hd___back_by_ipswich67-d4on9zw.png", "data/graphics/persona_tarot_card_hd___back_by_ipswich67-d4on9zw.png");
		type.set ("data/graphics/persona_tarot_card_hd___back_by_ipswich67-d4on9zw.png", AssetType.IMAGE);
		path.set ("data/graphics/tiles.png", "data/graphics/tiles.png");
		type.set ("data/graphics/tiles.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "data/music/music.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "data/text/hi.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/fonts/opensans/opensans.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "data/fonts/opensans/opensans.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "data/fonts/opensans/opensans.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "data/fonts/opensans/opensans.woff2";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "data/fonts/pixelFJ8/pixelFJ8.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "data/fonts/pixelFJ8/pixelFJ8.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "data/fonts/pixelFJ8/pixelFJ8.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "data/fonts/Seraphimb1/Seraphimb1.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "data/fonts/Seraphimb1/Seraphimb1.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "data/fonts/Seraphimb1/Seraphimb1.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "data/graphics/16pal_v20.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "data/graphics/card.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "data/graphics/dog.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "data/graphics/persona_tarot_card_hd___back_by_ipswich67-d4on9zw.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "data/graphics/tiles.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		className.set ("data/fonts/opensans/opensans.ttf", __ASSET__data_fonts_opensans_opensans_ttf);
		type.set ("data/fonts/opensans/opensans.ttf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		className.set ("data/fonts/pixelFJ8/pixelFJ8.ttf", __ASSET__data_fonts_pixelfj8_pixelfj8_ttf);
		type.set ("data/fonts/pixelFJ8/pixelFJ8.ttf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		
		className.set ("data/fonts/Seraphimb1/Seraphimb1.ttf", __ASSET__data_fonts_seraphimb1_seraphimb1_ttf);
		type.set ("data/fonts/Seraphimb1/Seraphimb1.ttf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == TEXT && assetType == BINARY) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), Bytes));
		else return AudioBuffer.fromFile (rootPath + path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):Bytes {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return Bytes.ofData (cast (Type.createInstance (className.get (id), []), flash.utils.ByteArray));
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return Bytes.ofData (bitmapData.getPixels (bitmapData.rect));
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), Bytes);
		
		#elseif html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Bytes);
		else return Bytes.readFile (rootPath + path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (rootPath + path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (rootPath + path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes.getString (0, bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.getString (0, bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<Bytes> {
		
		var promise = new Promise<Bytes> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = flash.net.URLLoaderDataFormat.BINARY;
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = Bytes.ofData (event.currentTarget.data);
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			promise.completeWith (request.load (path.get (id) + "?" + Assets.cache.version));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Bytes> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id) + "?" + Assets.cache.version;
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = Bytes.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = Bytes.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = Bytes.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = Bytes.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = Bytes.readFile ("assets/manifest");
			#else
			var bytes = Bytes.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				if (bytes.length > 0) {
					
					var data = bytes.getString (0, bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			var future = request.load (path.get (id) + "?" + Assets.cache.version);
			future.onProgress (function (progress) promise.progress (progress));
			future.onError (function (msg) promise.error (msg));
			future.onComplete (function (bytes) promise.complete (bytes.getString (0, bytes.length)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.getString (0, bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash




















#elseif html5




@:keep #if display private #end class __ASSET__data_fonts_opensans_opensans_ttf extends lime.text.Font { public function new () { super (); name = "Open Sans"; } } 



@:keep #if display private #end class __ASSET__data_fonts_pixelfj8_pixelfj8_ttf extends lime.text.Font { public function new () { super (); name = "pixelFJ8pt1 Normal"; } } 


@:keep #if display private #end class __ASSET__data_fonts_seraphimb1_seraphimb1_ttf extends lime.text.Font { public function new () { super (); name = "Seraphimb1"; } } 








#else

@:keep #if display private #end class __ASSET__data_fonts_opensans_opensans_ttf extends lime.text.Font { public function new () { __fontPath = #if (ios || tvos) "assets/" + #end "data/fonts/opensans/opensans.ttf"; name = "Open Sans"; super (); }}
@:keep #if display private #end class __ASSET__data_fonts_pixelfj8_pixelfj8_ttf extends lime.text.Font { public function new () { __fontPath = #if (ios || tvos) "assets/" + #end "data/fonts/pixelFJ8/pixelFJ8.ttf"; name = "pixelFJ8pt1 Normal"; super (); }}
@:keep #if display private #end class __ASSET__data_fonts_seraphimb1_seraphimb1_ttf extends lime.text.Font { public function new () { __fontPath = #if (ios || tvos) "assets/" + #end "data/fonts/Seraphimb1/Seraphimb1.ttf"; name = "Seraphimb1"; super (); }}


#if (windows || mac || linux || cpp)





#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__data_fonts_opensans_opensans_ttf extends openfl.text.Font { public function new () { __fontPath = #if (ios || tvos) "assets/" + #end "data/fonts/opensans/opensans.ttf"; name = "Open Sans"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__data_fonts_pixelfj8_pixelfj8_ttf extends openfl.text.Font { public function new () { __fontPath = #if (ios || tvos) "assets/" + #end "data/fonts/pixelFJ8/pixelFJ8.ttf"; name = "pixelFJ8pt1 Normal"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__data_fonts_seraphimb1_seraphimb1_ttf extends openfl.text.Font { public function new () { __fontPath = #if (ios || tvos) "assets/" + #end "data/fonts/Seraphimb1/Seraphimb1.ttf"; name = "Seraphimb1"; super (); }}

#end

#end
