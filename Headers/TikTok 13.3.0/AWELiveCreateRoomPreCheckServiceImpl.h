//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveCreateRoomPreCheckService-Protocol.h"

@class NSString, UINavigationController;
@protocol IESLiveTracker;

@interface AWELiveCreateRoomPreCheckServiceImpl : NSObject <IESLiveCreateRoomPreCheckService>
{
    CDUnknownBlockType _createRoomBlock;
    UINavigationController *_nav;
    id <IESLiveTracker> _tracker;
}

@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(nonatomic) __weak UINavigationController *nav; // @synthesize nav=_nav;
@property(copy, nonatomic) CDUnknownBlockType createRoomBlock; // @synthesize createRoomBlock=_createRoomBlock;
- (void).cxx_destruct;
- (void)showGetSupportAlert;
- (void)createRoomRequestHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)convertWith:(unsigned long long)arg1;
- (_Bool)agreementDone;
- (CDUnknownBlockType)preCheckErrorHandler;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

