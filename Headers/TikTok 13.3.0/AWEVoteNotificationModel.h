//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWERelationDynamicLable, AWEURLModel, NSArray, NSNumber, NSString;

@interface AWEVoteNotificationModel : AWEBaseApiModel
{
    NSArray *_fromUser;
    AWEURLModel *_imageUrl;
    NSString *_schemaUrl;
    NSNumber *_mergeCount;
    NSString *_optionText;
    long long _refType;
    AWERelationDynamicLable *_relationLabel;
}

+ (id)relationLabelJSONTransformer;
+ (id)imageUrlJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWERelationDynamicLable *relationLabel; // @synthesize relationLabel=_relationLabel;
@property(nonatomic) long long refType; // @synthesize refType=_refType;
@property(copy, nonatomic) NSString *optionText; // @synthesize optionText=_optionText;
@property(retain, nonatomic) NSNumber *mergeCount; // @synthesize mergeCount=_mergeCount;
@property(retain, nonatomic) NSString *schemaUrl; // @synthesize schemaUrl=_schemaUrl;
@property(retain, nonatomic) AWEURLModel *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSArray *fromUser; // @synthesize fromUser=_fromUser;
- (void).cxx_destruct;

@end

