//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTGLEyeViewState, YTGLFrameViewState, YTGLModelMatrix;

@protocol YTGLSceneNode <NSObject>
@property(nonatomic) _Bool hidden;
@property(readonly, nonatomic) YTGLModelMatrix *model;
- (void)shutDown;
- (_Bool)isInRangeWithFrameViewState:(YTGLFrameViewState *)arg1;
- (_Bool)isFocusedWithFrameViewState:(YTGLFrameViewState *)arg1;
- (void)drawWithEyeViewState:(YTGLEyeViewState *)arg1;
- (void)setupFrameWithFrameViewState:(YTGLFrameViewState *)arg1;
@end

