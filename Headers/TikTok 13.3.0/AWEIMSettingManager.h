//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWESettingsComboRequestProtocol-Protocol.h"

@class AWEIMSettingModel, NSString;

@interface AWEIMSettingManager : NSObject <AWESettingsComboRequestProtocol>
{
    _Bool _lastFetchSuccess;
    AWEIMSettingModel *_model;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool lastFetchSuccess; // @synthesize lastFetchSuccess=_lastFetchSuccess;
@property(retain, nonatomic) AWEIMSettingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)saveCurrentModel;
- (void)clearIMSettingWhenLogout;
- (void)changeChatPrivacy:(long long)arg1 withURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchIMSettingWithRetry:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchIMSettingWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)doOriginalActions;
- (void)updateSettingsWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

