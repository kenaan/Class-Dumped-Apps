//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSNumber, NSString;

@interface AWEPOIEntryModel : AWEBaseApiModel
{
    AWEURLModel *_iconUrl;
    NSNumber *_classCode;
    NSString *_entryName;
}

+ (id)iconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *entryName; // @synthesize entryName=_entryName;
@property(copy, nonatomic) NSNumber *classCode; // @synthesize classCode=_classCode;
@property(retain, nonatomic) AWEURLModel *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;

@end

