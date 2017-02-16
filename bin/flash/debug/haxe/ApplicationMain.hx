#if !macro


@:access(lime.app.Application)
@:access(lime.Assets)
@:access(openfl.display.Stage)


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	
	public static function create ():Void {
		
		var app = new openfl.display.Application ();
		app.create (config);
		
		var display = new NMEPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		app.setPreloader (preloader);
		preloader.onComplete.add (init);
		preloader.create (config);
		
		#if (js && html5)
		var urls = [];
		var types = [];
		
		
		urls.push ("data/music/music.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("data/text/hi.txt");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("data/fonts/opensans/opensans.eot");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("Open Sans");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("data/fonts/opensans/opensans.woff");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("data/fonts/opensans/opensans.woff2");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("data/fonts/pixelFJ8/pixelFJ8.eot");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("pixelFJ8pt1 Normal");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("data/fonts/pixelFJ8/pixelFJ8.woff");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("data/fonts/Seraphimb1/Seraphimb1.eot");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("Seraphimb1");
		types.push (lime.Assets.AssetType.FONT);
		
		
		urls.push ("data/fonts/Seraphimb1/Seraphimb1.woff");
		types.push (lime.Assets.AssetType.BINARY);
		
		
		urls.push ("data/graphics/16pal_v20.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("data/graphics/card.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("data/graphics/dog.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("data/graphics/persona_tarot_card_hd___back_by_ipswich67-d4on9zw.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("data/graphics/tiles.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		
		if (config.assetsPrefix != null) {
			
			for (i in 0...urls.length) {
				
				if (types[i] != lime.Assets.AssetType.FONT) {
					
					urls[i] = config.assetsPrefix + urls[i];
					
				}
				
			}
			
		}
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if (sys && !nodejs && !emscripten)
		lime.system.System.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		
		if (total == 0) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			build: "733",
			company: "",
			file: "game",
			fps: 60,
			name: "Tarotus",
			orientation: "landscape",
			packageName: "com.kvel2d",
			version: "1.0.0",
			windows: [
				
				{
					antialiasing: 0,
					background: 0,
					borderless: false,
					depthBuffer: false,
					display: 0,
					fullscreen: false,
					hardware: true,
					height: 1000,
					hidden: #if munit true #else null #end,
					maximized: null,
					minimized: null,
					parameters: "{}",
					resizable: true,
					stencilBuffer: true,
					title: "Tarotus",
					vsync: true,
					width: 1500,
					x: null,
					y: null
				},
			]
			
		};
		
		#if hxtelemetry
		var telemetry = new hxtelemetry.HxTelemetry.Config ();
		telemetry.allocations = true;
		telemetry.host = "localhost";
		telemetry.app_name = config.name;
		Reflect.setField (config, "telemetry", telemetry);
		#end
		
		#if (js && html5)
		#if (munit || utest)
		lime.system.System.embed (null, 1500, 1000, "000000");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		var hasMain = false;
		var entryPoint = Type.resolveClass ("haxegon.Load");
		
		for (methodName in Type.getClassFields (entryPoint)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		lime.Assets.initialize ();
		
		if (hasMain) {
			
			Reflect.callMethod (entryPoint, Reflect.field (entryPoint, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			/*if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}*/
			
		}
		
		#if !flash
		if (openfl.Lib.current.stage.window.fullscreen) {
			
			openfl.Lib.current.stage.dispatchEvent (new openfl.events.FullScreenEvent (openfl.events.FullScreenEvent.FULL_SCREEN, false, false, true, true));
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		#end
		
	}
	
	
	#if neko
	@:noCompletion @:dox(hide) public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) new String (@:privateAccess Sys.sys_exe_path ()) #else Sys.executablePath () #end));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends haxegon.Load {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					openfl.Lib.current.addChild (this);
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end
