//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAnimatedButton.h"

@interface AWEFlashModeSwitchButton : AWEAnimatedButton
{
    long long _currentFlashMode;
}

@property(nonatomic) long long currentFlashMode; // @synthesize currentFlashMode=_currentFlashMode;
- (id)flashModeIconImageMap;
- (id)iconImageForFlashMode:(long long)arg1;
- (void)switchFlashMode:(long long)arg1;
- (long long)getNextFlashModeForCameraMode:(long long)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

