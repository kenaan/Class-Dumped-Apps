//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASImageCacheProtocol-Protocol.h"
#import "ASImageDownloaderProtocol-Protocol.h"

@interface _TtC6Reddit37MetaBadgePromoScrollerBadgeDownloader : NSObject <ASImageCacheProtocol, ASImageDownloaderProtocol>
{
    // Error parsing type: , name: queue
    // Error parsing type: , name: cache
    // Error parsing type: , name: underlyingDownloader
}

- (void).cxx_destruct;
- (id)init;
- (void)cancelImageDownloadForIdentifier:(id)arg1;
- (id)downloadImageWithURL:(id)arg1 callbackQueue:(id)arg2 downloadProgress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)synchronouslyFetchedCachedImageWithURL:(id)arg1;
- (void)cachedImageWithURL:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

