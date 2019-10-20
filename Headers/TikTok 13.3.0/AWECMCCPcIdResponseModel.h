//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AWECMCCPcIdResponseModel : MTLModel <MTLJSONSerializing>
{
    NSString *_msgId;
    NSString *_systemTime;
    NSString *_message;
    NSString *_expandParams;
    NSString *_resultCode;
    NSString *_desc;
    NSString *_pcId;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *pcId; // @synthesize pcId=_pcId;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(copy, nonatomic) NSString *expandParams; // @synthesize expandParams=_expandParams;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *systemTime; // @synthesize systemTime=_systemTime;
@property(copy, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
