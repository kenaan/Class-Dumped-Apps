//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWECommerceLinkUserInfoModel, NSString;

@interface AWECommerceUserInfoModel : MTLModel <MTLJSONSerializing>
{
    _Bool _showStarAtlasGuide;
    _Bool _hasAdsEntry;
    long long _starAtlasType;
    AWECommerceLinkUserInfoModel *_linkUserInfo;
    long long _authVideoSettingType;
}

+ (id)authVideoSettingTypeJSONTransformer;
+ (id)linkUserInfoJSONTransformer;
+ (id)starAtlasTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long authVideoSettingType; // @synthesize authVideoSettingType=_authVideoSettingType;
@property(nonatomic) _Bool hasAdsEntry; // @synthesize hasAdsEntry=_hasAdsEntry;
@property(retain, nonatomic) AWECommerceLinkUserInfoModel *linkUserInfo; // @synthesize linkUserInfo=_linkUserInfo;
@property(nonatomic) _Bool showStarAtlasGuide; // @synthesize showStarAtlasGuide=_showStarAtlasGuide;
@property(nonatomic) long long starAtlasType; // @synthesize starAtlasType=_starAtlasType;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

