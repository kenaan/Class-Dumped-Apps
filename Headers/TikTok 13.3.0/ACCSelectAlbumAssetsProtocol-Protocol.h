//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol ACCRecodInputDataProtocol, ACCSelectAlbumAssetsComponetProtocol;

@protocol ACCSelectAlbumAssetsProtocol <NSObject>
- (UIViewController<ACCSelectAlbumAssetsComponetProtocol> *)selectAlbumAssetsPageWithType:(unsigned long long)arg1 inputData:(id <ACCRecodInputDataProtocol>)arg2 select:(void (^)(AWEAssetModel *))arg3 dismiss:(void (^)(void))arg4;
@end

