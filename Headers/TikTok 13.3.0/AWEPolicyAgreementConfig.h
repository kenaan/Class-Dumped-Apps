//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEPolicyAgreementExtra, NSNumber, NSString;

@interface AWEPolicyAgreementConfig : AWEBaseApiModel
{
    NSString *_rejectAction;
    NSString *_url;
    NSNumber *_version;
    AWEPolicyAgreementExtra *_extra;
}

+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEPolicyAgreementExtra *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *rejectAction; // @synthesize rejectAction=_rejectAction;
- (void).cxx_destruct;

@end

