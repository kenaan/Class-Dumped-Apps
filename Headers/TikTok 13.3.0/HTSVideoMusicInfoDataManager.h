//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HTSVideoMusicInfoDataManager : NSObject
{
}

+ (void)requestAIRecommendMusicListWithZipURI:(id)arg1 count:(id)arg2 otherParams:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)requestMusicForPhotoMovieWithCursor:(id)arg1 count:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestWithMusicClassId:(id)arg1 cursor:(id)arg2 count:(id)arg3 needRetry:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)requestWithMusicClassId:(id)arg1 cursor:(id)arg2 count:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)requestWithCursor:(id)arg1 count:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

