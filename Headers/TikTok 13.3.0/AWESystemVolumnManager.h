//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPVolumeView;

@interface AWESystemVolumnManager : NSObject
{
    MPVolumeView *_volumeView;
}

+ (id)volumeString;
+ (id)sharedManager;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
- (void).cxx_destruct;
- (id)p_statusBarWindow;
- (id)p_createVolumeView;
- (void)clearVolumeView;
- (void)dismissSystemVolumeView:(_Bool)arg1;
- (id)volumnViewSlider;
@property(nonatomic) double volumn;

@end

