//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCoreCameraFeatureProvider.h"

@class SCFeature;
@protocol SCFeatureVerticalToolbarController;

@interface SCLiveLensPreviewFeatureProvider : SCCoreCameraFeatureProvider
{
    SCFeature<SCFeatureVerticalToolbarController> *_lensVerticalToolbarController;
}

@property(readonly, nonatomic) SCFeature<SCFeatureVerticalToolbarController> *lensVerticalToolbarController; // @synthesize lensVerticalToolbarController=_lensVerticalToolbarController;
- (void).cxx_destruct;
- (void)resetInstances;
- (void)initializeFeatures:(id)arg1;
- (id)initWithCapturerToken:(id)arg1 userSession:(id)arg2 notificationManager:(id)arg3;

@end

