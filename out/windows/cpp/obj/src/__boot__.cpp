#include <hxcpp.h>

#include <spinehx/platform/openfl/renderers/SkeletonRendererDebug.h>
#include <spinehx/platform/openfl/renderers/SkeletonRenderer.h>
#include <spinehx/platform/openfl/BitmapDataTextureLoader.h>
#include <spinehx/platform/openfl/BitmapDataTexture.h>
#include <spinehx/attachments/RegionSequenceAttachment.h>
#include <spinehx/attachments/NumberUtils.h>
#include <spinehx/attachments/RegionAttachment.h>
#include <spinehx/attachments/Modes.h>
#include <spinehx/attachments/Mode.h>
#include <spinehx/attachments/AttachmentTypes.h>
#include <spinehx/attachments/AttachmentType.h>
#include <spinehx/attachments/Attachment.h>
#include <spinehx/attachments/AtlasAttachmentLoader.h>
#include <spinehx/attachments/AttachmentLoader.h>
#include <spinehx/atlas/TextureLoader.h>
#include <spinehx/atlas/AtlasRegion.h>
#include <spinehx/atlas/TextureRegion.h>
#include <spinehx/atlas/TextureAtlas.h>
#include <spinehx/atlas/TextureAtlasData.h>
#include <spinehx/atlas/Region.h>
#include <spinehx/atlas/Page.h>
#include <spinehx/atlas/Texture.h>
#include <spinehx/SlotData.h>
#include <spinehx/Slot.h>
#include <spinehx/AttachmentEntry.h>
#include <spinehx/Skin.h>
#include <spinehx/SkeletonJson.h>
#include <spinehx/SkeletonData.h>
#include <spinehx/Skeleton.h>
#include <spinehx/MathUtils.h>
#include <spinehx/JsonUtils.h>
#include <spinehx/Exception.h>
#include <spinehx/Color.h>
#include <spinehx/BoneData.h>
#include <spinehx/Bone.h>
#include <spinehx/ArrayUtils.h>
#include <spinehx/AnimationStateData.h>
#include <spinehx/QueueEntry.h>
#include <spinehx/AnimationState.h>
#include <spinehx/AttachmentTimeline.h>
#include <spinehx/ColorTimeline.h>
#include <spinehx/ScaleTimeline.h>
#include <spinehx/TranslateTimeline.h>
#include <spinehx/RotateTimeline.h>
#include <spinehx/CurveTimeline.h>
#include <spinehx/Timeline.h>
#include <spinehx/Animation.h>
#include <openfl/utils/WeakRef.h>
#include <openfl/events/SystemEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/display/Tilesheet.h>
#include <openfl/display/ManagedStage.h>
#include <openfl/display/FPS.h>
#include <openfl/LibraryType.h>
#include <openfl/AssetType.h>
#include <openfl/Assets.h>
#include <nme/AssetData.h>
#include <haxe/io/StringInput.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesInput.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Timer.h>
#include <haxe/Resource.h>
#include <haxe/Log.h>
#include <haxe/Json.h>
#include <flash/utils/Endian.h>
#include <flash/utils/CompressionAlgorithm.h>
#include <flash/utils/ByteArray.h>
#include <flash/utils/IDataInput.h>
#include <openfl/utils/IMemoryRange.h>
#include <flash/ui/Keyboard.h>
#include <flash/text/TextLineMetrics.h>
#include <flash/text/TextFormat.h>
#include <flash/text/TextFieldType.h>
#include <flash/text/TextFieldAutoSize.h>
#include <flash/text/TextField.h>
#include <flash/text/GridFitType.h>
#include <flash/text/FontType.h>
#include <flash/text/FontStyle.h>
#include <flash/text/Font.h>
#include <flash/text/AntiAliasType.h>
#include <flash/system/SecurityDomain.h>
#include <flash/system/LoaderContext.h>
#include <flash/system/ApplicationDomain.h>
#include <flash/net/URLVariables.h>
#include <flash/net/URLRequestMethod.h>
#include <flash/net/URLRequestHeader.h>
#include <flash/net/URLRequest.h>
#include <flash/net/URLLoaderDataFormat.h>
#include <flash/media/SoundTransform.h>
#include <flash/media/SoundLoaderContext.h>
#include <flash/media/SoundChannel.h>
#include <flash/media/Sound.h>
#include <flash/media/ID3Info.h>
#include <flash/geom/Transform.h>
#include <flash/geom/Rectangle.h>
#include <flash/geom/Point.h>
#include <flash/geom/Matrix.h>
#include <flash/geom/ColorTransform.h>
#include <flash/filters/BitmapFilter.h>
#include <flash/events/SampleDataEvent.h>
#include <flash/events/ProgressEvent.h>
#include <flash/events/KeyboardEvent.h>
#include <flash/events/IOErrorEvent.h>
#include <flash/events/HTTPStatusEvent.h>
#include <flash/events/FocusEvent.h>
#include <flash/events/EventPhase.h>
#include <flash/events/Listener.h>
#include <flash/events/ErrorEvent.h>
#include <flash/events/TextEvent.h>
#include <flash/errors/RangeError.h>
#include <flash/errors/EOFError.h>
#include <flash/errors/ArgumentError.h>
#include <flash/errors/Error.h>
#include <flash/display/TriangleCulling.h>
#include <flash/display/StageScaleMode.h>
#include <flash/display/StageQuality.h>
#include <flash/display/StageDisplayState.h>
#include <flash/display/StageAlign.h>
#include <flash/display/TouchInfo.h>
#include <flash/display/Stage.h>
#include <flash/events/TouchEvent.h>
#include <flash/events/MouseEvent.h>
#include <flash/events/Event.h>
#include <flash/display/SpreadMethod.h>
#include <flash/display/Shape.h>
#include <flash/display/PixelSnapping.h>
#include <flash/display/MovieClip.h>
#include <flash/display/LoaderInfo.h>
#include <flash/net/URLLoader.h>
#include <flash/display/Loader.h>
#include <flash/display/LineScaleMode.h>
#include <flash/display/JointStyle.h>
#include <flash/display/InterpolationMethod.h>
#include <flash/display/IGraphicsData.h>
#include <flash/display/GraphicsPathWinding.h>
#include <flash/display/Graphics.h>
#include <flash/display/GradientType.h>
#include <flash/display/CapsStyle.h>
#include <flash/display/BlendMode.h>
#include <flash/display/OptimizedPerlin.h>
#include <flash/display/BitmapData.h>
#include <flash/display/Bitmap.h>
#include <flash/_Vector/Vector_Impl_.h>
#include <flash/Memory.h>
#include <cpp/zip/Uncompress.h>
#include <cpp/zip/Flush.h>
#include <cpp/zip/Compress.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <Type.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Reflect.h>
#include <IMap.h>
#include <List.h>
#include <Lambda.h>
#include <DocumentClass.h>
#include <spinehx/AnimationStateTest.h>
#include <flash/display/Sprite.h>
#include <flash/display/DisplayObjectContainer.h>
#include <flash/display/InteractiveObject.h>
#include <flash/display/DisplayObject.h>
#include <flash/Lib.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <flash/display/IBitmapDrawable.h>
#include <flash/events/EventDispatcher.h>
#include <flash/events/IEventDispatcher.h>
#include <ApplicationMain.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::spinehx::platform::openfl::renderers::SkeletonRendererDebug_obj::__register();
::spinehx::platform::openfl::renderers::SkeletonRenderer_obj::__register();
::spinehx::platform::openfl::BitmapDataTextureLoader_obj::__register();
::spinehx::platform::openfl::BitmapDataTexture_obj::__register();
::spinehx::attachments::RegionSequenceAttachment_obj::__register();
::spinehx::attachments::NumberUtils_obj::__register();
::spinehx::attachments::RegionAttachment_obj::__register();
::spinehx::attachments::Modes_obj::__register();
::spinehx::attachments::Mode_obj::__register();
::spinehx::attachments::AttachmentTypes_obj::__register();
::spinehx::attachments::AttachmentType_obj::__register();
::spinehx::attachments::Attachment_obj::__register();
::spinehx::attachments::AtlasAttachmentLoader_obj::__register();
::spinehx::attachments::AttachmentLoader_obj::__register();
::spinehx::atlas::TextureLoader_obj::__register();
::spinehx::atlas::AtlasRegion_obj::__register();
::spinehx::atlas::TextureRegion_obj::__register();
::spinehx::atlas::TextureAtlas_obj::__register();
::spinehx::atlas::TextureAtlasData_obj::__register();
::spinehx::atlas::Region_obj::__register();
::spinehx::atlas::Page_obj::__register();
::spinehx::atlas::Texture_obj::__register();
::spinehx::SlotData_obj::__register();
::spinehx::Slot_obj::__register();
::spinehx::AttachmentEntry_obj::__register();
::spinehx::Skin_obj::__register();
::spinehx::SkeletonJson_obj::__register();
::spinehx::SkeletonData_obj::__register();
::spinehx::Skeleton_obj::__register();
::spinehx::MathUtils_obj::__register();
::spinehx::JsonUtils_obj::__register();
::spinehx::Exception_obj::__register();
::spinehx::Color_obj::__register();
::spinehx::BoneData_obj::__register();
::spinehx::Bone_obj::__register();
::spinehx::ArrayUtils_obj::__register();
::spinehx::AnimationStateData_obj::__register();
::spinehx::QueueEntry_obj::__register();
::spinehx::AnimationState_obj::__register();
::spinehx::AttachmentTimeline_obj::__register();
::spinehx::ColorTimeline_obj::__register();
::spinehx::ScaleTimeline_obj::__register();
::spinehx::TranslateTimeline_obj::__register();
::spinehx::RotateTimeline_obj::__register();
::spinehx::CurveTimeline_obj::__register();
::spinehx::Timeline_obj::__register();
::spinehx::Animation_obj::__register();
::openfl::utils::WeakRef_obj::__register();
::openfl::events::SystemEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::display::Tilesheet_obj::__register();
::openfl::display::ManagedStage_obj::__register();
::openfl::display::FPS_obj::__register();
::openfl::LibraryType_obj::__register();
::openfl::AssetType_obj::__register();
::openfl::Assets_obj::__register();
::nme::AssetData_obj::__register();
::haxe::io::StringInput_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesInput_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::Log_obj::__register();
::haxe::Json_obj::__register();
::flash::utils::Endian_obj::__register();
::flash::utils::CompressionAlgorithm_obj::__register();
::flash::utils::ByteArray_obj::__register();
::flash::utils::IDataInput_obj::__register();
::openfl::utils::IMemoryRange_obj::__register();
::flash::ui::Keyboard_obj::__register();
::flash::text::TextLineMetrics_obj::__register();
::flash::text::TextFormat_obj::__register();
::flash::text::TextFieldType_obj::__register();
::flash::text::TextFieldAutoSize_obj::__register();
::flash::text::TextField_obj::__register();
::flash::text::GridFitType_obj::__register();
::flash::text::FontType_obj::__register();
::flash::text::FontStyle_obj::__register();
::flash::text::Font_obj::__register();
::flash::text::AntiAliasType_obj::__register();
::flash::system::SecurityDomain_obj::__register();
::flash::system::LoaderContext_obj::__register();
::flash::system::ApplicationDomain_obj::__register();
::flash::net::URLVariables_obj::__register();
::flash::net::URLRequestMethod_obj::__register();
::flash::net::URLRequestHeader_obj::__register();
::flash::net::URLRequest_obj::__register();
::flash::net::URLLoaderDataFormat_obj::__register();
::flash::media::SoundTransform_obj::__register();
::flash::media::SoundLoaderContext_obj::__register();
::flash::media::SoundChannel_obj::__register();
::flash::media::Sound_obj::__register();
::flash::media::ID3Info_obj::__register();
::flash::geom::Transform_obj::__register();
::flash::geom::Rectangle_obj::__register();
::flash::geom::Point_obj::__register();
::flash::geom::Matrix_obj::__register();
::flash::geom::ColorTransform_obj::__register();
::flash::filters::BitmapFilter_obj::__register();
::flash::events::SampleDataEvent_obj::__register();
::flash::events::ProgressEvent_obj::__register();
::flash::events::KeyboardEvent_obj::__register();
::flash::events::IOErrorEvent_obj::__register();
::flash::events::HTTPStatusEvent_obj::__register();
::flash::events::FocusEvent_obj::__register();
::flash::events::EventPhase_obj::__register();
::flash::events::Listener_obj::__register();
::flash::events::ErrorEvent_obj::__register();
::flash::events::TextEvent_obj::__register();
::flash::errors::RangeError_obj::__register();
::flash::errors::EOFError_obj::__register();
::flash::errors::ArgumentError_obj::__register();
::flash::errors::Error_obj::__register();
::flash::display::TriangleCulling_obj::__register();
::flash::display::StageScaleMode_obj::__register();
::flash::display::StageQuality_obj::__register();
::flash::display::StageDisplayState_obj::__register();
::flash::display::StageAlign_obj::__register();
::flash::display::TouchInfo_obj::__register();
::flash::display::Stage_obj::__register();
::flash::events::TouchEvent_obj::__register();
::flash::events::MouseEvent_obj::__register();
::flash::events::Event_obj::__register();
::flash::display::SpreadMethod_obj::__register();
::flash::display::Shape_obj::__register();
::flash::display::PixelSnapping_obj::__register();
::flash::display::MovieClip_obj::__register();
::flash::display::LoaderInfo_obj::__register();
::flash::net::URLLoader_obj::__register();
::flash::display::Loader_obj::__register();
::flash::display::LineScaleMode_obj::__register();
::flash::display::JointStyle_obj::__register();
::flash::display::InterpolationMethod_obj::__register();
::flash::display::IGraphicsData_obj::__register();
::flash::display::GraphicsPathWinding_obj::__register();
::flash::display::Graphics_obj::__register();
::flash::display::GradientType_obj::__register();
::flash::display::CapsStyle_obj::__register();
::flash::display::BlendMode_obj::__register();
::flash::display::OptimizedPerlin_obj::__register();
::flash::display::BitmapData_obj::__register();
::flash::display::Bitmap_obj::__register();
::flash::_Vector::Vector_Impl__obj::__register();
::flash::Memory_obj::__register();
::cpp::zip::Uncompress_obj::__register();
::cpp::zip::Flush_obj::__register();
::cpp::zip::Compress_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::Type_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Reflect_obj::__register();
::IMap_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::DocumentClass_obj::__register();
::spinehx::AnimationStateTest_obj::__register();
::flash::display::Sprite_obj::__register();
::flash::display::DisplayObjectContainer_obj::__register();
::flash::display::InteractiveObject_obj::__register();
::flash::display::DisplayObject_obj::__register();
::flash::Lib_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::flash::display::IBitmapDrawable_obj::__register();
::flash::events::EventDispatcher_obj::__register();
::flash::events::IEventDispatcher_obj::__register();
::ApplicationMain_obj::__register();
::flash::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::zip::Compress_obj::__boot();
::cpp::zip::Flush_obj::__boot();
::cpp::zip::Uncompress_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::flash::events::IEventDispatcher_obj::__boot();
::flash::events::EventDispatcher_obj::__boot();
::flash::display::IBitmapDrawable_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::flash::Lib_obj::__boot();
::flash::display::DisplayObject_obj::__boot();
::flash::display::InteractiveObject_obj::__boot();
::flash::display::DisplayObjectContainer_obj::__boot();
::flash::display::Sprite_obj::__boot();
::spinehx::AnimationStateTest_obj::__boot();
::DocumentClass_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::IMap_obj::__boot();
::Reflect_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Type_obj::__boot();
::flash::Memory_obj::__boot();
::flash::_Vector::Vector_Impl__obj::__boot();
::flash::display::Bitmap_obj::__boot();
::flash::display::BitmapData_obj::__boot();
::flash::display::OptimizedPerlin_obj::__boot();
::flash::display::BlendMode_obj::__boot();
::flash::display::CapsStyle_obj::__boot();
::flash::display::GradientType_obj::__boot();
::flash::display::Graphics_obj::__boot();
::flash::display::GraphicsPathWinding_obj::__boot();
::flash::display::IGraphicsData_obj::__boot();
::flash::display::InterpolationMethod_obj::__boot();
::flash::display::JointStyle_obj::__boot();
::flash::display::LineScaleMode_obj::__boot();
::flash::display::Loader_obj::__boot();
::flash::net::URLLoader_obj::__boot();
::flash::display::LoaderInfo_obj::__boot();
::flash::display::MovieClip_obj::__boot();
::flash::display::PixelSnapping_obj::__boot();
::flash::display::Shape_obj::__boot();
::flash::display::SpreadMethod_obj::__boot();
::flash::events::Event_obj::__boot();
::flash::events::MouseEvent_obj::__boot();
::flash::events::TouchEvent_obj::__boot();
::flash::display::Stage_obj::__boot();
::flash::display::TouchInfo_obj::__boot();
::flash::display::StageAlign_obj::__boot();
::flash::display::StageDisplayState_obj::__boot();
::flash::display::StageQuality_obj::__boot();
::flash::display::StageScaleMode_obj::__boot();
::flash::display::TriangleCulling_obj::__boot();
::flash::errors::Error_obj::__boot();
::flash::errors::ArgumentError_obj::__boot();
::flash::errors::EOFError_obj::__boot();
::flash::errors::RangeError_obj::__boot();
::flash::events::TextEvent_obj::__boot();
::flash::events::ErrorEvent_obj::__boot();
::flash::events::Listener_obj::__boot();
::flash::events::EventPhase_obj::__boot();
::flash::events::FocusEvent_obj::__boot();
::flash::events::HTTPStatusEvent_obj::__boot();
::flash::events::IOErrorEvent_obj::__boot();
::flash::events::KeyboardEvent_obj::__boot();
::flash::events::ProgressEvent_obj::__boot();
::flash::events::SampleDataEvent_obj::__boot();
::flash::filters::BitmapFilter_obj::__boot();
::flash::geom::ColorTransform_obj::__boot();
::flash::geom::Matrix_obj::__boot();
::flash::geom::Point_obj::__boot();
::flash::geom::Rectangle_obj::__boot();
::flash::geom::Transform_obj::__boot();
::flash::media::ID3Info_obj::__boot();
::flash::media::Sound_obj::__boot();
::flash::media::SoundChannel_obj::__boot();
::flash::media::SoundLoaderContext_obj::__boot();
::flash::media::SoundTransform_obj::__boot();
::flash::net::URLLoaderDataFormat_obj::__boot();
::flash::net::URLRequest_obj::__boot();
::flash::net::URLRequestHeader_obj::__boot();
::flash::net::URLRequestMethod_obj::__boot();
::flash::net::URLVariables_obj::__boot();
::flash::system::ApplicationDomain_obj::__boot();
::flash::system::LoaderContext_obj::__boot();
::flash::system::SecurityDomain_obj::__boot();
::flash::text::AntiAliasType_obj::__boot();
::flash::text::Font_obj::__boot();
::flash::text::FontStyle_obj::__boot();
::flash::text::FontType_obj::__boot();
::flash::text::GridFitType_obj::__boot();
::flash::text::TextField_obj::__boot();
::flash::text::TextFieldAutoSize_obj::__boot();
::flash::text::TextFieldType_obj::__boot();
::flash::text::TextFormat_obj::__boot();
::flash::text::TextLineMetrics_obj::__boot();
::flash::ui::Keyboard_obj::__boot();
::openfl::utils::IMemoryRange_obj::__boot();
::flash::utils::IDataInput_obj::__boot();
::flash::utils::ByteArray_obj::__boot();
::flash::utils::CompressionAlgorithm_obj::__boot();
::flash::utils::Endian_obj::__boot();
::haxe::Json_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::BytesInput_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::StringInput_obj::__boot();
::nme::AssetData_obj::__boot();
::openfl::Assets_obj::__boot();
::openfl::AssetType_obj::__boot();
::openfl::LibraryType_obj::__boot();
::openfl::display::FPS_obj::__boot();
::openfl::display::ManagedStage_obj::__boot();
::openfl::display::Tilesheet_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::SystemEvent_obj::__boot();
::openfl::utils::WeakRef_obj::__boot();
::spinehx::Animation_obj::__boot();
::spinehx::Timeline_obj::__boot();
::spinehx::CurveTimeline_obj::__boot();
::spinehx::RotateTimeline_obj::__boot();
::spinehx::TranslateTimeline_obj::__boot();
::spinehx::ScaleTimeline_obj::__boot();
::spinehx::ColorTimeline_obj::__boot();
::spinehx::AttachmentTimeline_obj::__boot();
::spinehx::AnimationState_obj::__boot();
::spinehx::QueueEntry_obj::__boot();
::spinehx::AnimationStateData_obj::__boot();
::spinehx::ArrayUtils_obj::__boot();
::spinehx::Bone_obj::__boot();
::spinehx::BoneData_obj::__boot();
::spinehx::Color_obj::__boot();
::spinehx::Exception_obj::__boot();
::spinehx::JsonUtils_obj::__boot();
::spinehx::MathUtils_obj::__boot();
::spinehx::Skeleton_obj::__boot();
::spinehx::SkeletonData_obj::__boot();
::spinehx::SkeletonJson_obj::__boot();
::spinehx::Skin_obj::__boot();
::spinehx::AttachmentEntry_obj::__boot();
::spinehx::Slot_obj::__boot();
::spinehx::SlotData_obj::__boot();
::spinehx::atlas::Texture_obj::__boot();
::spinehx::atlas::Page_obj::__boot();
::spinehx::atlas::Region_obj::__boot();
::spinehx::atlas::TextureAtlasData_obj::__boot();
::spinehx::atlas::TextureAtlas_obj::__boot();
::spinehx::atlas::TextureRegion_obj::__boot();
::spinehx::atlas::AtlasRegion_obj::__boot();
::spinehx::atlas::TextureLoader_obj::__boot();
::spinehx::attachments::AttachmentLoader_obj::__boot();
::spinehx::attachments::AtlasAttachmentLoader_obj::__boot();
::spinehx::attachments::Attachment_obj::__boot();
::spinehx::attachments::AttachmentType_obj::__boot();
::spinehx::attachments::AttachmentTypes_obj::__boot();
::spinehx::attachments::Mode_obj::__boot();
::spinehx::attachments::Modes_obj::__boot();
::spinehx::attachments::RegionAttachment_obj::__boot();
::spinehx::attachments::NumberUtils_obj::__boot();
::spinehx::attachments::RegionSequenceAttachment_obj::__boot();
::spinehx::platform::openfl::BitmapDataTexture_obj::__boot();
::spinehx::platform::openfl::BitmapDataTextureLoader_obj::__boot();
::spinehx::platform::openfl::renderers::SkeletonRenderer_obj::__boot();
::spinehx::platform::openfl::renderers::SkeletonRendererDebug_obj::__boot();
}

