//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESMMEffectCover : NSObject
{
    void *_handle;
    void *_face_handle;
    void *_attr_handle;
    void *_effect_handle;
    CDUnknownFunctionPointerType _finder_handle;
}

- (void)dealloc;
- (void)effectDestroy;
- (_Bool)getSuggestConver:(CDUnknownBlockType)arg1;
- (float)processImage:(struct CGImage *)arg1 timeStamp:(int)arg2;
- (_Bool)getCoverTimeLine:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

@end

