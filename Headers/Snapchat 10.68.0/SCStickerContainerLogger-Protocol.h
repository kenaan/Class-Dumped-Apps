//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol SCStickerProtocol;

@protocol SCStickerContainerLogger
- (void)logStickerAdded:(id <SCStickerProtocol>)arg1 isFromRecents:(_Bool)arg2 isFromSearch:(_Bool)arg3 isCreatedCustomSticker:(_Bool)arg4 isAutoGeneratedSticker:(_Bool)arg5;
- (void)updateTappedInfoSticker:(id <SCStickerProtocol>)arg1 newSticker:(id <SCStickerProtocol>)arg2;
@end

