//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEMusicManager : NSObject
{
}

+ (void)requestCollectingAWEMusicWithID:(id)arg1 type:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestRecommendedListWithCursor:(id)arg1 count:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestMusicRelatedItemsWithID:(id)arg1 type:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestMusicRelatedItemsWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestExternalMusicItemWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestMusicItemWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestAwemeListWithID:(id)arg1 pullType:(id)arg2 cursor:(id)arg3 count:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

