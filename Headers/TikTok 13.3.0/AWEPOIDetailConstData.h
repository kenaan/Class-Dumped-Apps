//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface AWEPOIDetailConstData : NSObject
{
    _Bool _isPreview;
    _Bool _hasCouponActivity;
    NSString *_poiID;
    NSString *_groupID;
    NSString *_authorID;
    NSString *_adLogExtra;
    NSString *_adCreativeID;
    NSString *_adGroupID;
    NSDictionary *_searchLogPassback;
    unsigned long long _initAnchor;
    NSString *_stickerId;
    NSString *_challengeId;
    NSString *_referString;
    NSNumber *_attachedActivityId;
}

@property(copy, nonatomic) NSNumber *attachedActivityId; // @synthesize attachedActivityId=_attachedActivityId;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(nonatomic) _Bool hasCouponActivity; // @synthesize hasCouponActivity=_hasCouponActivity;
@property(copy, nonatomic) NSString *challengeId; // @synthesize challengeId=_challengeId;
@property(copy, nonatomic) NSString *stickerId; // @synthesize stickerId=_stickerId;
@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(nonatomic) unsigned long long initAnchor; // @synthesize initAnchor=_initAnchor;
@property(copy, nonatomic) NSDictionary *searchLogPassback; // @synthesize searchLogPassback=_searchLogPassback;
@property(copy, nonatomic) NSString *adGroupID; // @synthesize adGroupID=_adGroupID;
@property(copy, nonatomic) NSString *adCreativeID; // @synthesize adCreativeID=_adCreativeID;
@property(copy, nonatomic) NSString *adLogExtra; // @synthesize adLogExtra=_adLogExtra;
@property(copy, nonatomic) NSString *authorID; // @synthesize authorID=_authorID;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
- (void).cxx_destruct;
- (_Bool)hasScanActivity;

@end

