//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFLXDataMigrationServiceProtocol-Protocol.h"

@class NSArray, NSOperationQueue, NSString;

@interface NFLXFalcorDataMigrationService : NSObject <NFLXDataMigrationServiceProtocol>
{
    NSArray *_migrators;
    NSOperationQueue *_migrationOperationQueue;
}

@property(retain, nonatomic) NSOperationQueue *migrationOperationQueue; // @synthesize migrationOperationQueue=_migrationOperationQueue;
@property(retain, nonatomic) NSArray *migrators; // @synthesize migrators=_migrators;
- (void).cxx_destruct;
- (unsigned long long)migrate:(id)arg1;
- (void)migrate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

