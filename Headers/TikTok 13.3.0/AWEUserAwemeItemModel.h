//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEURLModel, NSString;

@interface AWEUserAwemeItemModel : MTLModel <MTLJSONSerializing>
{
    NSString *_awemeId;
    AWEURLModel *_coverUrl;
    AWEURLModel *_gifCoverUrl;
    long long _awemeType;
}

+ (id)awemeTypeJSONTransformer;
+ (id)gifCoverUrlJSONTransformer;
+ (id)coverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long awemeType; // @synthesize awemeType=_awemeType;
@property(retain, nonatomic) AWEURLModel *gifCoverUrl; // @synthesize gifCoverUrl=_gifCoverUrl;
@property(retain, nonatomic) AWEURLModel *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *awemeId; // @synthesize awemeId=_awemeId;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

