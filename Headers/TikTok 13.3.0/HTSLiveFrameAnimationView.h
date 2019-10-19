//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSArray;

@interface HTSLiveFrameAnimationView : UIView
{
    _Bool _shouldStop;
    _Bool _shouldDestroy;
    long long _frameInterval;
    NSArray *_images;
    CADisplayLink *_displayLink;
    long long _currentIndex;
}

@property(nonatomic) _Bool shouldDestroy; // @synthesize shouldDestroy=_shouldDestroy;
@property(nonatomic) _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) long long frameInterval; // @synthesize frameInterval=_frameInterval;
- (void).cxx_destruct;
- (_Bool)running;
- (void)destryDisplayLink;
- (void)stopWithDestroy:(_Bool)arg1;
- (void)setupDisplayLink;
- (void)step:(id)arg1;
- (void)stopOnComplete:(_Bool)arg1 withDestroy:(_Bool)arg2;
- (void)stopOnComplete:(_Bool)arg1;
- (void)stop;
- (void)startOnce;
- (void)start;
- (id)initWithImages:(id)arg1;
- (void)dealloc;

@end

