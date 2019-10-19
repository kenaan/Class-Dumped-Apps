//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSGLFramebuffer, HTSGLPicture, IESInfoStickerParam, NSArray, NSDictionary, NSString;

@interface IESInfoSticker : NSObject
{
    _Bool _needDisplayTop;
    _Bool _changeStickerDuration;
    _Bool _isNeedRemove;
    _Bool _isEffectRemoved;
    short _layer;
    NSString *_resourcePath;
    long long _stickerId;
    const char *_handle;
    double _startTime;
    double _duration;
    IESInfoStickerParam *_param;
    NSArray *_effectInfo;
    NSDictionary *_userinfo;
    HTSGLFramebuffer *_sourceFrame;
    HTSGLPicture *_picture;
    struct CGSize _size;
}

+ (id)infoStickerWithDic:(id)arg1;
@property(retain, nonatomic) HTSGLPicture *picture; // @synthesize picture=_picture;
@property(retain, nonatomic) HTSGLFramebuffer *sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(nonatomic) _Bool isEffectRemoved; // @synthesize isEffectRemoved=_isEffectRemoved;
@property(nonatomic) _Bool isNeedRemove; // @synthesize isNeedRemove=_isNeedRemove;
@property(nonatomic) _Bool changeStickerDuration; // @synthesize changeStickerDuration=_changeStickerDuration;
@property(nonatomic) short layer; // @synthesize layer=_layer;
@property(copy, nonatomic) NSDictionary *userinfo; // @synthesize userinfo=_userinfo;
@property(copy, nonatomic) NSArray *effectInfo; // @synthesize effectInfo=_effectInfo;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) _Bool needDisplayTop; // @synthesize needDisplayTop=_needDisplayTop;
@property(retain, nonatomic) IESInfoStickerParam *param; // @synthesize param=_param;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) const char *handle; // @synthesize handle=_handle;
@property(nonatomic) long long stickerId; // @synthesize stickerId=_stickerId;
@property(retain, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
- (void).cxx_destruct;
- (id)toDicInfo;
- (id)initWithImage:(id)arg1;
- (id)initWithResource:(id)arg1;
- (id)init;

@end

