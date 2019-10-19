//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSValue;
@protocol HTSLiveDetailRouter, HTSLivePluginLayoutMachineProvider, HTSLiveViewHierarchyProvider;

@interface HTSLiveUserEnterConfiguration : NSObject
{
    long long _userEnterMode;
    NSValue *_viewFrame;
    NSValue *_superViewFrame;
    NSValue *_middleViewFrame;
    NSValue *_nobleViewFrame;
    NSValue *_nobleSuperViewFrame;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <HTSLivePluginLayoutMachineProvider> _layoutProvider;
    id <HTSLiveDetailRouter> _router;
}

@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <HTSLivePluginLayoutMachineProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) NSValue *nobleSuperViewFrame; // @synthesize nobleSuperViewFrame=_nobleSuperViewFrame;
@property(retain, nonatomic) NSValue *nobleViewFrame; // @synthesize nobleViewFrame=_nobleViewFrame;
@property(retain, nonatomic) NSValue *middleViewFrame; // @synthesize middleViewFrame=_middleViewFrame;
@property(retain, nonatomic) NSValue *superViewFrame; // @synthesize superViewFrame=_superViewFrame;
@property(retain, nonatomic) NSValue *viewFrame; // @synthesize viewFrame=_viewFrame;
@property(nonatomic) long long userEnterMode; // @synthesize userEnterMode=_userEnterMode;
- (void).cxx_destruct;
- (void)setFrameOriginY:(double)arg1;
- (void)fragmentOrientationChanged:(long long)arg1 inGame:(_Bool)arg2;
- (void)resetFrame;
- (id)init;

@end

