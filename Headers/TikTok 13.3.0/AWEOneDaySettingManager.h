//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEOneDaySettingManagerProtocol-Protocol.h"
#import "AWEUserMessage-Protocol.h"

@class AWEOneDayGeneralSettingModel, NSString;

@interface AWEOneDaySettingManager : NSObject <AWEUserMessage, AWEOneDaySettingManagerProtocol>
{
    AWEOneDayGeneralSettingModel *_settingModel;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AWEOneDayGeneralSettingModel *settingModel; // @synthesize settingModel=_settingModel;
- (void).cxx_destruct;
- (void)didFinishLogin;
- (void)updateSettingModel:(id)arg1;
- (void)configOneDaySettingsWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchOneDaySettingsCompletion:(CDUnknownBlockType)arg1;
- (_Bool)allowShakeToCamera;
- (void)fetchSettings;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

