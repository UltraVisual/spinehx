package nme;


import openfl.Assets;


class AssetData {

	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();
	
	private static var initialized:Bool = false;
	
	
	public static function initialize ():Void {
		
		if (!initialized) {
			
			path.set ("assets/goblins.atlas", "assets/goblins.atlas");
			type.set ("assets/goblins.atlas", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/goblins.json", "assets/goblins.json");
			type.set ("assets/goblins.json", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/goblins.png", "assets/goblins.png");
			type.set ("assets/goblins.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/goblins.skel", "assets/goblins.skel");
			type.set ("assets/goblins.skel", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/spineboy.atlas", "assets/spineboy.atlas");
			type.set ("assets/spineboy.atlas", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/spineboy.json", "assets/spineboy.json");
			type.set ("assets/spineboy.json", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/spineboy.png", "assets/spineboy.png");
			type.set ("assets/spineboy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/spineboy.skel", "assets/spineboy.skel");
			type.set ("assets/spineboy.skel", Reflect.field (AssetType, "binary".toUpperCase ()));
			
			
			initialized = true;
			
		}
		
	}
	
	
}
