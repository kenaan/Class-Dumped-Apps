//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEOneDayLifeStoryModel;

@interface AWECreateStoryResponse : AWEBaseApiModel
{
    AWEOneDayLifeStoryModel *_story;
}

+ (id)storyExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEOneDayLifeStoryModel *story; // @synthesize story=_story;
- (void).cxx_destruct;

@end

