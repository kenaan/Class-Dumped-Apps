//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEShareSchemaChallengeModel : AWEBaseApiModel
{
    NSString *_challengeName;
    NSString *_authorName;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *challengeName; // @synthesize challengeName=_challengeName;
- (void).cxx_destruct;

@end
