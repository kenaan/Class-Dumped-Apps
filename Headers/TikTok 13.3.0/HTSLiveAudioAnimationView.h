//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer;

@interface HTSLiveAudioAnimationView : UIView
{
    _Bool _shouldStop;
    NSTimer *_rippleTimer;
}

@property(nonatomic) _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
@property(retain, nonatomic) NSTimer *rippleTimer; // @synthesize rippleTimer=_rippleTimer;
- (void).cxx_destruct;
- (void)addRippleLayer;
- (void)closeRippleTimer;
- (void)startRipple;
- (void)stop;
- (void)start;
- (void)dealloc;

@end

