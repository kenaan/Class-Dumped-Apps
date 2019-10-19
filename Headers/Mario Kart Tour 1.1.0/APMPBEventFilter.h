//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NANOMessageBase.h"

@class NSString;

@interface APMPBEventFilter : NSObject <NANOMessageBase>
{
    CDStruct_e1a27b1c *_messageInfo;
}

@property(readonly, nonatomic) CDStruct_e1a27b1c *messageInfo; // @synthesize messageInfo=_messageInfo;
@property(readonly, nonatomic) CDUnknownFunctionPointerType copyMessageInfoFn;
@property(readonly, nonatomic) CDUnknownFunctionPointerType deallocMessageFieldFn;
@property(readonly, nonatomic) CDUnknownFunctionPointerType initMessageInfoFn;
- (id)protoBuffer;
- (id)initWithBuffer:(id)arg1;
- (id)initWithMessageInfo:(CDStruct_e1a27b1c *)arg1;
@property(readonly, nonatomic) const char *messageID;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
