//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaRemoteVideoCatalogProperties-Protocol.h"

@class NSURL;

@interface SCBitmojiRemoteVideoCatalog : NSObject <SCOperaRemoteVideoCatalogProperties>
{
    NSURL *_videoURL;
}

@property(readonly, copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
- (id)propertiesForCatalog;
- (id)initWithDictionary:(id)arg1;

@end
