//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface AWEUserPolicyTermModel : MTLModel <MTLJSONSerializing>
{
    NSString *_business;
    NSString *_version;
    NSString *_style;
    NSString *_title;
    NSString *_body;
    NSArray *_actions;
}

+ (id)actionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

