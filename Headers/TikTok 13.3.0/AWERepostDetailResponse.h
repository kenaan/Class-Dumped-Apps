//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEAwemeModel;

@interface AWERepostDetailResponse : AWEBaseApiModel
{
    AWEAwemeModel *_aweme;
}

+ (id)awemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEAwemeModel *aweme; // @synthesize aweme=_aweme;
- (void).cxx_destruct;

@end

