//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWERelationDynamicLable : AWEBaseApiModel
{
    NSString *_nickname;
    NSString *_labelInfo;
    NSString *_userID;
    long long _labelType;
}

+ (id)labelTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long labelType; // @synthesize labelType=_labelType;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *labelInfo; // @synthesize labelInfo=_labelInfo;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
- (void).cxx_destruct;

@end

