//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseSettings.h"

#import "AWESettingsComboRequestProtocol-Protocol.h"

@class NSString;

@interface AWEPlatformSettings : AWEBaseSettings <AWESettingsComboRequestProtocol>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void)updateSettings:(id)arg1;
- (void)fetchSettings;
- (void)dealloc;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)doOriginalActions;
- (void)updateSettingsWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

