//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WAProfilePictureManager;

@interface WASpotlightPictureManager : NSObject
{
    NSMutableDictionary *_thumbnailURLCache;
    WAProfilePictureManager *_profilePictureManager;
}

@property(readonly, nonatomic) WAProfilePictureManager *profilePictureManager; // @synthesize profilePictureManager=_profilePictureManager;
- (void).cxx_destruct;
- (void)profilePictureManagerPictureDidChange:(id)arg1;
- (id)thumbnailURLForJID:(id)arg1;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (id)init;

@end

