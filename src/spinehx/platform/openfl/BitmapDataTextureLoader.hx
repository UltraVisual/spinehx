package spinehx.platform.openfl;
import spinehx.atlas.Texture;
import spinehx.atlas.TextureLoader;
class BitmapDataTextureLoader implements TextureLoader{
    public function new() {
    }

    public function loadTexture(textureFile:String, format, useMipMaps):Texture {
         return new BitmapDataTexture(textureFile);
    }
}
