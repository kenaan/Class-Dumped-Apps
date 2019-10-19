//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEAwemeModel, NSArray, NSMutableArray;

@interface AWEChallengeSingleModel : AWEBaseApiModel
{
    unsigned long long _type;
    AWEAwemeModel *_aweme;
    NSMutableArray *_articleList;
    NSArray *_commentList;
}

+ (CDUnknownBlockType)isEqualBlock;
+ (id)awemeJSONTransformer;
+ (id)commentListJSONTransformer;
+ (id)articleListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *commentList; // @synthesize commentList=_commentList;
@property(copy, nonatomic) NSMutableArray *articleList; // @synthesize articleList=_articleList;
@property(retain, nonatomic) AWEAwemeModel *aweme; // @synthesize aweme=_aweme;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

