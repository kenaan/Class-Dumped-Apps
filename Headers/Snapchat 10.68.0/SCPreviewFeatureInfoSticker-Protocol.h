//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, SCInfoStickerView;
@protocol SCPerforming, SCPreviewFeatureParentViewControllerAccessing;

@protocol SCPreviewFeatureInfoSticker
@property(nonatomic) __weak id <SCPreviewFeatureParentViewControllerAccessing> delegate;
- (void)handleSendingActionForInfoStickerType:(unsigned long long)arg1 usernames:(NSArray *)arg2 completionPerformer:(id <SCPerforming>)arg3 completion:(void (^)(NSString *, NSString *))arg4;
- (void)disableExistingInfoStickerEditing;
- (_Bool)hasInfoStickerOnSnapWithType:(unsigned long long)arg1;
- (void)insertInfoStickerWithStickerView:(SCInfoStickerView *)arg1 stickerType:(unsigned long long)arg2;
@end
