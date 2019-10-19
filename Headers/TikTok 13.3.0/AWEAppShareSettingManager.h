//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEAppShareSettingManager-Protocol.h"

@class NSString;

@interface AWEAppShareSettingManager : NSObject <AWEAppShareSettingManager>
{
}

+ (_Bool)shouldShareAfterDownload;
+ (id)_defaultShareSettingsWithArray:(id)arg1;
+ (id)_tencentSharePlatforms;
+ (id)webViewShareHostsWhiteList;
+ (_Bool)shouldNotShareAttachmentURLToSnapchat;
+ (_Bool)shouldPreventSnapchatCrash;
+ (_Bool)shouldIncludeIIDInShareURLForShareType:(long long)arg1;
+ (_Bool)shouldIncludeIIDInShareURLWithType:(id)arg1;
+ (_Bool)shouldIncludeIIDInShareURL;
+ (_Bool)shouldIncludeUCodeInShareURL;
+ (_Bool)tencentShareSDKDisabled;
+ (id)businessOpportunityURL;
+ (_Bool)enableBusinessOpportunity;
+ (id)displayedShareGifSettings;
+ (id)displayedShareSettings;
+ (id)shareGifSettingWithPlatformId:(id)arg1;
+ (id)shareSettingWithPlatformId:(id)arg1;
+ (id)actionChannelTypes;
+ (id)shareChannelTypes;
+ (id)shareActionSettings;
+ (id)shareGifSettings;
+ (id)shareSettings;
+ (_Bool)webViewShareDirectWithQRCode;
+ (_Bool)enableShowGifButton;
+ (_Bool)forbidDownloadLocal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

