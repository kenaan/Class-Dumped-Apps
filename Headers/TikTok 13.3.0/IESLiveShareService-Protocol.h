//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSEventContext, IESLiveShareContentModel, LiveRoomModel, NSDictionary, NSNumber, NSString, UIViewController;

@protocol IESLiveShareService <NSObject>
- (void)openLiveBoardWithShareContentModel:(IESLiveShareContentModel *)arg1 roomModel:(LiveRoomModel *)arg2 fromController:(UIViewController *)arg3 eventContext:(HTSEventContext *)arg4 dismissBlock:(void (^)(void))arg5;
- (void)openLiveBoardWithShareContentModel:(IESLiveShareContentModel *)arg1 roomModel:(LiveRoomModel *)arg2 fromController:(UIViewController *)arg3 eventContext:(HTSEventContext *)arg4;
- (_Bool)isShareTypeAvailable:(long long)arg1;
- (void)shareByClipToBoardWithRoomModel:(LiveRoomModel *)arg1 params:(NSDictionary *)arg2;
- (void)shareWithContentModel:(IESLiveShareContentModel *)arg1;
- (void)shareWithContentModel:(IESLiveShareContentModel *)arg1 roomModel:(LiveRoomModel *)arg2 complete:(void (^)(_Bool, NSError *))arg3;

@optional
- (void)openLiveBoardForH5WithShareContentModel:(IESLiveShareContentModel *)arg1 fromController:(UIViewController *)arg2 dismissBlock:(void (^)(void))arg3;
- (void)fetchShareInfoService:(NSString *)arg1 roomID:(NSNumber *)arg2;
@end

