//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSArray;

@interface IESLiveRoomAudioRecordAnimationView : UIView
{
    CADisplayLink *_displayLink;
    double _lastUpdateTimeStemp;
    NSArray *_heightDeltaArray;
    double _animationFPS;
}

@property(nonatomic) double animationFPS; // @synthesize animationFPS=_animationFPS;
@property(retain, nonatomic) NSArray *heightDeltaArray; // @synthesize heightDeltaArray=_heightDeltaArray;
@property(nonatomic) double lastUpdateTimeStemp; // @synthesize lastUpdateTimeStemp=_lastUpdateTimeStemp;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)destroyDisplayLink;
- (void)setupDisplayLink;
- (void)willMoveToWindow:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)init;
- (void)dealloc;

@end

