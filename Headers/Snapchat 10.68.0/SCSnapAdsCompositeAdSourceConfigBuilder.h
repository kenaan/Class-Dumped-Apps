//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSnapAdsAdSourceConfig;

@interface SCSnapAdsCompositeAdSourceConfigBuilder : NSObject
{
    SCSnapAdsAdSourceConfig *_primaryAdSourceConfig;
    SCSnapAdsAdSourceConfig *_shadowAdSourceConfig;
}

+ (id)snapAdsCompositeAdSourceConfigFromExistingSnapAdsCompositeAdSourceConfig:(id)arg1;
+ (id)snapAdsCompositeAdSourceConfig;
- (void).cxx_destruct;
- (id)withShadowAdSourceConfig:(id)arg1;
- (id)withPrimaryAdSourceConfig:(id)arg1;
- (id)build;

@end

