//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWESearchXiguaVideoModel, NSArray;

@interface AWESearchXiguaVideoWithPositionModel : AWEBaseApiModel
{
    AWESearchXiguaVideoModel *_videoInfoModel;
    NSArray *_positions;
}

+ (id)positionsJSONTransformer;
+ (id)videoInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *positions; // @synthesize positions=_positions;
@property(retain, nonatomic) AWESearchXiguaVideoModel *videoInfoModel; // @synthesize videoInfoModel=_videoInfoModel;
- (void).cxx_destruct;

@end
