//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEHotSearchAdDataModel, NSString;

@interface AWESearchHotAdDefaultWordModel : MTLModel <MTLJSONSerializing>
{
    NSString *_defaultWord;
    NSString *_searchWord;
    long long _position;
    AWEHotSearchAdDataModel *_adData;
}

+ (id)adDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEHotSearchAdDataModel *adData; // @synthesize adData=_adData;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(copy, nonatomic) NSString *defaultWord; // @synthesize defaultWord=_defaultWord;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

