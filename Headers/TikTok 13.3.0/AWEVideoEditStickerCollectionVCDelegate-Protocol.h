//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEVideoEditStickerCollectionViewController, IESEffectModel;

@protocol AWEVideoEditStickerCollectionVCDelegate <NSObject>

@optional
- (void)stickerCollectionViewController:(AWEVideoEditStickerCollectionViewController *)arg1 didSelectSticker:(IESEffectModel *)arg2 atIndex:(long long)arg3 downloadProgressBlock:(void (^)(double))arg4 downloadedBlock:(void (^)(void))arg5;
- (void)stickerCollectionViewController:(AWEVideoEditStickerCollectionViewController *)arg1 didSelectSticker:(IESEffectModel *)arg2 atIndex:(long long)arg3 downloadingBlock:(void (^)(void))arg4 downloadedBlock:(void (^)(void))arg5;
@end

