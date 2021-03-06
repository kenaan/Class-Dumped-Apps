//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class HLSPlaylist, NSDate, NSURL;

@interface HLSPlaylistCacheItem : NSObject <NSSecureCoding>
{
    HLSPlaylist *_playlist;
    NSURL *_localContentURL;
    NSDate *_lastAccessDate;
    unsigned long long _state;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSDate *lastAccessDate; // @synthesize lastAccessDate=_lastAccessDate;
@property(readonly, nonatomic) NSURL *localContentURL; // @synthesize localContentURL=_localContentURL;
@property(readonly, nonatomic) HLSPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaylist:(id)arg1 localContentURL:(id)arg2 lastAccessDate:(id)arg3 state:(unsigned long long)arg4;

@end

