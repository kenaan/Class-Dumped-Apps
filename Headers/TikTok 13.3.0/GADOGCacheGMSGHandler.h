//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADOGMSGHandler.h"

@class GADOGCacheURLLoader;

@interface GADOGCacheGMSGHandler : GADOGMSGHandler
{
    GADOGCacheURLLoader *_gcacheURLLoader;
}

+ (id)subActionBlockDictionary;
+ (id)actionBlockDictionary;
- (void).cxx_destruct;
- (void)adView:(id)arg1 didReceiveStartCacheAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveGCacheAction:(id)arg2;
- (id)init;

@end

