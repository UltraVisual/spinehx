#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_spinehx_Animation
#include <spinehx/Animation.h>
#endif
#ifndef INCLUDED_spinehx_AttachmentTimeline
#include <spinehx/AttachmentTimeline.h>
#endif
#ifndef INCLUDED_spinehx_BoneData
#include <spinehx/BoneData.h>
#endif
#ifndef INCLUDED_spinehx_Color
#include <spinehx/Color.h>
#endif
#ifndef INCLUDED_spinehx_ColorTimeline
#include <spinehx/ColorTimeline.h>
#endif
#ifndef INCLUDED_spinehx_CurveTimeline
#include <spinehx/CurveTimeline.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_JsonUtils
#include <spinehx/JsonUtils.h>
#endif
#ifndef INCLUDED_spinehx_RotateTimeline
#include <spinehx/RotateTimeline.h>
#endif
#ifndef INCLUDED_spinehx_ScaleTimeline
#include <spinehx/ScaleTimeline.h>
#endif
#ifndef INCLUDED_spinehx_SkeletonData
#include <spinehx/SkeletonData.h>
#endif
#ifndef INCLUDED_spinehx_SkeletonJson
#include <spinehx/SkeletonJson.h>
#endif
#ifndef INCLUDED_spinehx_Skin
#include <spinehx/Skin.h>
#endif
#ifndef INCLUDED_spinehx_SlotData
#include <spinehx/SlotData.h>
#endif
#ifndef INCLUDED_spinehx_Timeline
#include <spinehx/Timeline.h>
#endif
#ifndef INCLUDED_spinehx_TranslateTimeline
#include <spinehx/TranslateTimeline.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureAtlas
#include <spinehx/atlas/TextureAtlas.h>
#endif
#ifndef INCLUDED_spinehx_attachments_AtlasAttachmentLoader
#include <spinehx/attachments/AtlasAttachmentLoader.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Attachment
#include <spinehx/attachments/Attachment.h>
#endif
#ifndef INCLUDED_spinehx_attachments_AttachmentLoader
#include <spinehx/attachments/AttachmentLoader.h>
#endif
#ifndef INCLUDED_spinehx_attachments_AttachmentType
#include <spinehx/attachments/AttachmentType.h>
#endif
#ifndef INCLUDED_spinehx_attachments_AttachmentTypes
#include <spinehx/attachments/AttachmentTypes.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Mode
#include <spinehx/attachments/Mode.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Modes
#include <spinehx/attachments/Modes.h>
#endif
#ifndef INCLUDED_spinehx_attachments_RegionAttachment
#include <spinehx/attachments/RegionAttachment.h>
#endif
#ifndef INCLUDED_spinehx_attachments_RegionSequenceAttachment
#include <spinehx/attachments/RegionSequenceAttachment.h>
#endif
namespace spinehx{

Void SkeletonJson_obj::__construct(::spinehx::attachments::AttachmentLoader attachmentLoader)
{
HX_STACK_PUSH("SkeletonJson::new","spinehx/SkeletonJson.hx",41);
{
	HX_STACK_LINE(50)
	this->scale = (int)1;
	HX_STACK_LINE(56)
	this->attachmentLoader = attachmentLoader;
}
;
	return null();
}

SkeletonJson_obj::~SkeletonJson_obj() { }

Dynamic SkeletonJson_obj::__CreateEmpty() { return  new SkeletonJson_obj; }
hx::ObjectPtr< SkeletonJson_obj > SkeletonJson_obj::__new(::spinehx::attachments::AttachmentLoader attachmentLoader)
{  hx::ObjectPtr< SkeletonJson_obj > result = new SkeletonJson_obj();
	result->__construct(attachmentLoader);
	return result;}

Dynamic SkeletonJson_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SkeletonJson_obj > result = new SkeletonJson_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SkeletonJson_obj::readCurve( ::spinehx::CurveTimeline timeline,int frameIndex,Dynamic valueMap){
{
		HX_STACK_PUSH("SkeletonJson::readCurve","spinehx/SkeletonJson.hx",301);
		HX_STACK_THIS(this);
		HX_STACK_ARG(timeline,"timeline");
		HX_STACK_ARG(frameIndex,"frameIndex");
		HX_STACK_ARG(valueMap,"valueMap");
		HX_STACK_LINE(302)
		::String curveObject = ::spinehx::JsonUtils_obj::getDynamic(valueMap,HX_CSTRING("curve"));		HX_STACK_VAR(curveObject,"curveObject");
		HX_STACK_LINE(303)
		if (((curveObject == null()))){
			HX_STACK_LINE(303)
			return null();
		}
		HX_STACK_LINE(304)
		if (((curveObject == HX_CSTRING("stepped")))){
			HX_STACK_LINE(305)
			timeline->setStepped(frameIndex);
		}
		else{
			HX_STACK_LINE(306)
			if ((::Std_obj::is(curveObject,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(307)
				Dynamic curve = hx::TCastToArray(curveObject);		HX_STACK_VAR(curve,"curve");
				HX_STACK_LINE(308)
				timeline->setCurve(frameIndex,::spinehx::SkeletonJson_obj::getFloatAt(curve,(int)0),::spinehx::SkeletonJson_obj::getFloatAt(curve,(int)1),::spinehx::SkeletonJson_obj::getFloatAt(curve,(int)2),::spinehx::SkeletonJson_obj::getFloatAt(curve,(int)3));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SkeletonJson_obj,readCurve,(void))

Void SkeletonJson_obj::readAnimation( ::String name,Dynamic map,::spinehx::SkeletonData skeletonData){
{
		HX_STACK_PUSH("SkeletonJson::readAnimation","spinehx/SkeletonJson.hx",199);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(map,"map");
		HX_STACK_ARG(skeletonData,"skeletonData");
		HX_STACK_LINE(200)
		Array< ::Dynamic > timelines = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(timelines,"timelines");
		HX_STACK_LINE(201)
		Float duration = (int)0;		HX_STACK_VAR(duration,"duration");
		HX_STACK_LINE(203)
		Dynamic bonesMap = ::spinehx::JsonUtils_obj::getNode(map,HX_CSTRING("bones"));		HX_STACK_VAR(bonesMap,"bonesMap");
		HX_STACK_LINE(204)
		if (((bonesMap != null()))){
			HX_STACK_LINE(205)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = ::spinehx::JsonUtils_obj::fields(bonesMap);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(205)
			while(((_g < _g1->length))){
				HX_STACK_LINE(205)
				::String boneName = _g1->__get(_g);		HX_STACK_VAR(boneName,"boneName");
				HX_STACK_LINE(205)
				++(_g);
				HX_STACK_LINE(206)
				Dynamic timelineMap = ::spinehx::JsonUtils_obj::getNode(bonesMap,boneName);		HX_STACK_VAR(timelineMap,"timelineMap");
				HX_STACK_LINE(207)
				int boneIndex = skeletonData->findBoneIndex(boneName);		HX_STACK_VAR(boneIndex,"boneIndex");
				HX_STACK_LINE(208)
				if (((boneIndex == (int)-1))){
					HX_STACK_LINE(208)
					hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Bone not found: ") + boneName)));
				}
				HX_STACK_LINE(210)
				{
					HX_STACK_LINE(210)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					Array< ::String > _g3 = ::spinehx::JsonUtils_obj::fields(timelineMap);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(210)
					while(((_g2 < _g3->length))){
						HX_STACK_LINE(210)
						::String timelineName = _g3->__get(_g2);		HX_STACK_VAR(timelineName,"timelineName");
						HX_STACK_LINE(210)
						++(_g2);
						HX_STACK_LINE(211)
						Dynamic values = ::spinehx::JsonUtils_obj::getNodesArray(timelineMap,timelineName);		HX_STACK_VAR(values,"values");
						HX_STACK_LINE(213)
						if (((timelineName == HX_CSTRING("rotate")))){
							HX_STACK_LINE(214)
							::spinehx::RotateTimeline timeline = ::spinehx::RotateTimeline_obj::__new(values->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(timeline,"timeline");
							HX_STACK_LINE(215)
							timeline->setBoneIndex(boneIndex);
							HX_STACK_LINE(217)
							int frameIndex = (int)0;		HX_STACK_VAR(frameIndex,"frameIndex");
							HX_STACK_LINE(218)
							{
								HX_STACK_LINE(218)
								int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(218)
								while(((_g4 < values->__Field(HX_CSTRING("length"),true)))){
									HX_STACK_LINE(218)
									Dynamic valueMap = values->__GetItem(_g4);		HX_STACK_VAR(valueMap,"valueMap");
									HX_STACK_LINE(218)
									++(_g4);
									HX_STACK_LINE(219)
									Float time = ::spinehx::SkeletonJson_obj::getFloat(valueMap,HX_CSTRING("time"),null());		HX_STACK_VAR(time,"time");
									HX_STACK_LINE(220)
									timeline->setFrame(frameIndex,time,::spinehx::SkeletonJson_obj::getFloat(valueMap,HX_CSTRING("angle"),null()));
									HX_STACK_LINE(221)
									this->readCurve(timeline,frameIndex,valueMap);
									HX_STACK_LINE(222)
									(frameIndex)++;
								}
							}
							HX_STACK_LINE(224)
							timelines->push(timeline);
							HX_STACK_LINE(225)
							duration = ::Math_obj::max(duration,timeline->getFrames()->__get(((timeline->getFrameCount() * (int)2) - (int)2)));
						}
						else{
							HX_STACK_LINE(227)
							if (((bool((timelineName == HX_CSTRING("translate"))) || bool((timelineName == HX_CSTRING("scale")))))){
								HX_STACK_LINE(228)
								::spinehx::TranslateTimeline timeline;		HX_STACK_VAR(timeline,"timeline");
								HX_STACK_LINE(229)
								Float timelineScale = (int)1;		HX_STACK_VAR(timelineScale,"timelineScale");
								HX_STACK_LINE(230)
								if (((timelineName == HX_CSTRING("scale")))){
									HX_STACK_LINE(231)
									timeline = ::spinehx::ScaleTimeline_obj::__new(values->__Field(HX_CSTRING("length"),true));
								}
								else{
									HX_STACK_LINE(233)
									timeline = ::spinehx::TranslateTimeline_obj::__new(values->__Field(HX_CSTRING("length"),true));
									HX_STACK_LINE(234)
									timelineScale = this->scale;
								}
								HX_STACK_LINE(236)
								timeline->setBoneIndex(boneIndex);
								HX_STACK_LINE(238)
								int frameIndex = (int)0;		HX_STACK_VAR(frameIndex,"frameIndex");
								HX_STACK_LINE(239)
								{
									HX_STACK_LINE(239)
									int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(239)
									while(((_g4 < values->__Field(HX_CSTRING("length"),true)))){
										HX_STACK_LINE(239)
										Dynamic valueMap = values->__GetItem(_g4);		HX_STACK_VAR(valueMap,"valueMap");
										HX_STACK_LINE(239)
										++(_g4);
										HX_STACK_LINE(240)
										Float time = ::spinehx::SkeletonJson_obj::getFloat(valueMap,HX_CSTRING("time"),null());		HX_STACK_VAR(time,"time");
										HX_STACK_LINE(241)
										Float x = ::spinehx::SkeletonJson_obj::getFloat(valueMap,HX_CSTRING("x"),(int)0);		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(242)
										Float y = ::spinehx::SkeletonJson_obj::getFloat(valueMap,HX_CSTRING("y"),(int)0);		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(243)
										timeline->setFrame(frameIndex,time,(x * timelineScale),(y * timelineScale));
										HX_STACK_LINE(244)
										this->readCurve(timeline,frameIndex,valueMap);
										HX_STACK_LINE(245)
										(frameIndex)++;
									}
								}
								HX_STACK_LINE(247)
								timelines->push(timeline);
								HX_STACK_LINE(248)
								duration = ::Math_obj::max(duration,timeline->getFrames()->__get(((timeline->getFrameCount() * (int)3) - (int)3)));
							}
							else{
								HX_STACK_LINE(251)
								hx::Throw (::spinehx::Exception_obj::__new(((((HX_CSTRING("Invalid timeline type for a bone: ") + timelineName) + HX_CSTRING(" (")) + boneName) + HX_CSTRING(")"))));
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(256)
		Dynamic slotsMap = ::spinehx::JsonUtils_obj::getNode(map,HX_CSTRING("slots"));		HX_STACK_VAR(slotsMap,"slotsMap");
		HX_STACK_LINE(257)
		if (((slotsMap != null()))){
			HX_STACK_LINE(258)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = ::spinehx::JsonUtils_obj::fields(slotsMap);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(258)
			while(((_g < _g1->length))){
				HX_STACK_LINE(258)
				::String slotName = _g1->__get(_g);		HX_STACK_VAR(slotName,"slotName");
				HX_STACK_LINE(258)
				++(_g);
				HX_STACK_LINE(259)
				Dynamic timelineMap = ::spinehx::JsonUtils_obj::getNode(slotsMap,slotName);		HX_STACK_VAR(timelineMap,"timelineMap");
				HX_STACK_LINE(260)
				int slotIndex = skeletonData->findSlotIndex(slotName);		HX_STACK_VAR(slotIndex,"slotIndex");
				HX_STACK_LINE(262)
				{
					HX_STACK_LINE(262)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					Array< ::String > _g3 = ::spinehx::JsonUtils_obj::fields(timelineMap);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(262)
					while(((_g2 < _g3->length))){
						HX_STACK_LINE(262)
						::String timelineName = _g3->__get(_g2);		HX_STACK_VAR(timelineName,"timelineName");
						HX_STACK_LINE(262)
						++(_g2);
						HX_STACK_LINE(263)
						Dynamic values = ::spinehx::JsonUtils_obj::getNodesArray(timelineMap,timelineName);		HX_STACK_VAR(values,"values");
						HX_STACK_LINE(264)
						if (((timelineName == HX_CSTRING("color")))){
							HX_STACK_LINE(265)
							::spinehx::ColorTimeline timeline = ::spinehx::ColorTimeline_obj::__new(values->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(timeline,"timeline");
							HX_STACK_LINE(266)
							timeline->setSlotIndex(slotIndex);
							HX_STACK_LINE(268)
							int frameIndex = (int)0;		HX_STACK_VAR(frameIndex,"frameIndex");
							HX_STACK_LINE(269)
							{
								HX_STACK_LINE(269)
								int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(269)
								while(((_g4 < values->__Field(HX_CSTRING("length"),true)))){
									HX_STACK_LINE(269)
									Dynamic valueMap = values->__GetItem(_g4);		HX_STACK_VAR(valueMap,"valueMap");
									HX_STACK_LINE(269)
									++(_g4);
									HX_STACK_LINE(270)
									Float time = ::spinehx::SkeletonJson_obj::getFloat(valueMap,HX_CSTRING("time"),null());		HX_STACK_VAR(time,"time");
									HX_STACK_LINE(271)
									::spinehx::Color color = ::spinehx::Color_obj::valueOf(::spinehx::JsonUtils_obj::getStr(valueMap,HX_CSTRING("color")));		HX_STACK_VAR(color,"color");
									HX_STACK_LINE(272)
									timeline->setFrame(frameIndex,time,color->r,color->g,color->b,color->a);
									HX_STACK_LINE(273)
									this->readCurve(timeline,frameIndex,valueMap);
									HX_STACK_LINE(274)
									(frameIndex)++;
								}
							}
							HX_STACK_LINE(276)
							timelines->push(timeline);
							HX_STACK_LINE(277)
							duration = ::Math_obj::max(duration,timeline->getFrames()->__get(((timeline->getFrameCount() * (int)5) - (int)5)));
						}
						else{
							HX_STACK_LINE(279)
							if (((timelineName == HX_CSTRING("attachment")))){
								HX_STACK_LINE(280)
								::spinehx::AttachmentTimeline timeline = ::spinehx::AttachmentTimeline_obj::__new(values->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(timeline,"timeline");
								HX_STACK_LINE(281)
								timeline->setSlotIndex(slotIndex);
								HX_STACK_LINE(283)
								int frameIndex = (int)0;		HX_STACK_VAR(frameIndex,"frameIndex");
								HX_STACK_LINE(284)
								{
									HX_STACK_LINE(284)
									int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(284)
									while(((_g4 < values->__Field(HX_CSTRING("length"),true)))){
										HX_STACK_LINE(284)
										Dynamic valueMap = values->__GetItem(_g4);		HX_STACK_VAR(valueMap,"valueMap");
										HX_STACK_LINE(284)
										++(_g4);
										HX_STACK_LINE(285)
										Float time = ::spinehx::SkeletonJson_obj::getFloat(valueMap,HX_CSTRING("time"),null());		HX_STACK_VAR(time,"time");
										HX_STACK_LINE(286)
										timeline->setFrame((frameIndex)++,time,::spinehx::JsonUtils_obj::getStr(valueMap,HX_CSTRING("name")));
									}
								}
								HX_STACK_LINE(288)
								timelines->push(timeline);
								HX_STACK_LINE(289)
								duration = ::Math_obj::max(duration,timeline->getFrames()->__get((timeline->getFrameCount() - (int)1)));
							}
							else{
								HX_STACK_LINE(292)
								hx::Throw (::spinehx::Exception_obj::__new(((((HX_CSTRING("Invalid timeline type for a slot: ") + timelineName) + HX_CSTRING(" (")) + slotName) + HX_CSTRING(")"))));
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(298)
		skeletonData->addAnimation(::spinehx::Animation_obj::__new(name,timelines,duration));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SkeletonJson_obj,readAnimation,(void))

::spinehx::attachments::Attachment SkeletonJson_obj::readAttachment( ::spinehx::Skin skin,::String name,Dynamic map){
	HX_STACK_PUSH("SkeletonJson::readAttachment","spinehx/SkeletonJson.hx",151);
	HX_STACK_THIS(this);
	HX_STACK_ARG(skin,"skin");
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(map,"map");
	HX_STACK_LINE(152)
	::String name2 = ::spinehx::JsonUtils_obj::getStr(map,HX_CSTRING("name"));		HX_STACK_VAR(name2,"name2");
	HX_STACK_LINE(153)
	name = (  (((name2 != null()))) ? ::String(name2) : ::String(name) );
	HX_STACK_LINE(155)
	::String typeStr = ::spinehx::JsonUtils_obj::getStr(map,HX_CSTRING("type"));		HX_STACK_VAR(typeStr,"typeStr");
	HX_STACK_LINE(156)
	::spinehx::attachments::AttachmentType type = ::spinehx::attachments::AttachmentTypes_obj::valueOf(typeStr,::spinehx::attachments::AttachmentType_obj::region);		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(157)
	::spinehx::attachments::Attachment attachment = this->attachmentLoader->newAttachment(skin,type,name);		HX_STACK_VAR(attachment,"attachment");
	HX_STACK_LINE(159)
	if ((::Std_obj::is(attachment,hx::ClassOf< ::spinehx::attachments::RegionSequenceAttachment >()))){
		HX_STACK_LINE(160)
		::spinehx::attachments::RegionSequenceAttachment regionSequenceAttachment = hx::TCast< spinehx::attachments::RegionSequenceAttachment >::cast(attachment);		HX_STACK_VAR(regionSequenceAttachment,"regionSequenceAttachment");
		HX_STACK_LINE(162)
		Float fps = ::spinehx::SkeletonJson_obj::getFloat(map,HX_CSTRING("fps"),null());		HX_STACK_VAR(fps,"fps");
		HX_STACK_LINE(163)
		if (((fps == (int)0))){
			HX_STACK_LINE(163)
			hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Region sequence attachment missing fps: ") + name)));
		}
		HX_STACK_LINE(164)
		regionSequenceAttachment->setFrameTime(fps);
		HX_STACK_LINE(166)
		::String modeString = ::spinehx::JsonUtils_obj::getStr(map,HX_CSTRING("mode"));		HX_STACK_VAR(modeString,"modeString");
		HX_STACK_LINE(167)
		regionSequenceAttachment->setMode(::spinehx::attachments::Modes_obj::valueOf(modeString,::spinehx::attachments::Mode_obj::forward));
	}
	HX_STACK_LINE(170)
	if ((::Std_obj::is(attachment,hx::ClassOf< ::spinehx::attachments::RegionAttachment >()))){
		HX_STACK_LINE(171)
		::spinehx::attachments::RegionAttachment regionAttachment = hx::TCast< spinehx::attachments::RegionAttachment >::cast(attachment);		HX_STACK_VAR(regionAttachment,"regionAttachment");
		HX_STACK_LINE(172)
		regionAttachment->setX((::spinehx::SkeletonJson_obj::getFloat(map,HX_CSTRING("x"),(int)0) * this->scale));
		HX_STACK_LINE(173)
		regionAttachment->setY((::spinehx::SkeletonJson_obj::getFloat(map,HX_CSTRING("y"),(int)0) * this->scale));
		HX_STACK_LINE(174)
		regionAttachment->setScaleX(::spinehx::SkeletonJson_obj::getFloat(map,HX_CSTRING("scaleX"),(int)1));
		HX_STACK_LINE(175)
		regionAttachment->setScaleY(::spinehx::SkeletonJson_obj::getFloat(map,HX_CSTRING("scaleY"),(int)1));
		HX_STACK_LINE(176)
		regionAttachment->setRotation(::spinehx::SkeletonJson_obj::getFloat(map,HX_CSTRING("rotation"),(int)0));
		HX_STACK_LINE(177)
		regionAttachment->setWidth((::spinehx::SkeletonJson_obj::getFloat(map,HX_CSTRING("width"),(int)32) * this->scale));
		HX_STACK_LINE(178)
		regionAttachment->setHeight((::spinehx::SkeletonJson_obj::getFloat(map,HX_CSTRING("height"),(int)32) * this->scale));
		HX_STACK_LINE(179)
		regionAttachment->updateOffset();
	}
	HX_STACK_LINE(182)
	return attachment;
}


HX_DEFINE_DYNAMIC_FUNC3(SkeletonJson_obj,readAttachment,return )

::spinehx::SkeletonData SkeletonJson_obj::readSkeletonData( ::String name,::String fileData){
	HX_STACK_PUSH("SkeletonJson::readSkeletonData","spinehx/SkeletonJson.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(fileData,"fileData");
	HX_STACK_LINE(70)
	if (((fileData == null()))){
		HX_STACK_LINE(70)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("file cannot be null.")));
	}
	HX_STACK_LINE(72)
	::spinehx::SkeletonData skeletonData = ::spinehx::SkeletonData_obj::__new();		HX_STACK_VAR(skeletonData,"skeletonData");
	HX_STACK_LINE(73)
	skeletonData->setName(name);
	HX_STACK_LINE(75)
	Dynamic root = ::spinehx::JsonUtils_obj::parse(fileData);		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Dynamic _g1 = ::spinehx::JsonUtils_obj::getNodesArray(root,HX_CSTRING("bones"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(78)
		while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(78)
			Dynamic boneMap = _g1->__GetItem(_g);		HX_STACK_VAR(boneMap,"boneMap");
			HX_STACK_LINE(78)
			++(_g);
			HX_STACK_LINE(79)
			::spinehx::BoneData parent = null();		HX_STACK_VAR(parent,"parent");
			HX_STACK_LINE(80)
			::String parentName = ::spinehx::JsonUtils_obj::getStr(boneMap,HX_CSTRING("parent"));		HX_STACK_VAR(parentName,"parentName");
			HX_STACK_LINE(81)
			if (((parentName != null()))){
				HX_STACK_LINE(82)
				parent = skeletonData->findBone(parentName);
				HX_STACK_LINE(83)
				if (((parent == null()))){
					HX_STACK_LINE(83)
					hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Parent bone not found: ") + parentName)));
				}
			}
			HX_STACK_LINE(85)
			::spinehx::BoneData boneData = ::spinehx::BoneData_obj::__new(::spinehx::JsonUtils_obj::getStr(boneMap,HX_CSTRING("name")),parent);		HX_STACK_VAR(boneData,"boneData");
			HX_STACK_LINE(86)
			boneData->length = (::spinehx::SkeletonJson_obj::getFloat(boneMap,HX_CSTRING("length"),(int)0) * this->scale);
			HX_STACK_LINE(87)
			boneData->x = (::spinehx::SkeletonJson_obj::getFloat(boneMap,HX_CSTRING("x"),(int)0) * this->scale);
			HX_STACK_LINE(88)
			boneData->y = (::spinehx::SkeletonJson_obj::getFloat(boneMap,HX_CSTRING("y"),(int)0) * this->scale);
			HX_STACK_LINE(89)
			boneData->rotation = ::spinehx::SkeletonJson_obj::getFloat(boneMap,HX_CSTRING("rotation"),(int)0);
			HX_STACK_LINE(90)
			boneData->scaleX = ::spinehx::SkeletonJson_obj::getFloat(boneMap,HX_CSTRING("scaleX"),(int)1);
			HX_STACK_LINE(91)
			boneData->scaleY = ::spinehx::SkeletonJson_obj::getFloat(boneMap,HX_CSTRING("scaleY"),(int)1);
			HX_STACK_LINE(92)
			boneData->inheritScale = ::spinehx::JsonUtils_obj::getBool(boneMap,HX_CSTRING("inheritScale"),true);
			HX_STACK_LINE(93)
			boneData->inheritRotation = ::spinehx::JsonUtils_obj::getBool(boneMap,HX_CSTRING("inheritRotation"),true);
			HX_STACK_LINE(94)
			skeletonData->addBone(boneData);
		}
	}
	HX_STACK_LINE(98)
	Dynamic slots = ::spinehx::JsonUtils_obj::getNodesArray(root,HX_CSTRING("slots"));		HX_STACK_VAR(slots,"slots");
	HX_STACK_LINE(99)
	if (((slots != null()))){
		HX_STACK_LINE(100)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		while(((_g < slots->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(100)
			Dynamic slotMap = slots->__GetItem(_g);		HX_STACK_VAR(slotMap,"slotMap");
			HX_STACK_LINE(100)
			++(_g);
			HX_STACK_LINE(101)
			::String slotName = ::spinehx::JsonUtils_obj::getStr(slotMap,HX_CSTRING("name"));		HX_STACK_VAR(slotName,"slotName");
			HX_STACK_LINE(102)
			::String boneName = ::spinehx::JsonUtils_obj::getStr(slotMap,HX_CSTRING("bone"));		HX_STACK_VAR(boneName,"boneName");
			HX_STACK_LINE(103)
			::spinehx::BoneData boneData = skeletonData->findBone(boneName);		HX_STACK_VAR(boneData,"boneData");
			HX_STACK_LINE(104)
			if (((boneData == null()))){
				HX_STACK_LINE(104)
				hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Slot bone not found: ") + boneName)));
			}
			HX_STACK_LINE(105)
			::spinehx::SlotData slotData = ::spinehx::SlotData_obj::__new(slotName,boneData);		HX_STACK_VAR(slotData,"slotData");
			HX_STACK_LINE(107)
			::String color = ::spinehx::JsonUtils_obj::getStr(slotMap,HX_CSTRING("color"));		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(108)
			if (((color != null()))){
				HX_STACK_LINE(108)
				slotData->getColor()->set2(::spinehx::Color_obj::valueOf(color));
			}
			HX_STACK_LINE(110)
			slotData->setAttachmentName(::spinehx::JsonUtils_obj::getStr(slotMap,HX_CSTRING("attachment")));
			HX_STACK_LINE(111)
			slotData->additiveBlending = ::spinehx::JsonUtils_obj::getBool(slotMap,HX_CSTRING("additive"),false);
			HX_STACK_LINE(113)
			skeletonData->addSlot(slotData);
		}
	}
	HX_STACK_LINE(118)
	Dynamic skinsMap = ::spinehx::JsonUtils_obj::getNode(root,HX_CSTRING("skins"));		HX_STACK_VAR(skinsMap,"skinsMap");
	HX_STACK_LINE(119)
	if (((skinsMap != null()))){
		HX_STACK_LINE(120)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::String > _g1 = ::spinehx::JsonUtils_obj::fields(skinsMap);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		while(((_g < _g1->length))){
			HX_STACK_LINE(120)
			::String skinKey = _g1->__get(_g);		HX_STACK_VAR(skinKey,"skinKey");
			HX_STACK_LINE(120)
			++(_g);
			HX_STACK_LINE(121)
			Dynamic skinValue = ::spinehx::JsonUtils_obj::getNode(skinsMap,skinKey);		HX_STACK_VAR(skinValue,"skinValue");
			HX_STACK_LINE(122)
			::spinehx::Skin skin = ::spinehx::Skin_obj::__new(skinKey);		HX_STACK_VAR(skin,"skin");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				Array< ::String > _g3 = ::spinehx::JsonUtils_obj::fields(skinValue);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(123)
				while(((_g2 < _g3->length))){
					HX_STACK_LINE(123)
					::String slotKey = _g3->__get(_g2);		HX_STACK_VAR(slotKey,"slotKey");
					HX_STACK_LINE(123)
					++(_g2);
					HX_STACK_LINE(124)
					Dynamic slotValue = ::spinehx::JsonUtils_obj::getNode(skinValue,slotKey);		HX_STACK_VAR(slotValue,"slotValue");
					HX_STACK_LINE(125)
					int slotIndex = skeletonData->findSlotIndex(slotKey);		HX_STACK_VAR(slotIndex,"slotIndex");
					HX_STACK_LINE(126)
					{
						HX_STACK_LINE(126)
						int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
						Array< ::String > _g5 = ::spinehx::JsonUtils_obj::fields(slotValue);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(126)
						while(((_g4 < _g5->length))){
							HX_STACK_LINE(126)
							::String attachmentKey = _g5->__get(_g4);		HX_STACK_VAR(attachmentKey,"attachmentKey");
							HX_STACK_LINE(126)
							++(_g4);
							HX_STACK_LINE(127)
							Dynamic attachmentValue = ::spinehx::JsonUtils_obj::getNode(slotValue,attachmentKey);		HX_STACK_VAR(attachmentValue,"attachmentValue");
							HX_STACK_LINE(128)
							::spinehx::attachments::Attachment attachment = this->readAttachment(skin,attachmentKey,attachmentValue);		HX_STACK_VAR(attachment,"attachment");
							HX_STACK_LINE(129)
							if (((attachment != null()))){
								HX_STACK_LINE(129)
								skin->addAttachment(slotIndex,attachmentKey,attachment);
							}
						}
					}
				}
			}
			HX_STACK_LINE(132)
			skeletonData->addSkin(skin);
			HX_STACK_LINE(133)
			if (((skin->name == HX_CSTRING("default")))){
				HX_STACK_LINE(133)
				skeletonData->setDefaultSkin(skin);
			}
		}
	}
	HX_STACK_LINE(138)
	Dynamic animationMap = ::spinehx::JsonUtils_obj::getNode(root,HX_CSTRING("animations"));		HX_STACK_VAR(animationMap,"animationMap");
	HX_STACK_LINE(139)
	if (((animationMap != null()))){
		HX_STACK_LINE(140)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::String > _g1 = ::spinehx::JsonUtils_obj::fields(animationMap);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(140)
		while(((_g < _g1->length))){
			HX_STACK_LINE(140)
			::String key = _g1->__get(_g);		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(140)
			++(_g);
			HX_STACK_LINE(141)
			this->readAnimation(key,::spinehx::JsonUtils_obj::getNode(animationMap,key),skeletonData);
		}
	}
	HX_STACK_LINE(148)
	return skeletonData;
}


HX_DEFINE_DYNAMIC_FUNC2(SkeletonJson_obj,readSkeletonData,return )

Void SkeletonJson_obj::setScale( Float scale){
{
		HX_STACK_PUSH("SkeletonJson::setScale","spinehx/SkeletonJson.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scale,"scale");
		HX_STACK_LINE(65)
		this->scale = scale;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonJson_obj,setScale,(void))

Float SkeletonJson_obj::getScale( ){
	HX_STACK_PUSH("SkeletonJson::getScale","spinehx/SkeletonJson.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_LINE(60)
	return this->scale;
}


HX_DEFINE_DYNAMIC_FUNC0(SkeletonJson_obj,getScale,return )

::spinehx::SkeletonJson SkeletonJson_obj::create( ::spinehx::atlas::TextureAtlas atlas){
	HX_STACK_PUSH("SkeletonJson::create","spinehx/SkeletonJson.hx",52);
	HX_STACK_ARG(atlas,"atlas");
	HX_STACK_LINE(52)
	return ::spinehx::SkeletonJson_obj::__new(::spinehx::attachments::AtlasAttachmentLoader_obj::__new(atlas));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SkeletonJson_obj,create,return )

Float SkeletonJson_obj::getFloat( Dynamic map,::String name,hx::Null< Float >  __o_defaultValue){
Float defaultValue = __o_defaultValue.Default(0);
	HX_STACK_PUSH("SkeletonJson::getFloat","spinehx/SkeletonJson.hx",185);
	HX_STACK_ARG(map,"map");
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(defaultValue,"defaultValue");
{
		HX_STACK_LINE(186)
		Dynamic value = ::spinehx::JsonUtils_obj::getDynamic(map,name);		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(187)
		if (((value == null()))){
			HX_STACK_LINE(187)
			return defaultValue;
		}
		HX_STACK_LINE(188)
		if ((::Std_obj::is(value,hx::ClassOf< ::Int >()))){
			HX_STACK_LINE(188)
			return hx::TCast< Int >::cast(value);
		}
		HX_STACK_LINE(189)
		return hx::TCast< Float >::cast(value);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SkeletonJson_obj,getFloat,return )

Float SkeletonJson_obj::getFloatAt( Dynamic array,int index){
	HX_STACK_PUSH("SkeletonJson::getFloatAt","spinehx/SkeletonJson.hx",192);
	HX_STACK_ARG(array,"array");
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(193)
	Dynamic value = array->__GetItem(index);		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(194)
	if (((value == null()))){
		HX_STACK_LINE(194)
		return (int)0;
	}
	HX_STACK_LINE(195)
	if ((::Std_obj::is(value,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(195)
		return hx::TCast< Int >::cast(value);
	}
	HX_STACK_LINE(196)
	return hx::TCast< Float >::cast(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SkeletonJson_obj,getFloatAt,return )


SkeletonJson_obj::SkeletonJson_obj()
{
}

void SkeletonJson_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkeletonJson);
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(attachmentLoader,"attachmentLoader");
	HX_MARK_END_CLASS();
}

void SkeletonJson_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(attachmentLoader,"attachmentLoader");
}

Dynamic SkeletonJson_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"getScale") ) { return getScale_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readCurve") ) { return readCurve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getFloatAt") ) { return getFloatAt_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readAnimation") ) { return readAnimation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readAttachment") ) { return readAttachment_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readSkeletonData") ) { return readSkeletonData_dyn(); }
		if (HX_FIELD_EQ(inName,"attachmentLoader") ) { return attachmentLoader; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SkeletonJson_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"attachmentLoader") ) { attachmentLoader=inValue.Cast< ::spinehx::attachments::AttachmentLoader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkeletonJson_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("attachmentLoader"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("getFloat"),
	HX_CSTRING("getFloatAt"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("readCurve"),
	HX_CSTRING("readAnimation"),
	HX_CSTRING("readAttachment"),
	HX_CSTRING("readSkeletonData"),
	HX_CSTRING("setScale"),
	HX_CSTRING("getScale"),
	HX_CSTRING("scale"),
	HX_CSTRING("attachmentLoader"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkeletonJson_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkeletonJson_obj::__mClass,"__mClass");
};

Class SkeletonJson_obj::__mClass;

void SkeletonJson_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.SkeletonJson"), hx::TCanCast< SkeletonJson_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SkeletonJson_obj::__boot()
{
}

} // end namespace spinehx
