//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationTopGenreModelEntity-Protocol.h"

@class NSArray, NSString;

@interface SPTAssistedCurationTopGenreModelEntityImplementation : NSObject <SPTAssistedCurationTopGenreModelEntity>
{
    NSString *_name;
    NSArray *_tracks;
}

@property(readonly, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

