//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCOperaViewersContextTableDataEntry-Protocol.h"

@class NSDate, NSString, SCSnapchatter;

@interface SCStoriesPlaybackSnapViewerInfo : NSObject <SCOperaViewersContextTableDataEntry, NSCopying>
{
    _Bool _screenshotted;
    _Bool _saved;
    NSDate *_timestamp;
    SCSnapchatter *_snapchatter;
}

@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) _Bool saved; // @synthesize saved=_saved;
@property(readonly, nonatomic) _Bool screenshotted; // @synthesize screenshotted=_screenshotted;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithScreenshotted:(_Bool)arg1 saved:(_Bool)arg2 timestamp:(id)arg3 snapchatter:(id)arg4;
- (id)avatarViewProperties;
- (id)iconKey;
- (id)username;
- (id)displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

