//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMConversationOperationResponse-Protocol.h"

@class NSError, NSString;

@interface TIMConversationOperationResponseWrapper : NSObject <TIMConversationOperationResponse>
{
    id _internalObject;
}

@property(retain, nonatomic) id internalObject; // @synthesize internalObject=_internalObject;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *errorInBody;
@property(readonly, copy, nonatomic) NSString *extraInfo;
@property(readonly, copy, nonatomic) NSString *checkMessage;
@property(readonly, nonatomic) long long checkCode;
@property(readonly, nonatomic) int status;
- (_Bool)hasStatus;
- (id)initWithObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

