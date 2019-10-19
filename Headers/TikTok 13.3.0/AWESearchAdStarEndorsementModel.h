//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEURLModel, AWEUserBrandInfoModel, AWEUserModel, NSArray, NSNumber, NSString;

@interface AWESearchAdStarEndorsementModel : MTLModel <MTLJSONSerializing>
{
    _Bool _isPreview;
    long long _adType;
    NSNumber *_adID;
    NSNumber *_creativeID;
    NSString *_type;
    NSString *_title;
    NSString *_label;
    NSString *_source;
    NSString *_logExtra;
    NSString *_webURL;
    NSString *_webTitle;
    NSString *_openURL;
    NSString *_ironManURL;
    AWEURLModel *_trackURLList;
    AWEURLModel *_clickTrackURLList;
    NSArray *_adImageURLList;
    NSArray *_challengeList;
    AWEUserBrandInfoModel *_brandInfoModel;
    NSString *_guideText;
    long long _nativeType;
    long long _countdown;
    NSArray *_iconList;
    NSString *_subText;
    AWEUserModel *_advertiserInfo;
    NSArray *_advancedInfos;
}

+ (id)brandInfoModelJSONTransformer;
+ (id)challengeListJSONTransformer;
+ (id)iconListJSONTransformer;
+ (id)advancedInfosJSONTransformer;
+ (id)adImageURLListJSONTransformer;
+ (id)advertiserInfoJSONTransformer;
+ (id)clickTrackURLListJSONTransformer;
+ (id)trackURLListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *advancedInfos; // @synthesize advancedInfos=_advancedInfos;
@property(retain, nonatomic) AWEUserModel *advertiserInfo; // @synthesize advertiserInfo=_advertiserInfo;
@property(copy, nonatomic) NSString *subText; // @synthesize subText=_subText;
@property(copy, nonatomic) NSArray *iconList; // @synthesize iconList=_iconList;
@property(nonatomic) long long countdown; // @synthesize countdown=_countdown;
@property(nonatomic) long long nativeType; // @synthesize nativeType=_nativeType;
@property(copy, nonatomic) NSString *guideText; // @synthesize guideText=_guideText;
@property(retain, nonatomic) AWEUserBrandInfoModel *brandInfoModel; // @synthesize brandInfoModel=_brandInfoModel;
@property(copy, nonatomic) NSArray *challengeList; // @synthesize challengeList=_challengeList;
@property(copy, nonatomic) NSArray *adImageURLList; // @synthesize adImageURLList=_adImageURLList;
@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(retain, nonatomic) AWEURLModel *clickTrackURLList; // @synthesize clickTrackURLList=_clickTrackURLList;
@property(retain, nonatomic) AWEURLModel *trackURLList; // @synthesize trackURLList=_trackURLList;
@property(copy, nonatomic) NSString *ironManURL; // @synthesize ironManURL=_ironManURL;
@property(copy, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(copy, nonatomic) NSString *webTitle; // @synthesize webTitle=_webTitle;
@property(copy, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *creativeID; // @synthesize creativeID=_creativeID;
@property(retain, nonatomic) NSNumber *adID; // @synthesize adID=_adID;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
- (void).cxx_destruct;
- (_Bool)hasLinkName;
- (double)cellHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

