//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface AWECoreMLInputFeature : MTLModel <MTLJSONSerializing>
{
    NSString *_feature;
    NSString *_type;
    NSString *_op;
    NSArray *_args;
    NSArray *_opts;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *opts; // @synthesize opts=_opts;
@property(retain, nonatomic) NSArray *args; // @synthesize args=_args;
@property(retain, nonatomic) NSString *op; // @synthesize op=_op;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *feature; // @synthesize feature=_feature;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

