//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeatureInitializer.h"

@class SCFeatureReference, SCUserSession;

@interface SCLensPushNotificationFeatureInitializer : SCFeatureInitializer
{
    SCUserSession *_userSession;
    SCFeatureReference *_lensCarouselFeatureRef;
}

- (void).cxx_destruct;
- (id)createInstance;
- (_Bool)enabled;
- (id)initWithUserSession:(id)arg1 lensCarouselFeatureRef:(id)arg2;

@end

