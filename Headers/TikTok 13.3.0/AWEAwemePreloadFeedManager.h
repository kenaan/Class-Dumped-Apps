//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEHotListDataController, NSArray, NSError;

@interface AWEAwemePreloadFeedManager : NSObject
{
    _Bool _usePreloadFlag;
    NSArray *_feedList;
    NSError *_error;
    CDUnknownBlockType _completionBlock;
    double _cacheFeedResponseDuration;
    double _feedResponseDuration;
    AWEHotListDataController *_hotDataController;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AWEHotListDataController *hotDataController; // @synthesize hotDataController=_hotDataController;
@property(nonatomic) double feedResponseDuration; // @synthesize feedResponseDuration=_feedResponseDuration;
@property(nonatomic) double cacheFeedResponseDuration; // @synthesize cacheFeedResponseDuration=_cacheFeedResponseDuration;
@property(nonatomic) _Bool usePreloadFlag; // @synthesize usePreloadFlag=_usePreloadFlag;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *feedList; // @synthesize feedList=_feedList;
- (void).cxx_destruct;
- (_Bool)preloadValid;
- (void)initialFetch;

@end

