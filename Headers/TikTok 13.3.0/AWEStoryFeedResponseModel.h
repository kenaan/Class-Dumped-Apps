//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEStoryCommerceModel, NSArray, NSNumber;

@interface AWEStoryFeedResponseModel : AWEBaseApiModel
{
    _Bool _hasMore;
    _Bool _enableAutoOpenWindow;
    NSNumber *_cursor;
    NSArray *_storyList;
    AWEStoryCommerceModel *_commerceModel;
}

+ (id)commerceModelJSONTransformer;
+ (id)storyListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEStoryCommerceModel *commerceModel; // @synthesize commerceModel=_commerceModel;
@property(nonatomic) _Bool enableAutoOpenWindow; // @synthesize enableAutoOpenWindow=_enableAutoOpenWindow;
@property(copy, nonatomic) NSArray *storyList; // @synthesize storyList=_storyList;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;

@end

